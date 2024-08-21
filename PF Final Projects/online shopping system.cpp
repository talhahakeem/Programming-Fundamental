#include <iostream>
using namespace std;
double totalprice;
int count;
void onlinestore ()
{ 
string mobile_brand, mobile_model, laptop_brand, laptop_model,
	computer_brand, computer_model;
char store_section, order;
  
cout << "\n\n\t         ******place your order*******";
  
cout << "\n\n1: Enter m to visit the  mobile phone section";
  
cout << "\n2: Enter l to visit the laptop section";
  
cout << "\n3: Enter p to visit the personal computer section";
  
cout << "\n Enter you choice: ";
  
cin >> store_section;
  
switch (store_section)
	{
	
case 'm':
	  
cout << "*welcome to mobile phone section*";
	  
cout << "\n \tAvailable brands";
	  
cout << "\n    Apple \t Vivo \t Oppo ";
	  
cout << "\n Enter mobile brand: ";
	  
cin >> mobile_brand;
	  
if (mobile_brand == "apple")
		{
		  
cout << "\n\tAvailable models of Apple";
		  
cout << "\n iphone 14 \t iphone 13 \t iphone 12 ";
		  
int iphone_prices[3] = { 40000, 30000, 20000 };
		  
cout << "\nenter model : ";
		  
cin >> mobile_model;
		  
if (mobile_model == "iphone14")
			{
			  
cout << "\n\tspaecifications of iphone 14";
			  
cout <<
				"\n RAM: 6gb\n ROM: 1tb\n camera:48mp 12mp \n software: 16ios\n price: 40000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have ordered iphone 14"<<endl;
totalprice+=iphone_prices[0];
cout<<"\ncost: "<<iphone_prices[0]<<endl;
count++;
				
}
			
}
		  
		  else if (mobile_model == "iphone13")
			{
			  
cout << "\n\tspaecifications of iphone 13";
			  
cout <<
				"\n RAM: 4gb\n ROM: 512gb\n camera:16mp 8mp\n software: 16ios\n price: 30000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have ordered iphone 13"<<endl;
totalprice+=iphone_prices[1];
cout<<"\ncost: "<<iphone_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (mobile_model == "iphone12")
			{
			  
cout << "\n\tspaecifications of iphone 12";
			  
cout <<
				"\n RAM: 4gb\n ROM: 256gb\n camera:12mp 8mp \n software: 15ios\n price: 20000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered iphone 12";
totalprice+=iphone_prices[2];
cout<<"\ncost: "<<iphone_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
 
}
	  
	  else if (mobile_brand == "vivo")
		{
		  
cout << "\n\tAvailable models of vivo";
		  
cout << "\n vivo y30 \t vivo y19 \t vivo y20 ";
		  
int vivo_prices[3] = { 30000, 20000, 10000 };
		  
cout << "\nenter model : ";
		  
cin >> mobile_model;
		  
if (mobile_model == "vivoy30")
			{
			  
cout << "\n\tspaecifications of vivo y30";
			  
cout <<
				"\n RAM: 6gb\n ROM: 128gb\n camera:48mp 12mp \n software: 12os\n price: 30000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered VIVO Y30";
totalprice+=vivo_prices[0];
cout<<"\ncost: "<<vivo_prices[0]<<endl;
count++;
				}
			
}
		  
		  else if (mobile_model == "vivoy19")
			{
			  
cout << "\n\tspaecifications of vivo y19";
			  
cout <<
				"\n RAM: 4gb\n ROM: 128gb\n camera:48mp 8mp\n software: 12os\n price: 20000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered VIVO Y19";
totalprice+=vivo_prices[1];
cout<<"\ncost: "<<vivo_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (mobile_model == "vivoy20")
			{
			  
cout << "\n\tspaecifications of vivo y20";
			  
cout <<
				"\n RAM: 4gb\n ROM: 64gb\n camera:18mp 12mp \n software: 11os\n price: 10000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered VIVO Y20";
totalprice+=vivo_prices[2];
cout<<"\ncost: "<<vivo_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
 
}
	  
	  else if (mobile_brand == "oppo")
		{
		  
cout << "\n\tAvailable models of oppo";
		  
cout << "\n oppo f9 \t oppo f16 \t oppo f20 ";
		  
int oppo_prices[3] = { 30000, 20000, 10000 };
		  
cout << "\nenter model : ";
		  
cin >> mobile_model;
		  
if (mobile_model == "oppof9")
			{
			  
cout << "\n\tspaecifications of oppo f9";
			  
cout <<
				"\n RAM: 6gb\n ROM: 128gb\n camera:48mp 12mp \n software: 12os\n price: 30000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered OPPO f9";
totalprice+=oppo_prices[0];
cout<<"\ncost: "<<oppo_prices[0]<<endl;
count++;
				}
			
}
		  
		  else if (mobile_model == "oppof16")
			{
			  
cout << "\n\tspaecifications of oppo f16";
			  
cout <<
				"\n RAM: 4gb\n ROM: 128gb\n camera:48mp 8mp\n software: 12os\n price: 20000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered OPPO f16";
totalprice+=oppo_prices[1];
cout<<"\ncost: "<<oppo_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (mobile_model == "oppof20")
			{
			  
cout << "\n\tspaecifications of oppo f20";
			  
cout <<
				"\n RAM: 4gb\n ROM: 64gb\n camera:18mp 12mp \n software: 11os\n price: 10000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered OPPO f20";
totalprice+=oppo_prices[2];
cout<<"\ncost: "<<oppo_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
}
	  
	  else
		{
		  
cout << "\nEntered brand is not available at our store";
		
}
	  
 
break;
	
case 'l':
	  
cout << "welcome to Laptop section";
	  
cout << "\n \tAvailable brands";
	  
cout << "\n    MACBOOK \t HP \t DELL ";
	  
cout << "\n Enter Laptop brand: ";
	  
cin >> laptop_brand;
	  
if (laptop_brand == "macbook")
		{
		  
cout << "\n\tAvailable models of MACBOOK";
		  
cout << "\n MACBOOK 2016 \t MACBOOK 2017 \t MACBOOK 2018 ";
		  
int MACBOOK_prices[3] = { 60000, 70000, 80000 };
		  
cout << "\nenter model : ";
		  
cin >> laptop_model;
		  
if (laptop_model == "macbook2016")
			{
			  
cout << "\n\tspaecifications of MACBOOK 2016";
			  
cout <<
				"\n RAM: 6gb\n ROM: 256gb\n camera:12mp  \n software: 15ios\n price: 60000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered MACBOOK 2016";
totalprice+=MACBOOK_prices[0];
cout<<"\ncost: "<<MACBOOK_prices[0]<<endl;
count++;
				}
			
}
		  
		  else if (laptop_model == "macbook2017")
			{
			  
cout << "\n\tspaecifications of Macbook 2017";
			  
cout <<
				"\n RAM: 8gb\n ROM: 512gb\n camera:16mp \n software: 16ios\n price: 70000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered MACBOOK 2017";
totalprice+=MACBOOK_prices[1];
cout<<"\ncost: "<<MACBOOK_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (laptop_model == "macbook2018")
			{
			  
cout << "\n\tspaecifications of Macbook 2018";
			  
cout <<
				"\n RAM: 16gb\n ROM: 1tb\n camera:48mp  \n software: 17ios\n price: 80000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered MACBOOK 2018";
totalprice+=MACBOOK_prices[2];
cout<<"\ncost: "<<MACBOOK_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
 
}
	  
	  else if (laptop_brand == "hp")
		{
		  
cout << "\n\tAvailable models of HP";
		  
cout << "\n HP 850 \t HP 840 \t HP 830 ";
		  
int hp_prices[3] = { 50000, 40000, 20000 };
		  
cout << "\nenter model : ";
		  
cin >> laptop_model;
		  
if (laptop_model == "hp850")
			{
			  
cout << "\n\tspaecifications of HP 850";
			  
cout <<
				"\n RAM: 16gb\n ROM: 1tb\n camera:16mp \n window: 11\n price: 50000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered HP 850";
totalprice+=hp_prices[0];
cout<<"\ncost: "<<hp_prices[0]<<endl;
count++;
				}
			
}
		  
		  else if (laptop_model == "hp840")
			{
			  
cout << "\n\tspaecifications of HP 840";
			  
cout <<
				"\n RAM: 8gb\n ROM: 512gb\n camera:8mp\n window: 10pro\n price: 40000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered HP 840";
totalprice+=hp_prices[1];
cout<<"\ncost: "<<hp_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (laptop_model == "hp830")
			{
			  
cout << "\n\tspaecifications of HP 830";
			  
cout <<
				"\n RAM: 4gb\n ROM: 256gb\n camera:8mp \n window: 8\n price: 20000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered HP 830";
totalprice+=hp_prices[2];
cout<<"\ncost: "<<hp_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
 
}
	  
 
	  else if (laptop_brand == "dell")
		{
		  
cout << "\n\tAvailable models of DELl";
		  
cout << "\n DELL 8400 \t DELL 7400 \t DELL 5400 ";
		  
int DELL_prices[3] = { 50000, 40000, 20000 };
		  
cout << "\nenter model : ";
		  
cin >> laptop_model;
		  
if (laptop_model == "dell8400")
			{
			  
cout << "\n\tspaecifications of DELL 8400";
			  
cout <<
				"\n RAM: 16gb\n ROM: 1tb\n camera:16mp \n window: 11\n price: 50000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered DELL 8400";
totalprice+=DELL_prices[0];
cout<<"\ncost: "<<DELL_prices[0]<<endl;
count++;
				}
			
}
		  
		  else if (laptop_model == "dell7400")
			{
			  
cout << "\n\tspaecifications of DELL 7400";
			  
cout <<
				"\n RAM: 8gb\n ROM: 512gb\n camera:8mp\n window: 10pro\n price: 40000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered DELL 7400";
totalprice+=DELL_prices[1];
cout<<"\ncost: "<<DELL_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (laptop_model == "dell5400")
			{
			  
cout << "\n\tspaecifications of DELL 5400";
			  
cout <<
				"\n RAM: 4gb\n ROM: 256gb\n camera:8mp \n window: 8\n price: 20000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered DELL 5400";
totalprice+=DELL_prices[2];
cout<<"\ncost: "<<DELL_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
}
	  
	  else
		{
		  
cout << "\nEntered brand is not available at our store";
		
}
	  
 
 
break;
	
case 'p':
	  
cout << "welcome to Personal computer section";
	  
cout << "\n \tAvailable brands";
	  
cout << "\n    HP \t DELL ";
	  
cout << "\n Enter personal computer brand: ";
	  
cin >> computer_brand;
	  
if (computer_brand == "hp")
		{
		  
cout << "\n\tAvailable models of HP";
		  
cout << "\n HP 850 \t HP 840 \t HP 830 ";
		  
int hp_prices[3] = { 50000, 40000, 20000 };
		  
cout << "\nenter model : ";
		  
cin >> computer_model;
		  
if (computer_model == "hp850")
			{
			  
cout << "\n\tspaecifications of HP 850";
			  
cout <<
				"\n RAM: 16gb\n ROM: 1tb\n camera:16mp \n window: 11\n price: 50000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered HP 850";
totalprice+=hp_prices[0];
cout<<"\ncost: "<<hp_prices[0]<<endl;
count++;
				}
			
}
		  
		  else if (computer_model == "hp840")
			{
			  
cout << "\n\tspaecifications of HP 840";
			  
cout <<
				"\n RAM: 8gb\n ROM: 512gb\n camera:8mp\n window: 10pro\n price: 40000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered HP 840";
totalprice+=hp_prices[1];
cout<<"\ncost: "<<hp_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (computer_model == "hp830")
			{
			  
cout << "\n\tspaecifications of HP 830";
			  
cout <<
				"\n RAM: 4gb\n ROM: 256gb\n camera:8mp \n window: 8\n price: 20000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered HP 830";
totalprice+=hp_prices[2];
cout<<"\ncost: "<<hp_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
 
}
	  
 
	  else if (computer_brand == "dell")
		{
		  
cout << "\n\tAvailable models of DELl";
		  
cout << "\n DELL 8400 \t DELL 7400 \t DELL 5400 ";
		  
int DELL_prices[3] = { 50000, 40000, 20000 };
		  
cout << "\nenter model : ";
		  
cin >> computer_model;
		  
if (computer_model == "dell8400")
			{
			  
cout << "\n\tspaecifications of DELL 8400";
			  
cout <<
				"\n RAM: 16gb\n ROM: 1tb\n camera:16mp \n window: 11\n price: 50000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered DELL 8400";
totalprice+=DELL_prices[0];
cout<<"\ncost: "<<DELL_prices[0]<<endl;
count++;
				}
			
}
		  
		  else if (computer_model == "dell7400")
			{
			  
cout << "\n\tspaecifications of DELL 7400";
			  
cout <<
				"\n RAM: 8gb\n ROM: 512gb\n camera:8mp\n window: 10pro\n price: 40000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered DELL 7400";
totalprice+=DELL_prices[1];
cout<<"\ncost: "<<DELL_prices[1]<<endl;
count++;
				}
			
}
		  
		  else if (computer_model == "dell5400")
			{
			  
cout << "\n\tspaecifications of DELL 5400";
			  
cout <<
				"\n RAM: 4gb\n ROM: 256gb\n camera:8mp \n window: 8\n price: 20000";
			  
cout << "\npress y to order: ";
			  
cin >> order;
			  
if (order == 'y')
				{
				  
cout << "you have orderered DELL 5400";
totalprice+=DELL_prices[2];
cout<<"\ncost: "<<DELL_prices[2]<<endl;
count++;
				}
			
}
		  
		  else
			{
			  
cout << "\n this model is not available";
			
}
		
}
	  
	  else
		{
		  
cout << "\nEntered brand is not available at our store";
		
}
break;
	
default:
	  
cout << "**please visit other store for this product**";
	
 
}

}


int main ()
{
	cout<<"|*************************************|\n|***   Online Shopping System      ***|\n|***    Name       :               ***|\n|***         Muhammad Sohab Shahid ***|\n|***    Roll no.   :               ***|\n|***                  492          ***|\n|***   Submitted to:               ***|\n|***            Sir Talha Amjad    ***|\n|*************************************|\n";
 system("color 1");	
  
int c;
  
char startvalue;
  
cout << "\n********************  MOBILE AND TECH SHOP  ********************";
  
cout << "\n\n\t\t   ***** welcome to store *****";
  
cout <<
	"\n\npress s to start shopping or any other key to exist the store : ";
  
cin >> startvalue;
  
while (startvalue == 's' || startvalue == 'S')
	{
	  
onlinestore ();
	  
cout <<
		"\n\npress s to start shopping or any other key to exist the store : ";
	  
cin >> startvalue;
	
}
if(count>0){
cout<<"****THANKS FOR SHOPPING****";
cout<<"\nyou have ordered "<<count<<" "<<"products";
cout<<"\nyour total bill amount is : "<<totalprice;}
  
cout << "\nyou choose to exist the store";
  
return 0;
}
