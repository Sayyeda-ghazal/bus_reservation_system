#include <iostream>
using namespace std;
int main(){
	int total_seats=23, choice, day, seats, route, charges; 
	char option;
	string name;
	int long num;

	cout<<"***** WELCOME TO SA TRAVELS (LAHORE) *****"<<endl;
	line1:
	cout<<"get through the menu to check details"<<endl;
	cout<<" 1)_routes \n 2)_timetable regarding the day \n 3)_seats \n 4)_book ticket \n 5)_cancel ticket \n 6)_print your ticket"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<" _____________________________________________________________________________"<<endl;
			cout<<"|            FROM           |             TO          |        CHARGES        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"|          LAHORE           |       SHEIKHUPURA       |          200/-        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"|          LAHORE           |       RAWALPINDI        |         1200/-        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"|          LAHORE           |          QASUR          |          300/-        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"|          LAHORE           |       ISLAMABAD         |         1200/-        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"|          LAHORE           |        FAISALABAD       |          800/-        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"|          LAHORE           |        FAROOQABAD       |          400/-        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"|          LAHORE           |         LARKANA         |          600/-        |"<<endl;
			cout<<"|___________________________|_________________________|_______________________|"<<endl;
			cout<<"do you want to continue?"<<endl;
			cout<<"press 'y' for yes and 'n' for no"<<endl;
			cin>>option;
			if(option=='y'||'Y'){
				goto line1;
          	}
			else{
			     break;
		    }
		case 2:
			cout<<"select a day to check it's timetable "<<endl;
			cout<<" 1)_MONDAY \n 2)_TUESDAY \n 3)_ WEDNESDAY \n 4)_ THURSDAY \n 5)_ FRIDAY \n 6)_ SATURDAY \n 7)_ SUNDAY"<<endl;
			cin>>day;
			if(day==1){
				cout<<"TIMETABLE FOR MONDAY"<<endl;
				cout<<" ______________________________________________________"<<endl;
				cout<<"|            ROUTE           |         TIMMING         |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> SHEIKHUPURA   |     7:00 am,12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> RAWALPINDI    |     9:00 am, 9:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> QASUR       |     7:00am, 12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> ISLAMABAD    |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAROOQABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAISALABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> LARKANA     |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				}
				else if(day==2){
				cout<<"TIMETABLE FOR TUESDAY"<<endl;
				cout<<" ______________________________________________________"<<endl;
				cout<<"|            ROUTE           |         TIMMING         |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> SHEIKHUPURA   |     7:00 am,12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> RAWALPINDI    |     9:00 am, 9:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> QASUR       |     7:00am, 12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> ISLAMABAD    |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAROOQABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAISALABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> LARKANA     |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				}
				else if(day==3){
				cout<<"TIMETABLE FOR WEDNESDAY"<<endl;
				cout<<" ______________________________________________________"<<endl;
				cout<<"|            ROUTE           |         TIMMING         |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> SHEIKHUPURA   |     7:00 am,12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> RAWALPINDI    |     9:00 am, 9:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> QASUR       |     7:00am, 12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> ISLAMABAD    |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAROOQABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAISALABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> LARKANA     |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				}
				else if(day==4){
				cout<<"TIMETABLE FOR THURSDAY"<<endl;
				cout<<" ______________________________________________________"<<endl;
				cout<<"|            ROUTE           |         TIMMING         |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> SHEIKHUPURA   |     7:00 am,12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> RAWALPINDI    |     9:00 am, 9:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> QASUR       |     7:00am, 12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> ISLAMABAD    |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAROOQABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAISALABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> LARKANA     |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				}
				else if(day==5){
				cout<<"TIMETABLE FOR FRIDAY"<<endl;
				cout<<" ______________________________________________________"<<endl;
				cout<<"|            ROUTE           |         TIMMING         |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> SHEIKHUPURA   |     7:00 am,12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> RAWALPINDI    |     9:00 am, 9:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> QASUR       |     7:00am, 12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> ISLAMABAD    |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAROOQABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAISALABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> LARKANA     |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				}
				else if(day==6){
				cout<<"TIMETABLE FOR SATURDAY"<<endl;
				cout<<" ______________________________________________________"<<endl;
				cout<<"|            ROUTE           |         TIMMING         |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> SHEIKHUPURA   |     7:00 am,12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> RAWALPINDI    |     9:00 am, 9:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> QASUR       |     7:00am, 12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> ISLAMABAD    |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAROOQABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAISALABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> LARKANA     |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				}
				else if(day==7){
				cout<<"TIMETABLE FOR SUNDAY"<<endl;
				cout<<" ______________________________________________________"<<endl;
				cout<<"|            ROUTE           |         TIMMING         |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> SHEIKHUPURA   |     8:00 am,12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|    LAHORE -> RAWALPINDI    |    10:00 am, 9:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> QASUR       |     8:00am, 12:00 pm    |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> ISLAMABAD    |      9:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAROOQABAD   |      8:00pm,12:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|     LAHORE -> FAISALABAD   |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				cout<<"|      LAHORE -> LARKANA     |      1:00pm, 4:00pm     |"<<endl;
				cout<<"|____________________________|_________________________|"<<endl;
				}
			cout<<"press 'y' for yes and 'n' for no"<<endl;
			cin>>option;
			if(option=='y'||'Y'){
				goto line1;
          	}
			else{
			     break;
		    }
		case 3:
			 cout<<"check if seats are available"<<endl;
		     cout<<"how many seats you want to book? "<<endl;
		     cin>>seats;
		     if(total_seats-seats==0){
		     	cout<<"sorry we don't have anough seats"<<endl;
			 }
			 else{
			  cout<<"yes we've seats available\n please book your ticket for confirmation"<<endl;
			  cout<<"do you want to resrve seats or book a ticket?"<<endl;
			  cout<<"press 'y' for yes and 'n' for no"<<endl;
			cin>>option;
			if(option=='y'||'Y'){
				goto line1;
          	}
			else{
			     break;
		    }
		}
		case 4:
		    cout<<"we need some details of yours for record"<<endl;
			cout<<"your name:"<<endl;
			cin>>name;
			cout<<"your number:"<<endl;
			cin>>num;
			cout<<"enter you route please:"<<endl;
			cin>>route;
			cout<<"congratulations you've booked your ticket"<<endl;
	        cout<<"in case you want to cancel or print your ticket go to the main page "<<endl;
	        goto line1;
	        break;
			
		    case 5:
		    	cout<<"do you want to cancel your ticket"<<endl;
		    	cout<<"press 'y' for yes and 'n' for no"<<endl;
			cin>>option;
			if(option=='y'||'Y'){
				name=" ";
				num=0;
				route=0;
				cout<<"your ticket has been canceled"<<endl;
				goto line1;
          	}
			else{
			     break;
		    }
		    case 6:
		         cout<<"here are some of your details"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Number :"<<num<<endl;
			cout<<"Route :"<<route<<endl;
		            if (route==1){
		            	charges=200;
					}
					else if(route==2){
						charges=1200;
					}
					else if(route==3){
						charges=300;
					}
					else if(route==4){
						charges=1200;
					}
					else if(route==5){
						charges=800;
					}
					else if(route==6){
						charges=400;
					}
					else if(route==7){
						charges=600;
					}
	        cout<<"charges : "<<charges<<endl;
			
		  }
		 	
		 }

