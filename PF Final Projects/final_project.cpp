
//                        //*****" PF FINAL SEMESTER PROJECT "*****//
//Cars Showroom...
//Different Types of cars based on technologies...

#include <iostream>
using namespace std;

    void gvan()                                           // Car's categories at showroom
	{
         cout<<"Fully atuomated"<<endl;
         cout<<"Full of features"<<endl;
         cout<<"Automatic transmission"<<endl;
         cout<<"3.3 litre engine"<<endl;
         cout<<"3.6 horsepower"<<endl;
         cout<<"price range=2500000-6000000"<<endl;
    }
    void hatchback()
	{
          cout<<"Some automation involved"<<endl;
          cout<<"Little bit auto features"<<endl;
          cout<<"Manual or automatic transmission available"<<endl;
          cout<<"Mostly 2-3 litre engine"<<endl;
          cout<<"1-2 horsepower"<<endl;
          cout<<"price range=2000000-3000000"<<endl;
    }
    void sedan()
	{
          cout<<"Modern automation"<<endl;
          cout<<"Somehow automated based"<<endl;
          cout<<"Both transmission are available"<<endl;
          cout<<"1-2 litre engine"<<endl;
          cout<<"1-2 horsepower"<<endl;
          cout<<"price range=2000000-6500000"<<endl;
    }
    void convertable()
	{
		  cout<<"Fully modern"<<endl;
		  cout<<"With roof & without roof "<<endl;
		  cout<<"Sporty looks"<<endl;
		  cout<<"Highly costs"<<endl;
		  cout<<"2 varients ( hard top & soft top) "<<endl;
		  cout<<"price range=6000000-9000000"<<endl;
	}  
	void suvspickup()
	{
		cout<<"Unique vehicle "<<endl;
		cout<<"Just like truck"<<endl;
		cout<<"Hihgly powerfull"<<endl;
		cout<<"Smeshing looks"<<endl;
		cout<<"Costs in Millions Rs"<<endl;
		cout<<"High ground clearence"<<endl;
		cout<<"price range=9000000-18000000"<<endl;
	}
	void limousine()
	{
		cout<<"Luxury quality "<<endl;
		cout<<"Bussiness class"<<endl;
		cout<<"Costs in Trillions of Dollars"<<endl;
		cout<<"Found rarely"<<endl;
		cout<<"rare Generations & Models"<<endl;
		cout<<"price range=7000000-8000000"<<endl;
	}
	void coupe()
	{
		cout<<"Luxury quality"<<endl;
		cout<<"Found in Westren Countries"<<endl;
		cout<<"Two doors & with open roof "<<endl;
		cout<<"Fully comfortable"<<endl;
		cout<<"price range=6000000-6500000"<<endl;
	}
	void mpvs()
	{
		cout<<"Compact sized"<<endl;
		cout<<"TWO varients miniMPV & LargeMPV"<<endl;
		cout<<"Came with 4 carriers"<<endl;
		cout<<"Mostly used by middle class"<<endl;
		cout<<"Costs normal"<<endl;
		cout<<"Came with mostly required & basic features"<<endl;
		cout<<"price range=7300000-8800000"<<endl;
	}	
	void wagon()
	{
		cout<<"Large sized car"<<endl;
		cout<<"Allows 6-7 carrier"<<endl;
		cout<<"Efficient bootspace"<<endl;
		cout<<"Locally & Globally available"<<endl;
		cout<<"price range=170000-2400000"<<endl;
	}
	void electric()
	{
		cout<<"Access to modest features"<<endl;
		cout<<"Avails alternate fuel option "<<endl;
		cout<<"Covers 30-40km over 1 time charged"<<endl;
		cout<<"Rarely available in Westren Areas"<<endl;
		cout<<"price range=6500000-9000000"<<endl;
	}	
	void jeep()
	{
		cout<<"Compact sized"<<endl;
		cout<<"4X4 "<<endl;
		cout<<"Came with powerfull engine "<<endl;
		cout<<" 5 gears Accelerations"<<endl;
		cout<<"price range=600000-1000000"<<endl;
	}
	void militarycar()
	{
		cout<<"Solid body "<<endl;
		cout<<"Fully covered"<<endl;
		cout<<"Highly horsepowered"<<endl;
		cout<<"Full of offroad features"<<endl;
		cout<<"price range=6700000-8000000"<<endl;
		
	}
	void racing()
	{
		cout<<"Specially designed for race"<<endl;
		cout<<"Specific shape to overcome air opposition"<<endl;
		cout<<"Highly powered engine"<<endl;
		cout<<"Cost highly manufacturing"<<endl;
		cout<<"price range=5500000-8000000"<<endl;
	}	
	void cuv()
	{
		cout<<"High fuel efficiency"<<endl;
		cout<<"Suits budget easily"<<endl;
		cout<<"Compact sized"<<endl;
		cout<<"Support local manufacturing"<<endl;
		cout<<"price range=900000-1800000"<<endl;
	}		
	void ute()
	{
		cout<<"Autocalled "<<endl;
		cout<<"Fully remote controlled"<<endl;
		cout<<"Low fuel average"<<endl;
		cout<<"Cargo compartment"<<endl;
		cout<<"Provides full comfort"<<endl;
		cout<<"price range=8800000-16000000"<<endl<<endl;
	}
		
	//	SPARE PARTS.........................		

    float headlights()
    {
    	cout<<"headlights from Brand outlet= 40000    && Headlights from local market= 45000"<<endl;
    	return 40000;
	}
	
    float tailights()
	{
		cout<<"tail lights from Brand outlet= 30000   && tail lights from local market= 35000"<<endl;
		return 30000;	
	}
	
	float frontbumper()
	{
		cout<<"front bumper from Brand outlet= 25000  && front bumper from local market= 28000"<<endl;
		return 25000;
	}
	
	float backbumper()
	{
		cout<<"Back bumper from  Brand outlet= 23000   && Back bumper from local market= 25000"<<endl;
		return 23000;	
	}
	
	float foglamps()
	{
		cout<<"fog lamps from Brand outlet= 25000     && fog lamps from local market= 26000"<<endl;
		return 25000;
	}
	
	float tyres()
	{
		cout<<"Yokohama tyres from Brand outlet=40000 && Seranto Tyres from local market=45000"<<endl;
		return 40000;	
	}
	
	float airbags()
	{
		cout<<"Airbags from Brand outlet= 60000      && Airbags from local market=65000 "<<endl<<endl;
		return 60000;	
	}
		
	//    PRICES AND SUGGEST CARS IN THE DIFFERENT PRICE-SEGMENT...............
	
	void pricesegment()
	{
		cout<<"If you have upto 30lacks:  'jeep/wagon/hatchback' "<<endl;
		cout<<"If you have upto 80lacks:  'ute/cuv/mpvs/limousine' "<<endl;
		cout<<"If you have upto 90lacks:  'electric/coupe/suvspickup' "<<endl;
		cout<<"If you have upto 70lacks:  'racing/gvan'  "<<endl;
		cout<<"If you have upto 100lacks: 'monsters' "<<endl<<endl;
	}
		
int main()
     {  
        cout<<"Welcome to Cars showroom"<<endl;
        cout<<"gvan/hatchback/sedan/convertable/suvspickup/limousine/coupe/mpvs/wagon/electric/jeep/militarycar/racing/cuv/ute"<<endl; 
       
          while(true) 
		{
          float cost=0;
          string x;
          cout<<"Enter your desired car's name':";
          cin>>x;
		  
        if(x=="gvan" || x=="Gvan" || x=="GVAN")
		{
           gvan();
           pricesegment();
        }
        else if(x=="hatchback" || x=="Hatchback" || x=="HATCHBACK")
		{
           hatchback();
           pricesegment();
        }
        else if(x=="sedan" || x=="Sedan" || x=="SEDAN")
		{
           sedan(); 
           pricesegment();
        }
        else if(x=="convertable" || x=="Convertable" || x=="CONVERTABLE")
        {
        	convertable();
        	pricesegment();
		}
		else if (x=="suvspickup" || x=="Suvspickup" ||x=="SUVSPICKUP")
		{
			suvspickup();	
			pricesegment();
        }
		else if (x=="limousine" || x=="Limousine" || x=="LIMOUSINE")
		{
			limousine();
			pricesegment();
		}
		else if (x=="coupe" || x=="Coupe" || x=="COUPE")
		{
			coupe();
			pricesegment();
		}
		else if (x=="mpvs" || x=="Mpvs" || x=="MPVS")
		{
			mpvs();
			pricesegment();
		}
		else if (x=="wagon" || x=="Wagon" || x=="WAGON")
		{
			wagon();
			pricesegment();
		}
		else if (x=="electric" || x=="Electric" || x=="ELECTRIC")
		{
			electric();
			pricesegment();
		}
		else if (x=="jeep" || x=="Jeep" || x=="JEEP")
		{
			jeep();
			pricesegment();
		}
		else if (x=="militarycar" || x=="Militarycar" || x=="MILITARYCAR")
		{
			militarycar();
			pricesegment();
		}
		else if (x=="racing" || x=="Racing" || x=="RACING")
		{
			racing();
			pricesegment();
		}
		else if ( x=="cuv" || x=="Cuv" || x=="CUV")
		{
			cuv();
			pricesegment();
		}
		else if (x=="ute" || x=="Ute" || x=="UTE")
		{
			ute();
			pricesegment();
		}
		else if(x=="Exit" || x=="exit" || x=="EXIT"){
			cout<<"Your choise is done. Thank you for visiting our showroom "<<endl;
		    break;
		}
        else 
		{
           cout<<"Car not found in these categories "<<endl;
        }	    
}
    cout<<"If you want to buy spare parts please enter:"<<endl;
    int cost=0;
	while(true)
	 {
     	
     	string a;
     	cout<<"\n Enter spare part name:";
     	cin>>a;
     	if(a=="Headlights" || a=="HEADLIGHTS" || a=="headlights"){
     		cout<<headlights();
     		cost+=headlights();
		 }
     	else if(a=="Taillights" || a=="TAILLIGHTS" || a=="taillights"){
     		cout<<tailights();
     		cost+=tailights();
		 }
		else if(a=="Frontbumper" || a=="FRONTBUMPER" || a=="frontbumper"){
     		cout<<frontbumper();
     		cost+=frontbumper();
		 }
		else if(a=="Backbumper" || a=="BACKBUMPER" || a=="backbumper"){
     		cout<<backbumper();
     		cost+=backbumper();
		 }
     	else if(a=="Foglamps" || a=="FOGLAMPS" || a=="fogbumper"){
     		cout<<foglamps();
      		cost+=foglamps();
		 }
		else if(a=="Tyres" || a=="TYRES" || a=="tyres"){
     		cout<<tyres();
     		cost+=tyres();
		 }
		else if(a=="Airbags" || a=="AIRBAGS" || a=="airbags"){
     		cout<<airbags();
     		cost+=airbags();
		 }
		else if(a=="Exit" || a=="EXIT" || a=="exit"){
		 	cout<<"....Your choice is done....."<<endl;
		 	break;
		 }
        else{
		    cout<<"Not available"<<endl;
			}	
			  	
	 }
	   cout<<"Total cost is:"<<cost;
        
      return 0;
     }
