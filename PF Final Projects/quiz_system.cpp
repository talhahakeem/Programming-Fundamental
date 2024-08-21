#include <iostream>
#include <conio.h>
#include <windows.h>
#include<stdlib.h> 
using namespace std;
struct student
{
	char name[10];
	char rollno[10];
    int marks;
	int random;
};
student st;

void cpp()
{
    st.marks=0 ;
	char ch ;	
	int i=0 ;
	int arr[5];
	while(i<5)
{
	back:
	st.random=rand()%5;
	for(int j=0 ; j<=4 ; j++)
	{
		if(st.random==arr[j])
		{
			goto back ;
		}
	}
	arr[i]=st.random;
	
	switch(st.random)
{
	
	case 0:
	cout<<i+1<<". WHICH IS INSERTION OPERATOR ? "<<endl;
    cout<<"A) >>\n";
    cout<<"B) <<\n";
    cout<<"C) >\n";
    cout<<"D) <\n" ;
    cin>>ch; 
    if(ch=='B' || ch=='b')
    {
    	cout<<"YOUR ANSWER IS CORRECT "<<endl;
    	 st.marks++;
	}
	else 
	{
		cout<<"YOUR ANSWER IS INCORRECT "<<endl;
	}
	  break;
	 case 1: 
	cout<<i+1<<". WHICH IS EXTRACTION OPERATOR ? "<<endl;
    cout<<"A) >>\n";
    cout<<"B) <<\n";
    cout<<"C) >\n";
    cout<<"D) <\n" ;
    cin>>ch;
    
    if(ch=='A' || ch=='a')
    {
    	cout<<"YOUR ANSWER IS CORRECT "<<endl;
         st.marks++;
	}
	else 
	{
	cout<<"YOUR ANSWER IS INCORRECT "<<endl;
	}
	break;
	 case 2:
	cout<<i+1<<". WHAT IS USED IN CPP FOR DISPLAYING OUTPUT ? "<<endl;
	cout<<"A) COUT\n";
    cout<<"B) CIN\n";
	cout<<"C) PRINT\n";
    cout<<"D) READ\n" ;
    cin>>ch;
    if(ch=='A' || ch=='a')
    {
    	cout<<"YOUR ANSWER IS CORRECT "<<endl;
    	 st.marks++;
	}
	else 
	{
		cout<<"YOUR ANSWER IS INCORRECT "<<endl;
	}
	break;
	case 3:
	cout<<i+1<<".WHICH OF THE FOLLOWING IS MODULUS OPERATOR ? "<<endl;
    cout<<"A) %\n";
    cout<<"B) /\n";
    cout<<"C) *\n";
    cout<<"D) $\n" ;
    cin>>ch;
    if(ch=='A' || ch=='a')
    {
    	cout<<"YOUR ANSWER IS CORRECT "<<endl;
         st.marks++;
	}
	else 
	{
		cout<<"YOUR ANSWER IS INCORRECT "<<endl;
	}
	break;
	case 4:
	cout<<i+1<<". WHICH OF THE FOLLOWING IS USED FOR COMMENT ? "<<endl;
    cout<<"A) \\\n";
    cout<<"B) //\n";
    cout<<"C) */\n";
	cout<<"D) /&\n" ;
    cin>>ch;
    if(ch=='B' || ch=='b')
    {
      cout<<"YOUR ANSWER IS CORRECT "<<endl; 
       st.marks++;
	}
	else 
	{
		cout<<"YOUR ANSWER IS INCORRECT "<<endl;
	}
    break;
}
i++;
}
 
}
void java()
{
    st.marks=0 ;
	char ch ;	
	int i=0 ;
	int arr[5];
	while(i<5)
{
	back:
	st.random=rand()%5;
	for(int j=0 ; j<=4 ; j++)
	{
		if(st.random==arr[j])
		{
			goto back ;
		}
	}
	arr[i]=st.random;
	
	switch(st.random)
{
	
	case 0:
	cout<<i+1<<".WHICH OF THE FOLLOWING IS NOT JAVA FEATURE ? "<<endl ;
	cout<<"A) dynamic"<<endl ;
	cout<<"B) architecure neutral"<<endl ;
	cout<<"C) use of pointers"<<endl ;
	cout<<"D) object oriented "<<endl ;
	cin>>ch ;
	if(ch=='C'|| ch=='c')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl ;
	}
	break ;
	case 1:
	cout<<i+1<<".WHICH OF THE FOLLOWING CAN NOT BE USED AS MODIFIER ? "<<endl ;
	cout<<"A) public"<<endl ;
	cout<<"B) private"<<endl ;
	cout<<"C) protected"<<endl ;
	cout<<"D) static  "<<endl ;
	cin>>ch ;
	if(ch =='D'|| ch =='d')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl ;
	}
	break;
	case 2:
	cout<<i+1<<"WHAT WILL BE RETURN TYPE FOR RETURNING NO VALUE ? "<<endl ;
	cout<<"A) void"<<endl ;
	cout<<"B) int"<<endl ;
	cout<<"C) char"<<endl ;
	cout<<"D) none of these"<<endl ;
	cin>>ch ;
	if(ch =='A'|| ch=='a')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl ;
	}
	break;
	case 3:
	cout<<i+1<<".WHICH IS USED TO FINGD AND FIX BUGS IN JAVA ?"<<endl ;
	cout<<"A) JVM"<<endl ;
	cout<<"B) JRE"<<endl ;
	cout<<"C) JDK"<<endl ;
	cout<<"D) none of these"<<endl ;
	cin>>ch ;
	if(ch =='A'||ch =='a')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl ;
	}
	break ;
	case 4:
	cout<<i+1<<". WHO INVENTED JAVA PROGRAMMING"<<endl ;
	cout<<"A) guido vam rosam"<<endl ;
	cout<<"B) james gosling"<<endl ;
	cout<<"C) denis retchie"<<endl ;
	cout<<"D) bjarne"<<endl ;
	cin>>ch ;
	if(ch =='B'|| ch =='b')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl ;
	}
	break ;
}
i++;
}
}
void html()
{
	char ch ;
	st.marks=0 ;
	int i=0 ;
	int arr[5];
	while(i<5)	
{
	back:	
	st.random=rand()%5 ;
	for(int j=0; j<=4 ;j++)
	{
		if(st.random==arr[j])
		{
			goto back;
		}
	}
	arr[i]=st.random;
	switch(st.random)
{
		
    case 0:	
	cout<<i+1<<". CHOOSE CORRECT HTML ELEMENT FOR LARGEST HEADING ?"<<endl ;
	cout<<"A) <heading>"<<endl ;
	cout<<"B) <h6>"<<endl ;
	cout<<"C) <head>"<<endl ;
	cout<<"D) <h1>  "<<endl ;
	cin>>ch ;
	if(ch=='D'||ch =='d')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl ;
	}
	break ;
	case 1:
	cout<<i+1<<". WHO IS MAKING WEB STANDARDS ?"<<endl ;
	cout<<"A) google"<<endl ;
	cout<<"B) mozilla"<<endl ;
	cout<<"C) microsoft"<<endl ;
	cout<<"D) the world wibe consortium"<<endl ;
	cin>>ch ;
	if(ch=='D'||ch=='d')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl;
	}
	break ;
	case 2:
	cout<<i+1<<") WHICH CHARACTER IS USED TO END AN END TAG ?"<<endl ;
	cout<<"A) <"<<endl ;
	cout<<"B) /"<<endl ;
	cout<<"C) *"<<endl ;
	cout<<"D) none of these"<<endl ;
	cin>>ch ;
	if(ch=='B'||ch=='b')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl;
	}
	break ;
	case 3:
	cout<<i+1<<". CORRECT HTML LANGUAGE TO DEFINE IMPORTANT TEXT IS "<<endl ;
	cout<<"A) <important>"<<endl ;
	cout<<"B) <strong>"<<endl ;
	cout<<"C) <h>"<<endl ;
	cout<<"D) none of these"<<endl ;
	cin>>ch ;
	if(ch=='B'||ch=='b')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl;
	}
	break ;
	case 4:
	cout<<i+1<<". WHICH LANGUAGE IS USED TO CREATE WEB PAGES"<<endl ;
	cout<<"A) HTML"<<endl ;
	cout<<"B) C"<<endl ;
	cout<<"C) java"<<endl ;
	cout<<"D) none of these"<<endl ;
	cin>>ch ;
	if(ch=='A'||ch=='a')
	{
		cout<<"YOUR ANSWER IS CORRECT"<<endl ;
		st.marks++ ;
	}
	else
	{
		cout<<"YOUR ANSWER IS INCORRECT"<<endl ;
	}
	break ;
}
i++;
}
}
void result()
{
	int per=0 ;
	cout<<"STUDENT NAME: "<<st.name<<endl ;
	cout<<"ROLL NO: "<<st.rollno<<endl ;
	cout<<"MARKS: "<<st.marks<<" OUT OF 5"<<endl ;
	per=100*st.marks/5 ;
	cout<<"PERCENTAGE: "<<per<<"%"<<endl ;
	if(per>=50)
	{
		cout<<"CONGRATS YOU HAVE PASSED"<<endl ;
	}
	else
	{
		cout<<"OOPS YOU HAVE FAILED"<<endl ;
	}
	
}
bool login()
{
	string username,password ;
	     cout<<"ENTER YOUR USERNAME"<<endl ;
	     cin>>username;
	     cout<<"ENTER YOUR PASSWORD"<<endl ;
	     cin>>password ;
    return(username=="User"&& password=="Password");
}

main()
{
    if(!login())
	{
		cout<<"LOGIN HAS FAILED ";
		return 0;
	}
	char p ;
	char s;
	do
	{
		system("CLS");	
		cout<<"\n\t*******************"<<endl;
		cout<<"\t\tQUIZ  "<<endl;
		cout<<"\t*******************\n";
		cout<<"Enter name : ";
		cin.ignore();
		gets(st.name);
		cout<<"Enter rollno : ";
		gets(st.rollno);
    	system("CLS");	
		cout<<"\t\t\t\t Marks less than 50 will be fail "<<endl;
		cout<<"Select which subject quiz you want to perform "<<endl ;
		cout<<"1) C++"<<endl ;
		cout<<"2) JAVA"<<endl ;
		cout<<"3) HTML"<<endl ;
		cout<<"Enter your choice : ";
		cin>>s;
	    system("CLS");
		switch(s)
		{
		
		    case '1':
		    	cout<<"\n\n\t*********YOU CHOOSED C++ QUIZ*********** "<<endl;
		      cpp();
		      system("CLS");
		      result();
		    break;
		    case '2':
		    	cout<<"\n\n\t*********YOU CHOOSED JAVA QUIZ*********** "<<endl;
		        java();
		        system("CLS");
		        result();
		    	break;
			case '3':
		    	cout<<"\n\n\t*********YOU CHOOSED HTML QUIZ*********** "<<endl;
		     	html();
		     	system("CLS");
		     	result();
				break;
			default:
			   cout<<" Your choice is invalid "<<endl;			
		    	break;
       	}
	cout<<"\nPRESS Y TO CONTINUE OR ANY KEY TO TERMINATE "<<endl;
    p=getch();
    
		
	}while(p =='Y' || p =='y');
}
