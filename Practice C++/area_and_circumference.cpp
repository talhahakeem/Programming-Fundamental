#include<iostream>
using namespace std;
int main()
{
float area,radius,circumference;
int choice ;
cout<<"radius:";
cin>>radius;
cout<<"ENTER 1 FOR AREA AND 2 FOR CIRCUMFERENCE.";
cin>>choice;

if (choice==1){
    area=radius * radius *3.14;
    cout<<"area:"<<area;
}
    else if (choice==2){
        circumference =2 * 3.14 *radius;
        cout<<"circumference:"<<circumference;
          }
 else{
cout<<"INVALID CHOICE.";
 }

return 0;
}