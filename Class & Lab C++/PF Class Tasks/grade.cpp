// Program that inputs the exams Percentage of a Student and displays his grade.
#include<iostream>
using namespace std;
int main()
{
    int percentage;
    cout<<"Enter Your Percentage:";
    cin>>percentage;

    if (percentage>=90)
    {
        cout<<"Your Grade is A.";
    }
    else if(percentage<=89 && percentage>=86)
    {
        cout<<"Your Grade is A-.";
    }
    else if(percentage<=85 && percentage>=81)
    {
        cout<<"Your Grade is B+.";
    }
     else if(percentage<=85 && percentage>=81)
    {
        cout<<"Your Grade is B+.";
    } else if(percentage<=80 && percentage>=77)
    {
        cout<<"Your Grade is B.";
    } else if(percentage<=76 && percentage>=72)
    {
        cout<<"Your Grade is B-.";
    } else if(percentage<=71 && percentage>=68)
    {
        cout<<"Your Grade is C+.";
    } else if(percentage<=67 && percentage>=63)
    {
        cout<<"Your Grade is C.";
    }
    else if(percentage<=62 && percentage>=58)
    {
        cout<<"Your Grade is C-.";
    }
    else if(percentage<=57 && percentage>=54)
    {
        cout<<"Your Grade is D+.";
    }
    else if(percentage<=53 && percentage>=50)
    {
        cout<<"Your Grade is D.";
    }
    else 
    {
        cout<<"Sorry!You are Failed.";
    }
   

return 0;
}
