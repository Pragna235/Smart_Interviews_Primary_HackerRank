#include <iostream>
using namespace std;

// Function to find the current date and day
void find(long long seconds) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string monthNames[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    string dayNames[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    long long year = 1970;
    long long month = 0;
    long long date = 1;
    long long day = 3; // 0 is Thursday, 1 is Friday, and so on

    long long secondsInDay = 24 * 60 * 60;
    long long days = seconds / secondsInDay;

    while (days >= 365) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (days >= 366) {
                days -= 366;
                year++;
            } else {
                break;
            }
        } else {
            days -= 365;
            year++;
        }
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29; // Leap year
    }

    for (int i = 0; i < 12; i++) {
        if (days < daysInMonth[i]) {
            month = i;
            date = days + 1;
            break;
        } else {
            days -= daysInMonth[i];
        }
    }

    day = (3 + seconds / secondsInDay) % 7; // Start from Thursday
    if(date<10){
        cout<<"0"<<date;
    }
    else{
        cout<<date;
    }

    cout << "-" << monthNames[month] << "-" << year << " " << dayNames[day] << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long sec;
        cin >> sec;
        find(sec);
    }
    return 0;
}
