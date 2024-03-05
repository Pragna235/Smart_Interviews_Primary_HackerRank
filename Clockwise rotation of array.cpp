#include <iostream>
using namespace std;

void rotateArray(int arr[], int N, int K) {
    K = K % N;
    int rotated[N];
    for (int i = 0; i < N - K; i++) {
        rotated[i + K] = arr[i];
    }
    for (int i = 0; i < K; i++) {
        rotated[i] = arr[N - K + i];
    }
    for (int i = 0; i < N; i++) {
        arr[i] = rotated[i];
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        rotateArray(arr, N, K);

        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
