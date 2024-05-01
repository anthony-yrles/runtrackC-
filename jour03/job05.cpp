#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    string hour;
    list<int> hourFirstDigit= {0, 1, 2};
    list<int> hourSecondDigit = {0, 1, 2, 3, 4};
    list<int> minuteFirstDigit = {0, 1, 2, 3, 4, 5};
    list<int> minuteSecondDigit = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    do {
        cout << "Entrez une heure (format XXhXX) : ";
        cin >> hour;
    } while (hour.length() != 5 ||
            hour[2] != 'h' ||
            find(hourFirstDigit.begin(), hourFirstDigit.end(), hour[0] - '0') == hourFirstDigit.end() ||
            find(hourSecondDigit.begin(), hourSecondDigit.end(), hour[1] - '0') == hourSecondDigit.end() ||
            find(minuteFirstDigit.begin(), minuteFirstDigit.end(), hour[3] - '0') == minuteFirstDigit.end() ||
            find(minuteSecondDigit.begin(), minuteSecondDigit.end(), hour[4] - '0') == minuteSecondDigit.end()
            );
    cout << "L'heure " << hour << " est valide.";
}