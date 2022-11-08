#include<bits/stdc++.h>
#include<fstream>
 
using namespace std;


//Declaration of main function.
void mainMenu();
 
 
//class of management
class management{
	
	public:
		//constructor which will directly call main menu.
		management(){
			mainMenu();
		}
};

// class of Details to save or show details of user.
class Details{
	public:
		
		// data members that are required by Details class.
		static string name, gender;
		static int cId;
		int phoneNo;
		int age;
		string add;
		char arr[100];
		
		// member function for information taking.
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


// data members declaring global to use in furthur use.
int Details::cId;
string Details::name;
string Details::gender;


// class to register the data of user.
class registration{
	public:
		
		// data members of registrtion class.
		static int choice; // this member is static declared to keep is same throughout the program.
		int choice1;
		int back;
		static float charges; // this member is static declared to keep is same throughout the program.
		
		
		// member function to show flight tickets.
		void flights(){
			
			string flightN[] = {"Dubai", "Canada", "UK", "USA", "Germany"}; // array of flight tickets
			
			// showing each tickets to user.
			for(int i=0; i<5; i++){
				
				cout<<i+1<<" Flight to "<<flightN[i]<<endl;
			}
			
			cout<<"Welcome to Airlines"<<endl;
			
			// taking input from user for selecting flight.
			cout<<"Press the number for the flight: ";
			cin>>choice;
			
			// switch case for the choice made.
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
					
					// inner input from user to select ticket for required flight
					cout<<"Select the flight you want to book ";
					cin>>choice1;
					
					
					// condition to give output according to input.
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
					
					// taking user back to main menu.
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



// data members of registration to use in further code.
float registration::charges;
int registration::choice;

// Derived class ticket from base classes (Multiple - inheritance)
class ticket:public registration, Details{
	
	public:
		
		// member function to show bill of user
		void Bill(){
			
			string destination = "";
			ofstream outf("records.txt"); // this is use of ofstream class to store data in disk memory.
			{
				
				// data need to be showed on terminal.
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
			// saving and closing file.
			outf.close();
			
		}
		
		// member function to show all deatils in file.
		void displayBill(){
			
			ifstream ifs("records.txt"); // using ifstream class to read the data from disk file.
			{
				// checking if file is avialable.
				if(!ifs){
					cout<<"File error !"<<endl;
					
				}
				// to read till end of file.
				while(!ifs.eof()){
					
					ifs.getline(arr,100); // using getline function to get all data from file to show.
					cout<<arr<<endl; // this is array we declared earlier in our details class and as it is derived class we can access that member.
				}
			}
			// closing file.
			ifs.close();
		}
};



// Main menu class body as head we declared top of program.
void mainMenu(){
	
	// data member of class
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t             Jetway Airlines  \n"<<endl;
	cout<<"\t______________Main Menu______________"<<endl;
	
	cout<<"\t________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t"<<endl;
	
	cout<<"\t|\t Press 1 To add the customer details.           \t"<<endl;
	cout<<"\t|\t Press 2 For flight Registration.            	\t"<<endl;
	cout<<"\t|\t Press 3 To for tickets details.           		\t"<<endl;
	cout<<"\t|\t Press 4 To Exit.                                \t"<<endl;
	cout<<"\t|\t\t\t\t\t"<<endl;
	
	// taking chocie input from user.
	cout<<"Enter your choice :  ";
	cin >> lchoice;
	
	// checking if input is valid or not.
	if(cin.fail())
		cout<<" Please Press valid Integer"<<endl;
			
	else{
	 
		// objects declaration.
		
		Details d; // Details class obj.
		registration r; // registration class obj.
		ticket t; // ticket class obj.
		 
		 
		 // switch case to give output according to input.
		switch(lchoice){
			
			
			case 1:{
				
				cout<<"_______________Customers________________\n"<<endl;
				
				d.information(); // member function call using dot operator.
				
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
				
				r.flights();// member function call using dot operator.
				break;
			}
			
			
			case 3:{
				
				cout<<"__________Get YOUR Ticket_________\n"<<endl;
				
				t.Bill();// member function call using dot operator.
				
				cout<<"Your ticket is ready, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				
				cin>>back;
				
				if(back == 1){
					t.displayBill();// member function call using dot operator.
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
 
}


// Driver function of system.
int main(){
	management();
}
