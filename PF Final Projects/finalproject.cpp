#include<iostream>
using namespace std;
   void choice(int a){
   
    if(a==1){
        cout<<"You choose bread of price 160"<<endl;
    }
   else if(a==2){
        cout<<"You choose eggs of price 360"<<endl;
    }
    else if(a==3){
        cout<<"You choose rusk of price 100"<<endl;
    }
     else if(a==4){
        cout<<"You choose sugar of price 160"<<endl;
    }
     else if(a==5){
        cout<<"You choose rice of price 950"<<endl;
    }
     else if(a==6){
        cout<<"You choose flour of price 1740"<<endl;
    }
     else if(a==7){
        cout<<"You choose noodles of price 80"<<endl;
    }
     else if(a==8){
        cout<<"You choose ketchup of price 320"<<endl;
    }
     else if(a==9){
        cout<<"You choose myonese of price 970"<<endl;
    }
    else if(a==10){
        cout<<"You choose honey of price 820"<<endl;
    }
    else if(a==11){
        cout<<"You choose daal masoor of price 165"<<endl;
    }
    else if(a==12){
        cout<<"You choose daal moong of price 155"<<endl;
    }
     else if(a==13){
        cout<<"You choose daal chana of price 115"<<endl;
    }
    
}

int main(){
   
   int c=1;
    cout<<"Choose items from the following menu:"<<endl;
        cout<<"\t"<<"Select \"1\" for bread"<<endl;  
        cout<<"\t"<<"Select \"2\" for 1 dozen eggs"<<endl; 
        cout<<"\t"<<"Select \"3\" for rusk"<<endl;  
        cout<<"\t"<<"Select \"4\" for 1kg sugar"<<endl;  
        cout<<"\t"<<"Select \"5\" for 5kg rice"<<endl;  
        cout<<"\t"<<"Select \"6\" for 10kg flour"<<endl;  
        cout<<"\t"<<"Select \"7\" for noodles"<<endl;  
        cout<<"\t"<<"Select \"8\" for 500ml ketchup"<<endl;  
        cout<<"\t"<<"Select \"9\" for 2 liter mayonese"<<endl;  
        cout<<"\t"<<"Select \"10\" for 500g honey"<<endl; 
        cout<<"\t"<<"Select \"11\" for daal masoor 500g"<<endl; 
        cout<<"\t"<<"Select \"12\" for daal moong (washed) 500g"<<endl;
        cout<<"\t"<<"Select \"13\" for daal chana (washed) 500g"<<endl;
        cout<<"\t"<<"Select \"Exit\" when your choice is done:"<<endl;
    int count=0;
    int sum=0;

   while(c>0){
       
       cout<<endl;
       cin>>c;
       choice(c);
       count++;
       int price=0;
        if(c==1){
        price=price+160;
    }
    
    
   else if(c==2){
        price=price+360;
    }
    else if(c==3){
       price=price+100;
    }
     else if(c==4){
       price=price+160;
    }
     else if(c==5){
        price=price+950;
    }
     else if(c==6){
       price=price+1740;
    }
     else if(c==7){
        price=price+80;
    }
     else if(c==8){
       price=price+320;
    }
     else if(c==9){
       price=price+970;
    }
    else if(c==10){
       price=price+820;
    }
     else if(c==11){
       price=price+165;
    }
    else if(c==12){
       price=price+155;
    }
    else if(c==13){
       price=price+115;
    }
       sum=sum+price;
    }
    cout<<"You exit from programme:"<<endl;
    cout<<"You total selected "<<count-1<<" items"<<endl;
    cout<<"Total price is:"<<sum;
    return 0;
   
}
