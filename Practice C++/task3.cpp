#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {
        for(int j = rows; j >= 1; j--) {
            if(j <= i) {
                cout << j;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}