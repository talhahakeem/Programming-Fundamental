#include <iostream>
using namespace std;
char grade(int m)
{
    if (m > 80)
    {
        return 'A';
    }
    else if (m > 70)
    {
        return 'B';
    }
    else if (m > 60)
    {
        return 'C';
    }
    else if (m > 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
int main()
{
    int marks;
    char g;
    cout << "Enter the marks; ";
    cin>>marks;
    g=grade(marks);
    cout<<"Grade is : "<<g;


    return 0;
}