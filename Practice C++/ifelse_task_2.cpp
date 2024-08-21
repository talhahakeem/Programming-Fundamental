#include <iostream>
using namespace std;

int main() {
    
    string account_number;
    char servicecode;
    double totalbill;
    int mins;
   
    cout<<"Enter account number: ";
    cin>>account_number;
    cout<<"Enter service code (R for Regular, P for Premium): ";
    cin>>servicecode;

    if(servicecode=='R'||servicecode=='P') {
        if (servicecode =='R') {
            
            cout<<"Enter the number of minutes used: ";
            cin>>mins;

            if(mins<=50) {
                totalbill=10.0;
            } 
			
                totalbill=10.0+(mins-50)*0.20;
            
            cout<<"Account Number: "<<account_number<<endl;
            cout<<"Type of Service: Regular"<<endl;
            cout<<"Number of Minutes Used: "<<mins<<endl;
            cout<<"Amount Due: $"<<totalbill<<endl;
        
		}
		else {
            int daymins,nightmins;
            cout<<"Enter the number of minutes used during the day: ";
            cin>>daymins;
            cout<<"Enter the number of minutes used during the night: ";
            cin>>nightmins;
          
		   double day_cost=25.0;
            double night_cost=25.0;

            if(daymins>75) {
                day_cost += (daymins - 75)*0.10;
            }
            if(nightmins>100) {
                night_cost+=(nightmins - 100)*0.05;
            }

            double totalbill=day_cost+night_cost;

        
            cout<<"Account Number: " << account_number << endl;
            cout<<"Type of Service: Premium" << endl;
            cout<<"Number of Day Minutes Used: " << daymins << endl;
            cout<<"Number of Night Minutes Used: " << nightmins << endl;
            cout<<"Amount Due: $" << totalbill << endl;
        }
    } else {
        cout<<"Invalid service code. Please enter 'R' for Regular or 'P' for Premium." << endl;
    }

    return 0;
}
