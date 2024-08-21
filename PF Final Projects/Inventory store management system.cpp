#include <iostream>
#include <string>
using namespace std;
int main()
{
 //using array for both admin and user
 string pro[7] = {"Rice", "Meat", "Eggs", "Lays", "Drink", "Shugar", 
"Salt"};
 int price[7] = {250, 300, 150, 20, 40, 190, 60};
 int quantity[7] = {15, 5, 24, 5, 8, 8, 7};
 string a = "admin";
 int num;// using num for switches and For bill
 int adr;// using adr for array values 
 int newp;// For new price
 int newq;// For new quantity
 
 while (a!="exit")//loop will continue untill we type exit
 {
 char ch = 'y';
 cout << "\t\t\t\t"
 << "$$$$$$$$$$$ [WELCOME TO THRIFTY BAZAR] $$$$$$$$$$$" << 
endl;
 cout << "Are u a ADMIN(type admin) / USER(type user) / To Exit(type exit)" << endl;

 cout << "I AM = ";
 cin >> a;
 if (a == "admin")// if we type admin then admin module would run
 { 
 while (ch == 'y' || ch == 'Y')
 {
 cout << "\t.............WELCOME ADMIN ITS GOOD TO SEE U AGAIN............. "<<endl; 
 cout << "1: Show Products Names:" << endl
 << "2: View Products Details:" << endl
<< "3: Update Products Value:" << endl;
 cin >> num;
 system("clear");
switch (num)
 {
case 1:
 {
 cout << endl
 << "Products:" << endl;
 for (int i = 0; i <= 6; i++)
{
 cout << pro[i] << endl;
 }
break;
 }
 case 2:
 {
 cout << endl
 << "Product\t"
<< "Price\t"
<< "Quantity\t" << endl;
 for (int i = 0; i <= 6; i++)
 {
 cout << pro[i] << "\t" << price[i] << "\t" << 
quantity[i] << endl;
 }
break;
 }
 case 3:
 {
 cout << "1: Change Price" << endl
 << "2: Change Quantity" << endl;
 cin >> num;
switch (num)
{
case 1:
{
 cout << endl
 << "Adress\t"
<< "Product\t"
<< "Price\t" << endl;
 for (int i = 0; i <= 6; i++)
{
 cout << i << "\t" << pro[i] << "\t" << 
price[i] << endl;
 }
cout << "Which Product Price U Want To Change:" 
<< endl;
 cout << "Choose Adress Of The Product = ";
cin >> adr;
cout << "Enter The New Price = ";
cin >> newp;
price[adr] = newp;// new price will save to price array.
 cout << endl
 << "Price Updated to = " << newp << endl;
 cout << endl
 << "Adress\t"
<< "Product\t"
<< "Price\t" << endl;
 for (int i = 0; i <= 6; i++)
{
 cout << i << "\t" << pro[i] << "\t" << 
price[i] << endl;
 }
 break;
 }
case 2:
{
 cout << endl
 << "Adress\t"
<< "Product\t\t"
 << "Quantity\t" << endl;
 for (int i = 0; i <= 6; i++)
{
 cout << i << "\t" << pro[i] << "\t"
 << "\t" << quantity[i] << endl;
 }
 cout << "Which Product Quantity U Want to Change" 
<< endl;
 cout << "Choose Adress Of the Product = ";
cin >> adr;
cout << "Enter the New Quantity = ";
cin >> newq;
quantity[adr] = newq;
cout << "Quantity Updated to = " << newq << endl;
cout << endl
 << "Adress\t"
<< "Product\t\t"
 << "Quantity\t" << endl;
 for (int i = 0; i <= 6; i++)
{
 cout << i << "\t" << pro[i] << "\t"
 << "\t" << quantity[i] << endl;
 }
break;
 }
}
break;
 }
}
 cout << "Do You Want To Continue (y/n) = ";
cin >> ch;
 }
 }
 else if (a == "user")//for user module
 {
 char ch = 'y';
 while (ch == 'y' || ch == 'Y')
 {
 system("clear");
cout << "1: View all Products" << endl
 << "2: Buy Products" << endl;
 cin >> num;
 system("clear");
 switch (num)
{
 case 1:
{
 cout << endl
 << "Product\t"
<< "Price\t"
<< "Stock Quantity\t" << endl;
 for (int i = 0; i <= 6; i++)
{
 cout << pro[i] << "\t" << price[i] << "\t" << 
quantity[i] << endl;
 }
break;
 }
case 2:
 {
 string b = "123";
cout << endl
 << "Adress"
 << "\t"
<< "Product\t"
<< "Price\t"
<< "Quantity" << endl;
 for (int i = 0; i <= 6; i++)
{
 cout << i << "\t" << pro[i] << "\t" << price[i] 
<< "\t" << quantity[i] << endl;
 }
int totalBill = 0;
while (true)
{
 cout << "Enter Adresses of Products to Buy or Type 'buy' to finish buying:" << endl
 << "Adress = ";
 cin >> b;
if (b == "buy")
{
 break;
 }
adr = stoi(b);// For storing string values in integer e.g('buy' into adr )
 cout << "Product = " << pro[adr] << "\t\t"
 << "Quantity = ";
 cin >> newq;
if (newq <= quantity[adr])
{
 quantity[adr] = quantity[adr] - newq;
 num = price[adr];
num = price[adr] * newq;
cout << "Total Price = " << num << endl;
totalBill += num;
 }
else
{
 cout << "Enter a Valid Quantity :" << endl;
 }
 }
cout << endl
 << "Total Bill = " << totalBill << endl
<< endl
<< endl;
 cout << "\t\t\t------------Order Confirmed-----------" << endl;
 cout << "\t\t\t--------- Thanks YOU For Shopping ---------" << endl;
 cout << "\t\t\t--------- Developer: TALHA ASLAM ---------" << endl
 << endl;
 }
}
 cout << "Do you Want to Continue (y/n) = ";
 cin >> ch;
 }
 }
 else
 {
 cout << "Programs exit please Proceed again " << endl;
 
}
 
}
 return 0;
}