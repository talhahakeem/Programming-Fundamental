#include <iostream>
using namespace std;

int main() {
    int rollNumber, highestAggregate = 0, highestRollNumber;
    int marks[5];
    int i = 0;

    while (i < 5) {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        
        int totalMarks = 0;
        for (int j = 0; j < 5; ++j) {
            cout << "Enter marks for course " << j+1 << ": ";
            cin >> marks[j];
            totalMarks += marks[j];
        }

        if (totalMarks > highestAggregate) {
            highestAggregate = totalMarks;
            highestRollNumber = rollNumber;
        }
        
        i++;
    }

    cout << "Student with roll number " << highestRollNumber 
         << " has the highest aggregate of " << highestAggregate << endl;

    return 0;
}
