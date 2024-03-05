#include <iostream>
#include <cmath>
using namespace std;

// Recursive function to find the number of ways N can be expressed as the sum of Kth powers of unique natural numbers
int findWays(int N, int K, int currentNumber, int currentSum) {
    // Base case: If currentSum equals N, we found a valid combination
    if (currentSum == N)
        return 1;
   
    // If currentSum exceeds N or currentNumber exceeds the limit, return 0
    if (currentSum > N || currentNumber > pow(N, 1.0/K))
        return 0;
   
    // Recursive step: Include the current number in the sum and move to the next number
    int waysWithCurrentNumber = findWays(N, K, currentNumber + 1, currentSum + pow(currentNumber, K));
   
    // Recursive step: Exclude the current number and move to the next number
    int waysWithoutCurrentNumber = findWays(N, K, currentNumber + 1, currentSum);
   
    // Return the total number of ways
    return waysWithCurrentNumber + waysWithoutCurrentNumber;
}

int main() {
    int T;
    cin >> T;
   
    while (T--) {
        int N, K;
        cin >> N >> K;
       
        // Call the recursive function with initial values
        int ways = findWays(N, K, 1, 0);
        cout << ways << endl;
    }
   
    return 0;
}
