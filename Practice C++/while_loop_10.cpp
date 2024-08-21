#include<iostream>
using namespace std;
int main() 
{
    int X;
    cout << "Enter a number: ";
    cin >> X;
    while(X >= 0) {
    cout << X;
        X--;
    }
    
    while(X > -1) {
    cout << X;
        X--;
    }
    return 0;
    }
