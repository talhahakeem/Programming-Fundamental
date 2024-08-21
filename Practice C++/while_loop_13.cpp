#include <iostream>
using namespace std;

int main() {
    int students;
    int courses ;
    int rollNumber, highestRollNumber, total, highestTotal;
    highestTotal = 0;
    int i = 1;
    while (i <=5) {
        cout << "Enter Roll Number of student  "<<i<<" : ";
        cin >> rollNumber;
        int j = 1;
        total = 0;
        while (j <=5) {
            int marks;
            cout << "Enter marks for course " << j << ": ";
            cin >> marks;
            total += marks;
            j++;
        }
        if (total > highestTotal) {
            highestTotal = total;
            highestRollNumber = rollNumber;
        }
        cout << "Total Marks for Roll Number " << rollNumber << ": " << total << endl; 
        i++;
    }
    cout << "Student with Roll Number " << highestRollNumber 
         <<" has the highest aggregate of "<<highestTotal<<" marks."<<endl;
    return 0; 
}

