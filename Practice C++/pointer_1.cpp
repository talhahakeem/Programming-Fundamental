#include<iostream>
using namespace std;

struct Student {
    int rollno;
    int totalmarks;
    int age;
    string name;
    char grade;
    float cgpa;
};

void input(Student* s) {
    cout << "Enter roll number: ";
    cin >> s->rollno;
    cout << "Enter total marks: ";
    cin >> s->totalmarks;
    cout << "Enter age: ";
    cin >> s->age;
    cout << "Enter name: ";
    cin >> s->name;
    cout << "Enter grade: ";
    cin >> s->grade;
    cout << "Enter CGPA: ";
    cin >> s->cgpa;
}

void display(Student* s) {
    cout << "Roll number: " << s->rollno << ", Address: " << &s->rollno << endl;
    cout << "Total marks: " << s->totalmarks << ", Address: " << &s->totalmarks << endl;
    cout << "Age: " << s->age << endl;
    cout << "Name: " << s->name << endl;
    cout << "Grade: " << s->grade << endl;
    cout << "CGPA: " << s->cgpa << endl;
}

int main() {
    Student s;
    input(&s);
    display(&s);
    return 0;
}
