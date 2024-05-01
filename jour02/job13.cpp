#include <iostream>

using namespace std;

int main() {
    int result;
    cout << "   I ";
    for (int i = 0; i <= 11; i++){
        for (int j = 0; j <= 9; j++){ 
            if (i == 0) {
                if (j < 9) {
                    cout << (j + 1) << "  ";
                } else {
                    cout << (j + 1) << " \n";
                }
            } else if (i == 1) {
                if (j < 9) {
                    cout << "----";
                } else {
                    cout << "\n";
                }
            } else {
                if (j == 0) {
                    result = (i - 1) * (j + 1);
                    if (result < 10) {
                        if (i - 1 < 10) {
                            cout << (i - 1) << "  I " << result << "  ";
                        } else {
                            cout << (i - 1) << " I " << result << " ";
                        }
                    } else {
                        cout << (i - 1) << " I " << result << " ";
                    }
                } else if (j < 9) {
                    result = (i - 1) * (j + 1);
                    if (result < 10) {
                        cout << result << "  ";
                    } else {
                        cout << result << " ";
                    }
                } else {
                    result = (i - 1) * (j + 1);
                    if (result < 10) {
                        cout << result << " \n";
                    } else {
                        cout << result << " \n";
                    }
                }
            }
        }
    }
}