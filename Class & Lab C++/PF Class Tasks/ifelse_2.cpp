// Program that input Marks of Three Subjects.If the average of marks is more than 80,it displays two messages "YOU are above standard!" and "Admission Granted!"

#include<iostream>
using namespace std;
int main()
{
    int sub1,sub2,sub3;
    int avg;
    cout<<"Enter Marks of First Subject:";
    cin>>sub1;
    cout<<"Enter Marks of Second Subject:";
    cin>>sub2;
    cout<<"Enter Marks of Third Subject:";
    cin>>sub3;
    avg=(sub1+sub2+sub3)/3;
    
    if (avg>80)
    {
        cout<<"YOU are above standard!\n";
        cout<< "Admission Granted!";
    }
    else
    {
        cout<<"Sorry!you are not Eligible.";
    }
return 0;
}