#include<iostream>
using namespace std;



int main()


{

int sal;               
int medical, hrent,tax,total;
while (true){

cout<<"---Payroll System---"<<endl;
cout<<"Enter Zero for Exit:"<<endl;
cout<<"Enter Salary:";

cin>>sal;

    if (sal<=10000){
     
        medical= sal*7/100;
        hrent= sal*10/100;
        tax=  sal*5/100;
        total= sal+medical+hrent-tax;

        cout<<"medical allowance:"<<medical<<endl;
        cout<<"house rent allowance:"<<hrent<<endl;
        cout<<"tax on salary:"<<tax<<endl;
        cout<<"your total salary:"<<total<<endl<<endl;

      }
      else if (sal>10000&&sal<=20000){
       
        medical= sal*8/100;
        hrent= sal*12/100;
        tax=  sal*10/100;
        total= sal+medical+hrent-tax;
       
       cout<<"medical allowance:"<<medical<<endl;
        cout<<"house rent allowance:"<<hrent<<endl;
        cout<<"tax on salary:"<<tax<<endl;
        cout<<"your total salary:"<<total<<endl<<endl;
      }
         else if (sal==0)
            exit (0);
 
      
       else {
              
        medical= sal*12/100;
        hrent= sal*18/100;
        tax=  sal*10/100;
        total= sal+medical+hrent-tax;
       cout<<"medical allowance:"<<medical<<endl;
        cout<<"house rent allowance:"<<hrent<<endl;
        cout<<"tax on salary:"<<tax<<endl;
        cout<<"your total salary:"<<total<<endl<<endl;
    
       }
       

}


    return 0;
}
