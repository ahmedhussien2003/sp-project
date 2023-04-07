#include<iostream>
#include<Windows.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

void main_menu();
void available_flights();
void oneway();
void round();
void multi();
void reserve();
void countries();
void travelto(int x, int y);
void insidall();
void offers();

struct Date
{
	int Day;
	int Month;
	int Year;
};
struct Data
{
	string from;
	string to;
	Date myDate{};
};
struct pass
{
	Data airPorts;
	string first_name;
	string last_name;
	string title;
	string email;
	Date birthdate;
	string passport_id;
	string phone_num;
	string gender;
	string pass1;
	string pass2;
	string level;
}passenger;
struct ticket
{
	int number;
}offer;

void welcomemessage()
{
	cout << "\t\t\t###########################################################################\n";
	cout << "\t\t\t############                                                   ############";
	cout << "\n\t\t\t############         welcome to Destinya Airline system        ############";
	cout << "\n\t\t\t############                                                   ############";
	cout << "\t\t\t\t\t\t\t###########################################################################\n";
	
}
void printmessage(string messege)
{
	cout << "\n\n\t\t ********************************************************************\n";
	cout << messege;
	cout << "\n\t\t ********************************************************************\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	main_menu();
	return 0;
}

void main_menu() {
	int choice;
	welcomemessage();
	cout << "\n\n\t\t\tPlease choose from 1 to 4: \n";
	cout << "\t\t\tPress 1 to choose Reservation" << endl;
	cout << "\t\t\tPress 2 to choose Flight Schedule" << endl;
	cout << "\t\t\tPress 3 to choose My Trips" << endl;
	cout << "\t\t\tPress 4 to choose Exit" << endl;

	cin >> choice;
	switch (choice) {
	case 1:
		available_flights();
		break;
	case 2:
		offers();
		break;
	case 4:
		break;
	default:
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 4 \n";
		main_menu();
		break;
	}
}
void available_flights()
{
	char choice, try_again;

	do {
		cout << "\t\t\t please choose  One way (O) Round trip (R)  Multicity (M) \n";
		cin >> choice;
		if (choice == 'o' || choice == 'O')
		{
			oneway();
		}
		else if (choice == 'r' || choice == 'R')
		{
			round();
		}
		else if (choice == 'm' || choice == 'M')
		{
			multi();
		}
		else
		{
			cout << "\t\t the letter you entered is not a choice , Please try again \n";
		}
		cout << "\t\t\tDo you want to try again (y/n) \n";
		cin >> try_again;
	} while (try_again == 'y' || try_again == 'Y');
}
void countries()
{
	int continent, count;

	string country[5][4] = { { "Bahrain (Manama)","China (Beijing)","Saudi Arabia (Riyadh)","United Arab Emirates (Abu Dhabi)" }, { "Algeria (Algiers)","Tunisia (Tunisia)","Morocco (Marakesh)","Sudan (Khartoum)" }, { "EGY Alexandria (ALY)","EGY Cairo (CAI)","EGY Luxor (LXR)","EGY Sharm Elshekh (SSH)" }, { "France (Paris)","Russia (Moscow)","Spain (Madrid)","United Kingdom (London)" }, { "Canada (Ottawa)","United States (Washington)","Brazil (Brasilia)","Argentina (Buenos Aires)" } };
	cout << "\t\t\tplease choose the section you will travel from : \n";
	cout << "\t\t\tAsia [1] , Africa [2], Africa.Egypt [3] , Europe[4] , America[5] \n";
	cin >> continent;
	if (continent == 1)
	{
		cout << "\t\tplease choose a country you will travel from in Asia : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[0][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 2)
	{
		cout << "\t\tplease choose a country you will travel from in Africa : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[1][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 3)
	{
		cout << "\t\tplease choose a country you will travel from in Africa : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[2][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 4)
	{
		cout << "\t\tplease choose a country you will travel from in Africa : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[3][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 5)
	{
		cout << "\t\tplease choose a country you will travel from in Africa : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[4][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else
	{
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 5\n\n";
		countries();
	}
	cin >> count;
	if (count >= 1 && count <= 4)
		passenger.airPorts.from = country[continent - 1][count - 1];
	else
	{
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 4\n\n";
		countries();
	}
	travelto(continent, count);
}
void travelto(int x, int y)
{
	int continent, count;

	string country[5][4] = { { "Bahrain (Manama)","China (Beijing)","Saudi Arabia (Riyadh)","United Arab Emirates (Abu Dhabi)" }, { "Algeria (Algiers)","Tunisia (Tunisia) ","Morocco (Marakesh)","Sudan (Khartoum)" }, { "Alexandria (ALY)","Cairo (CAI)","Luxor (LXR)","Sharm Elshekh (SSH)" }, { "France (Paris)","Russia (Moscow)","Spain (Madrid)","United Kingdom (London)" }, { "Canada (Ottawa)","United States (Washington)","Brazil (Brasilia)","Argentina (Buenos Aires)" } };

	cout << "\t\t\tplease choose the section you will travel to : \n";
	cout << "\t\t\tAsia [1] , Africa [2], Africa.Egypt [3] , Europe[4] , America[5] \n";
	cin >> continent;
	if (continent == 1)
	{
		cout << "\t\tplease choose a country you will travel to in Asia : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[0][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 2)
	{
		cout << "\t\tplease choose a country you will travel to in Africa : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[1][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 3)
	{
		cout << "\t\tplease choose an airport you will travel to in Africa.Egypt : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[2][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 4)
	{
		cout << "\t\tplease choose a country you will travel to in Europe : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[3][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 5)
	{
		cout << "\t\tplease choose a country you will travel to in America : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[4][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else
	{
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 5\n\n";
		travelto(x, y);
	}
	cin >> count;
	if (count >= 1 && count <= 4)
		passenger.airPorts.to = country[continent - 1][count - 1];
	else
	{
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 4\n\n";
		travelto(x, y);
	}
	if (x == continent && y == count)
	{
		cout << "\t\tyou have choosen the same airport please choose again\n\n";
		insidall();
	}
}
void insidall()
{
	int lev;
	countries();

	bool y = false;
	do
	{
		cout << "\t\t\tPlease choose the class you want to travel on \n \t\t\tPress 1 for Buisness Class \n \t\t\tPress 2 for Economic Class \n";
		cin >> lev;
		if (lev == 1 || lev == 2)
		{
			if (lev == 1)
				passenger.level = "Buisness";
			else
				passenger.level = "Economic";
			y = true;
		}
		else
			cout << "\t\t\tthe number choosen isn' t from the options , please try again\n\n";
	} while (y == false);
	cout << "\t\tplease enter the date you want to travel in : \n";
	cout << "\t\t\t Enter the date : \n";
	cin >> passenger.airPorts.myDate.Day >> passenger.airPorts.myDate.Month >> passenger.airPorts.myDate.Year;
	if (passenger.airPorts.myDate.Day < 1 || passenger.airPorts.myDate.Day > 31)
	{
		cout << "\t\t\t you entered a wrong value, please try again\n\n";
	}
	else if (passenger.airPorts.myDate.Day)
	{
		int random = rand() % 4;
		if (random == 0)
		{
			cout << "\t\t\tthere is no trips in this day , please try again\n\n";
			insidall();
		}
		else
		{
			cout << "\t\t\t there are " << random << "trips" << endl;
			cout << "\t\t\tplease choose from these trips : \n";
			for (int i = 0; i < random; i++)
			{

				cout << "\t\t\t\t[" << i + 1 << "]   from " << passenger.airPorts.from << "  to " << passenger.airPorts.to << endl;
				if (i == 0)
					cout << "from" << "09:00 to";
				else if (i == 1)
					cout << "from" << "12:00 to";
				else if (i == 2)
					cout << "from" << "15:00 to";
				else if (i == 3)
					cout << "from" << "18:00 to";
				cout << endl << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
			}
			cout << "\t\t\tif you want to Exit press (0) , if you want to reserve choose the number of the trip : \n";
			int cont;
			cin >> cont;
			if (cont == 0)
			{
				main_menu();
			}
			else if (cont <= random)
			{
				reserve();
			}
			else
			{
				cout << "\t\t\tthis choice is not an option , please try again \n\n\n";
				main_menu();
			}
		}


	}

}
void oneway()
{
	printmessage("\t\t\t\t\t welcome to oneway screen\n");
	insidall();
	main_menu();
}
void round()
{
	printmessage("\t\t\t\t\t welcome to Round Trip screen\n");
	cout << "\t\t\t please write your information about Departure Trip\n";
	insidall();
	cout << "\t\t\t please write your information about Incoming Trip\n";
	insidall();
	swap(passenger.airPorts.from, passenger.airPorts.to);
	main_menu();

}
void multi()
{
	printmessage("\t\t\t\t\t welcome to Multicity screen\n");
	cout << "\t\t\t\t How many trips you want ?? \n";
	int tripnumber;
	cin >> tripnumber;

	if (tripnumber == 0)
	{
		main_menu();
	}
	else if (tripnumber == 1)
	{
		oneway();
	}

	else if (tripnumber >= 2 && tripnumber < 7)
	{
		for (int i = 0; i < tripnumber; i++)
		{
			insidall();
			swap(passenger.airPorts.from, passenger.airPorts.to);
		}

	}
	else
	{
		cout << "\t\t\t you entered a big number of trips, please try again with small number \n";
		cout << "\t\t\t note : our maximum number of trips is 6 \n";
		multi();
	}


	main_menu();

}
void reserve()
{
	int n;
	cout << "\t\t\tEnter the number of Passengers: \n";
	cin >> n;
	pass passenger;
	for (int i = 0; i < n; i++)
	{
		cout << "\t\t\tPlease enter your First name:\n";
		cin >> passenger.first_name;
		cout << "\t\t\tPlease enter your last name:\n";
		cin >> passenger.last_name;
		cout << "\t\t\tPlease enter your title:\n";
		cin >> passenger.title;
		cout << "\t\t\tPlease enter your email:\n";
		cin >> passenger.email;
		cout << "\t\t\tPlease enter your phone number:\n";
		cin >> passenger.phone_num;
		cout << "\t\t\tPlease enter your Passport ID:\n";
		cin >> passenger.passport_id;
		bool y = false;
		do {
			cout << "\t\t\tChoose your gender:\n \t\t\t\t[1] Female , [2] Male \t";
			cin >> passenger.gender;
			if (passenger.gender == "1")
			{
				passenger.gender = "Female";
				y = true;
			}
			else if (passenger.gender == "2")
			{
				passenger.gender = "male";
				y = true;
			}
			else
				cout << "\t\t\tthe number choosen isn' t from the options , please try again\n";
		} while (y == false);
		
		cout << "\t\t\tPlease enter your birth date \t";
		cin >> passenger.birthdate.Day >> passenger.birthdate.Month >> passenger.birthdate.Year;
		cout << "\t\t\tCreate a Password:\n";
		cin >> passenger.pass1;
		cout << "\t\t\tRewrite the Password:\n";
		cin >> passenger.pass2;
	}

}
void offers()
{
	ticket offer = {};
	cout << "\n\t\t\t  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "\t\t\t             WELCOME TO FLIGHT SCHEDULE SCREEN\n";
	cout << "\t\t\t  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n\n";

	int count = 1;
	cout << "\n\t\t\t\t\t\t    " << "[" << count <<"]";
		cout << "\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                FIRST TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t\t\t\t    " << "[" << count+1 << "]";
		cout << "\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                SECOND TICKET              =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t\t\t\t    " << "[" << count +2 << "]";
		cout << "\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                THIRD TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t\t\t\t    " << "[" << count+3 << "]";
		cout << "\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                FORTH TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t\t\t\t    " << "[" << count +4<< "]";
		cout << "\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                FIFTH TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";

	cout << "\n\t\t\t       please enter the number of the ticket you like : \n";
	
	cin >> offer.number;
	if (offer.number == count)
	{
		cout << "\t\t\t   you chose the first ticket\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                FIRST TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\t\t\t  if you want to reserve this ticket press (y) if you don't press any other key...\n";
		char press ;
		if (press == 'y' || press == 'Y')
		{
			reserve();
		}
		else
			main_menu();
	}
	else if (offer.number == count + 1)
	{
		cout << "\t\t\t   you chose the second ticket\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                SECOND TICKET              =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\t\t\t  if you want to reserve this ticket press (y) if you don't press any other key...\n";
		char press;
		if (press == 'y' || press == 'Y')
		{
			reserve();
		}
		else
			main_menu();
	}
	else if (offer.number == count + 2)
	{
		cout << "\t\t\t   you chose the third ticket\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                THIRD TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\t\t\t  if you want to reserve this ticket press (y) if you don't press any other key...\n";
		char press;
		if (press == 'y' || press == 'Y')
		{
			reserve();
		}
		else
			main_menu();
	}
	else if (offer.number == count + 3)
	{
		cout << "\t\t\t   you chose the forth ticket\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                FORTH TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\t\t\t  if you want to reserve this ticket press (y) if you don't press any other key...\n";
		char press;
		if (press == 'y' || press == 'Y')
		{
			reserve();
		}
		else
			main_menu();
	}
	else if (offer.number == count + 4)
	{
		cout << "\t\t\t   you chose the fifth ticket\n";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\n\t\t\t        =                  WELCOME                  =";
		cout << "\n\t\t\t        =                     TO                    =";
		cout << "\n\t\t\t        =               Airline Ticket              =";
		cout << "\n\t\t\t        =                FIFTH TICKET               =";
		cout << "\n\t\t\t        =                                           =";
		cout << "\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
		cout << "\t\t\t  if you want to reserve this ticket press (y) if you don't press any other key...\n";
		char press;
		if (press == 'y' || press == 'Y')
		{
			reserve();
		}
		else
			main_menu();
	}
	else
	{
		cout << "\t\t\twe do not have this ticket number , please try again\n\n";
		main_menu();
	}
	// (STRUCT)??? ??????? ??????? ????? , ?????? ????? ????????? ?? 
	//???? ??? ???? ???? ) ?? ???? ??? ????? ?? ?????? ?? ???? ??????? ?????? ?? ?? ???? ????? ????? ???????? ???? ??? ????? ??
}
