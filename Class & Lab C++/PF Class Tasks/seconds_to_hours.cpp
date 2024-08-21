#include<iostream>
using namespace std;
int main()
{ //declare variables
    int sec,s,h,m;
    //Get the seconds as input from the user
    cout<<"Enter the Seconds:";
    cin>>sec;
    //converting the seconds to hours:minutes:second format
    h=sec/3600;
    sec=sec%3600;
    m=sec/60;
    s=sec%60;
    //display the result
    cout<<"HOURS:MINUTES:SECONDS="<<h<<":"<<m<<":"<<s;
return 0;
}