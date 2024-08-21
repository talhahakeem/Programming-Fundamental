#include <iostream>
using namespace std;

void myFunction(int p, int o, int value, int change) {
    
    string order;
    int money=0;

    //using switch statement to make order
    switch (o)
    {
        case 1:
            order = "Water";
            money = value * 20;
            break;

         case 2:
            order = "Sprite";
            money = value * 35;
            break; 

         case 3:
               order = "Coke";
               money = value * 30;
               break;

         case 4:
               order = "Royal";
               money = value * 35;
               break;

         case 5:
               order = "Milk";
               money = value * 40;
               break;

        case 6:
               order = "7up";
               money = value * 50;
               break;

        case 7:
               order = "Dew";
               money = value * 70;
               break;

        case 8:
               order = "Sting";
               money = value * 60;
               break;        

        default:
           cout<<"Invalid Input, Please Try Again"; 
           break;
    } 

    if (p < money ) //if inserted money is less than the required money
    {
        cout<<"Sorry, you have not enough money to proceed this transaction . " <<endl;
        cout<<"We have returned you "<< p <<" Rupees"<<endl;
    }
    else        //when the inserted money is greater or equal to required money
    {
        cout<<"Your order                   :    "<<value<<" pcs - "<<order<<endl;
        cout<<"Total cost of your order     :   "<<money<<" Rupees"<<endl;
        change = p - money;
        cout<< "Total amount of your change  :   "<<change<<" Rupees"<<endl;
    }
}

int main() {

    // Declaration
    int ordercode, quantity, pay, allounce;  
    char yesno;

    do{

        cout<<"        Welcome to Drinks Vending MAchine                " <<endl;
        cout<<"                    Menue                             " <<endl<<endl;
        cout<<"           1.Water   -  20 Rupees                     " <<endl;
        cout<<"           2.Sprite  -  35 Rupees                     " <<endl;
        cout<<"           3.Coke    -  30 Rupees                     " <<endl; 
        cout<<"           4.Royal   -  35 Rupees                     " <<endl;
        cout<<"           5.Milk    -  40 Rupees                     " <<endl;
        cout<<"           6.7up     -  50 Rupees                     " <<endl;
        cout<<"           7.Dew     -  70 Rupees                     " <<endl;
        cout<<"           8.Sting   -  60 Rupees                     " <<endl<<endl;

        
        cout<<"Insert your money        :   ";
        cin>> pay;

        cout<<"Choose your order (1-8)  :   ";
        cin>> ordercode;

        cout<<"Please Enter Quantity    :   ";
        cin>> quantity; 
        cout<<endl<<endl;

        // Function Call
        myFunction(pay, ordercode, quantity, allounce);

        // Asking if the user wants to order again
        cout<<"Do you want to order again ? (y/n):  ";
        cin>> yesno; 
        cout<<endl; 

    }
    while( yesno == 'Y' || yesno == 'y' ); 

    // End note and Credits
    cout<<endl<<endl<<endl;
    cout<<"Thank You for your purchase, Hope you buy again."<<endl;
    cout<<"Project by:"<<endl<<"Hooria Lateef (541)"<<endl;
}
