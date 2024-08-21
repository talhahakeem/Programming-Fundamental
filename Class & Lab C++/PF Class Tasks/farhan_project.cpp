#include<iostream>
#include<string>
using namespace std;
int main()
{
   string book[4]={"English","urdu","Islamiat","Pak study"};
   string writer[4]={"Austen","Nazir Ahmed" ,"Noor Muhammad","Muhammad sarwar"};
   string student[4]={"Furqan","Hashim","unas","Ali"};
   string gender[4]={"Male","Male","Male","Male"};
   int iban[4]={1234,1235,1226,1237};
   int age[4]={22,23,21,25};
   int Rollnum[4]={987,765,543,321};
   int quan[4]={4,4,4,4};
   int cost[4]={15,20,10,5};
   int choice,x;
   while(choice!=5){
   cout<<"\n\nLibrary Management system menu:"<<endl;
   cout<<"1. Issue a Book"<<endl;
   cout<<"2.Return a book"<<endl;
   cout<<"3.Display All Books Sorted by price"<<endl;
   cout<<"4.Display All student sorted by Age"<<endl;
   cout<<"5.Exit"<<endl;
   
   
   
   
   
   cout<<"\nEnter Choice : ";
   cin>>choice;
   
   switch(choice)
   {
   	case 1:
   		cout<<"\n1234\tEnglish\n1235\tUrdu\n1226\tIslamiat\n1237\tPak Studies\nEnter Iban of book to be issued : ";
   		cin>>x;
   		
   			for(int i=0;i<4;i++)
    	{
    		if(iban[i]==x)
    		 {
    		 	if(quan[i]>1){
				 
    		 	quan[i]--;
    		 	cout<<"Book has been issued successfully remaining quantity is "<<quan[i];
    		 }
    		 	else
    		 	cout<<"Only one book is left, so cannot be issued ";
    		 }
			 }
			 break;
			 
	case 2:
		
	
		cout<<"\n1234\tEnglish\n1235\tUrdu\n1226\tIslamiat\n1237\tPak Studies\nEnter Iban of book to be Returned : ";
   		cin>>x;
   		
   			for(int i=0;i<4;i++)
    	{
    		if(iban[i]==x)
    		 {
    		 	if(quan[i]>1){
				 
    		 	quan[i]++;
    		 	cout<<"Book has been issued returned succesfully remaining quantity is "<<quan[i];
    		 }
    		 	
    		 }
    		
			 }
			 break;

			 
	 case 3:
			for(int i=1;i<4;i++)
		{
			int key1=cost[i];
			string key2=book[i];
			string key3=writer[i];
			int k=i-1;
			while(k>=0&&cost[k]<key1)
			{
				cost[k+1]=cost[k];
				book[k+1]=book[k];
				writer[k+1]=writer[k];
				
				k--;
			}
			cost[k+1]=key1;
			book[k+1]=key2;
			writer[k+1]=key3;
		
		}
		for(int d=0;d<4;d++)
		cout<<" Book Name : "<<book[d]<<"    Writer : "<<writer[d]<<"  Cost : "<<cost[d]<<endl; 
		break;
		
		 case 4:
			for(int i=1;i<4;i++)
		{
			int key1=age[i];
			string key2=student[i];
			int key3=Rollnum[i];
			int k=i-1;
			while(k>=0&&age[k]<key1)
			{
				age[k+1]=age[k];
				student[k+1]=student[k];
				Rollnum[k+1]=Rollnum[k];
				
				k--;
			}
			age[k+1]=key1;
			student[k+1]=key2;
			Rollnum[k+1]=key3;
		
		}
		for(int d=0;d<4;d++)
		cout<<" Student Name : "<<student[d]<<"  Age : "<<age[d]<<"  Roll Number : "<<Rollnum[d]<<endl; 
		break;
		
		
	case 5:
		cout<<"You have exited library successfully";
	
	break;
   
}
	
}
	
	
	return 0;
	
}
	