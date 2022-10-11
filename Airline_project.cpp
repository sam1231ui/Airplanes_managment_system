#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>
using namespace std;


void mainMenu();

class management{
	
	public:
		
		management(){
			mainMenu();
		}
};

class Details{
	public:
		
		static string name, gender;
		static int cId;
		int phoneNo;
		int age;
		string add;
		char arr[100];
		
		void information(){
			cout<<"\nEnter the customer ID : ";
			cin>>cId;
			cout<<"\nEnter the customer name : ";
			cin>>name;
			cout<<"\nEnter the customer age : ";
			cin>>age;
			cout<<"\nEnter the customer Address : ";
			cin>>add;
			cout<<"\nEnter the customer gender : ";
			cin>>gender;
			cout<<"\nYour information saved ";	
		}
};


int Details::cId;
string Details::name;
string Details::gender;

class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights(){
			
			string flightN[] = {"Dubai", "Canada", "UK", "USA", "Germany"};
			
			for(int i=0; i<5; i++){
				
				cout<<i+1<<"Flight to "<<flightN[i]<<endl;
			}
			
			cout<<"Welcome to Airlines"<<endl;
			
			cout<<"Press the number for the flight: ";
			cin>>choice;
			
			switch(choice){
				
				case 1:{
					
					cout<<"_____________________Welcome to Dubai Emirates__________"<<endl;
					cout<<"Your comfort is our priority, Enjoy your journey!"<<endl;
					cout<<"Following are thr flights"<<endl;
					
					cout<<"1. DUB-498"<<endl;
					cout<<"\n t08-01-2022 8:00AM 4hr Rs. 14000"<<endl;
					cout<<"1. DUB-854"<<endl;
					cout<<"\n t04-01-2022 4:00PM 4hr Rs. 16000"<<endl;
					cout<<"1. DUB-433"<<endl;
					cout<<"\n t06-01-2022 6:00PM 4hr Rs. 10000"<<endl;
					
					cout<<"Select the flight you want to book ";
					cin>>choice1;
					
					if(choice1 == 1){
						
						charges = 14000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice1 == 2){
						
						charges = 16000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice == 3){
						
						charges = 10000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}else{
						
						cout<<"Invalid input"<<endl;
						flights();
					}
					
					cout<<"Press any key to go to main menu"<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}else
						mainMenu();
						
					
					
					break;
				}
				
				case 2:{
					
					cout<<"_____________________Welcome to Canadian Emirates__________"<<endl;
					cout<<"Your comfort is our priority, Enjoy your journey!"<<endl;
					cout<<"Following are thr flights"<<endl;
					
					cout<<"1. CA-443"<<endl;
					cout<<"\n t08-01-2022 8:00AM 24hr Rs. 35000"<<endl;
					cout<<"1. CA-421"<<endl;
					cout<<"\n t04-01-2022 4:00PM 22hr Rs. 46000"<<endl;
					cout<<"1. CA-182"<<endl;
					cout<<"\n t06-01-2022 6:00PM 20hr Rs. 50000"<<endl;
					
					cout<<"Select the flight you want to book ";
					cin>>choice1;
					
					if(choice1 == 1){
						
						charges = 35000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice1 == 2){
						
						charges = 46000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice == 3){
						
						charges = 50000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}else{
						
						cout<<"Invalid input"<<endl;
						flights();
					}
					
					cout<<"Press any key to go to main menu"<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}else
						mainMenu();
						
					
					
					break;
				}
				
				case 3:{
					
					cout<<"_____________________Welcome to UK Airlines__________"<<endl;
					cout<<"Your comfort is our priority, Enjoy your journey!"<<endl;
					cout<<"Following are thr flights"<<endl;
					 
					cout<<"1. UK-498"<<endl;
					cout<<"\n t04-01-2022 4:00PM 4hr Rs. 44000"<<endl;
					 
					
					cout<<"Select the flight you want to book ";
					cin>>choice1;
					
					if(choice1 == 1){
						
						charges = 44000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
					
					}else{
						
						cout<<"Invalid input"<<endl;
						flights();
					}
					
					cout<<"Press any key to go to main menu"<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}else
						mainMenu();
						
					
					
					break;
				}
				
				case 4:{
					
					
				cout<<"_____________________Welcome to USA Airlines__________"<<endl;
					cout<<"Your comfort is our priority, Enjoy your journey!"<<endl;
					cout<<"Following are thr flights"<<endl;
					
					cout<<"1. USA-567"<<endl;
					cout<<"\n t08-01-2022 8:00AM 4hr Rs. 74000"<<endl;
					cout<<"1. USA-540"<<endl;
					cout<<"\n t04-01-2022 4:00PM 4hr Rs. 60000"<<endl;
					cout<<"1. USA-899"<<endl;
					cout<<"\n t06-01-2022 6:00PM 4hr Rs. 78000"<<endl;
					
					cout<<"Select the flight you want to book ";
					cin>>choice1;
					
					if(choice1 == 1){
						
						charges = 74000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice1 == 2){
						
						charges = 60000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice == 3){
						
						charges = 78000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}else{
						
						cout<<"Invalid input"<<endl;
						flights();
					}
					
					cout<<"Press any key to go to main menu"<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}else
						mainMenu();
						
					break;
				}
				
				case 5:{
					
					
				cout<<"_____________________Welcome to Germany Airlines__________"<<endl;
					cout<<"Your comfort is our priority, Enjoy your journey!"<<endl;
					cout<<"Following are thr flights"<<endl;
					
					cout<<"1. GER-789"<<endl;
					cout<<"\n t08-01-2022 8:00AM 4hr Rs. 45000"<<endl;
					cout<<"1. GER-998"<<endl;
					cout<<"\n t04-01-2022 4:00PM 4hr Rs. 50000"<<endl;
					cout<<"1. GER-199"<<endl;
					cout<<"\n t06-01-2022 6:00PM 4hr Rs. 55000"<<endl;
					
					cout<<"Select the flight you want to book ";
					cin>>choice1;
					
					if(choice1 == 1){
						
						charges = 45000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice1 == 2){
						
						charges = 50000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}
					else if(choice == 3){
						
						charges = 55000;
						cout<<"successfully booked"<<endl;
						cout<<"go to main menu to collect ticket"<<endl;
						
					}else{
						
						cout<<"Invalid input"<<endl;
						flights();
					}
					
					cout<<"Press any key to go to main menu"<<endl;
					cin>>back;
					
					if(back == 1){
						mainMenu();
					}else
						mainMenu();
					break;
				}
				default:{
					
					cout<<"Invalid input, getting back to main menu"<<endl;
					mainMenu();
					break;
				}
			}
		}
};


float registration::charges;
int registration::choice;

class ticket:public registration, Details{
	
	public:
		
		void Bill(){
			
			string destination = "";
			ofstream outf("records.txt");
			{
				outf<<"___________Airlines_________"<<endl;
				outf<<"____________Tickets_________"<<endl;
				outf<<"_____________________________"<<endl;
				
				outf<<"cutomer ID: "<<Details::cId<<endl;
				outf<<"cutomer Name: "<<Details::name<<endl;
				outf<<"cutomer Gender: "<<Details::gender<<endl;
				outf<<"Description"<<endl<<endl;
				
				if(registration::choice == 1){
					destination = "Dubai";
					
				}else if(registration::choice == 2){
					destination = "Canada";
					
				}else if(registration::choice == 3){
					destination = "UK";
					
				}else if(registration::choice == 4){
					destination = "USA";
					
				}else if(registration::choice == 1){
					destination = "Germany";
					
				}
				outf<<"Destination: "<<destination<<endl;
				outf<<"flight cost : "<<registration::charges<<endl;
			}
			outf.close();
			
		}
		
		void displayBill(){
			
			ifstream ifs("records.txt");
			{
				if(!ifs){
					cout<<"File error !"<<endl;
					
				}
				while(!ifs.eof()){
					
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};


void mainMenu(){
	
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t             Jetway Airlines  \n"<<endl;
	cout<<"\t______________Main Menu______________"<<endl;
	
	cout<<"\t________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the customer details            \t"<<endl;
	cout<<"\t|\t Press 2 for flight Registration            	\t"<<endl;
	cout<<"\t|\t Press 3 to for tickets details            		\t"<<endl;
	cout<<"\t|\t Press 4 to Exit                                \t"<<endl;
	cout<<"\t|\t\t\t\t\t|"<<endl;
	
	
	cout<<"Enter your choice :  ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice){
		
		
		case 1:{
			
			cout<<"_______________Customers________________\n"<<endl;
			
			d.information();
			
			cout<<"Press 1 to go back to Main Menu";
			cin>>back;
			
			if(back == 1)
				mainMenu();
			else
				mainMenu();
				
			break;
		}
		
		case 2:{
			
			cout<<"_____________Book a flight ___________\n"<<endl;
			
			r.flights();
			break;
		}
		
		
		case 3:{
			
			cout<<"__________Get YOUR Ticket_________\n"<<endl;
			t.Bill();
			
			cout<<"Your ticket is ready, you can collect it \n"<<endl;
			cout<<"Press 1 to display your ticket ";
			
			cin>>back;
			
			if(back == 1){
				t.displayBill();
				cout<<"Press any key to go back to Main menu";
				cin>>back;
				
				if(back == 1){
					mainMenu();
				}else
					mainMenu();
				
			}else
				mainMenu();
			
			break;
		}
		
		
		case 4:{
			
			cout<<"___________Thank - You___________\n"<<endl;
			break;
		}
		
		default:{
			
			cout<<"Invalid input, Please try again"<<endl;
			mainMenu();
			break;
		}
			
			
	}
	
	
	
	
}



int main(){
	management();
}

