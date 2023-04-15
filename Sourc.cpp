#include<iostream>
#include<fstream>
#include<Windows.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
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
	int price;
	int th1;
	int th2;
	int tm2;
};
struct pass
{
	Data airPorts;
	string first_name[7];
	string last_name[7];
	string title[7];
	Date birthdate[7];
	string passport_id[7];
	string gender[7];
	string level;
	string user;

};
struct countries_offers {
	string dep;
	string arv;
	int t_h;
	int t_m;
	int price;
};
void getdata2(countries_offers offers1[], countries_offers schedule[]);
void main_menu(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
void available_flights(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
void oneway(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
void round(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
void multi(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
void reserve(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
string countries(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
int check_Travel(string a, string b, countries_offers schedule[]);
void choose_trip(pass passengers[], countries_offers offers1[], countries_offers schedule[], int ind);
void offers(pass passengers[], countries_offers offers1[], countries_offers schedule[]);
int getindex(pass passengers[], countries_offers schedule[]);
void senddata2(countries_offers offers1[], countries_offers schedule[], pass passengers[]);
void welcomemessage()
{
	cout << "\t\t\t###########################################################################\n";
	cout << "\t\t\t############                                                   ############";
	cout << "\n\t\t\t############         welcome to Destinya Airline system        ############";
	cout << "\n\t\t\t############                                                   ############\n";
	cout << "\t\t\t###########################################################################\n";

}
void printmessage(string message)
{
	cout << "\n\n\t\t ********************************************************************\n";
	cout << message;
	cout << "\n\t\t ********************************************************************\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string country[5][4] = { { "Bahrain_(Manama)","China_(Beijing)","Saudi_Arabia_(Riyadh)","United_Arab_Emirates_(Abu Dhabi)" }, { "Algeria_(Algiers)","Tunisia_(Tunisia)","Morocco_(Marakesh)","Sudan_(Khartoum)" }, { "EGY_Alexandria_(ALY)","EGY_Cairo_(CAI)","EGY_Luxor_(LXR)","EGY_Sharm_Elshekh_(SSH)" }, { "France_(Paris)","Russia_(Moscow)","Spain_(Madrid)","United_Kingdom_(London)" }, { "Canada_(Ottawa)","United_States_(Washington)","Brazil_(Brasilia)","Argentina_(Buenos Aires)" } };
	pass passengers[500]{};
	countries_offers offers1[5]{};
	countries_offers schedule[30]{};
	getdata2(offers1, schedule);
	/*for (int i = 0; i < 30; i++)
	{
		cout << "country 1\n";
		cout << schedule[i].dep << endl;
		cout << "country 2\n";
		cout << schedule[i].arv << endl;
		cout << "time in hours\n";
		cout << schedule[i].t_h << endl;
		cout << "time in mint\n";
		cout << schedule[i].t_m << endl;
		cout << "flight price\n";
		cout << schedule[i].price << endl;
		cout << "=======================================\n";
	}
	/*for (int i = 0; i < 30; i++)
	{
		int x, y;
		cout << "country 1\n";
		cin>> x>>y;
		schedule[i].dep = country[x][y];
		cout << "country 2\n";
		cin>> x>>y;
		schedule[i].arv = country[x][y];
		cout << "time in hours\n";
		cin>> schedule[i].t_h;
		cout << "time in mint\n";
		cin>> schedule[i].t_m;
		cout << "flight price\n";
		cin>> schedule[i].price;
		cout << "=======================================\n";
	}*/
	main_menu(passengers, offers1, schedule);
	senddata2(offers1, schedule, passengers);
	return 0;
}

void getdata2(countries_offers offers1[], countries_offers schedule[])
{
	ifstream DT("offers.txt");
	if (DT.is_open())
	{

		for (int i = 0; i < 5; i++)
		{
			DT >> offers1[i].dep >> offers1[i].arv >> offers1[i].t_h >> offers1[i].t_m >> offers1[i].price;
		}
		DT.close();
	}
	ifstream ah("countries.txt");
	if (ah.is_open())
	{

		for (int i = 0; i < 30; i++)
		{
			ah >> schedule[i].dep >> schedule[i].arv >> schedule[i].t_h >> schedule[i].t_m >> schedule[i].price;
		}
		ah.close();
	}
}
void main_menu(pass passengers[], countries_offers offers1[], countries_offers schedule[]) {
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
		available_flights(passengers, offers1, schedule);
		break;
	case 2:
		offers(passengers, offers1, schedule);
		break;
	case 4:
		break;
	default:
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 4 \n";
		main_menu(passengers, offers1, schedule);
		break;
	}
}
void available_flights(pass passengers[], countries_offers offers1[], countries_offers schedule[])
{
	char choice, try_again;

	do {
		cout << "\t\t\t please choose  One way (O) Round trip (R)  Multicity (M) \n";
		cin >> choice;
		if (choice == 'o' || choice == 'O')
		{
			oneway(passengers, offers1, schedule);
		}
		else if (choice == 'r' || choice == 'R')
		{
			round(passengers, offers1, schedule);
		}
		else if (choice == 'm' || choice == 'M')
		{
			multi(passengers, offers1, schedule);
		}
		else
		{
			cout << "\t\t the letter you entered is not a choice , Please try again \n";
		}
		cout << "\t\t\tDo you want to try again (y/n) \n";
		cin >> try_again;
	} while (try_again == 'y' || try_again == 'Y');
}
int getindex(pass passengers[], countries_offers schedule[])
{
	int IND = 499;
	for (int i = 0; i < 500; i++)
		if (passengers[i].user.empty())
		{
			IND = i;
			break;
		}
	return IND;
}
string countries(pass passengers[], countries_offers offers1[], countries_offers schedule[])
{
	int continent, count;

	string country[5][4] = { { "Bahrain_(Manama)","China_(Beijing)","Saudi_Arabia_(Riyadh)","United_Arab_Emirates_(Abu_Dhabi)" }, { "Algeria_(Algiers)","Tunisia_(Tunisia)","Morocco_(Marakesh)","Sudan_(Khartoum)" }, { "EGY_Alexandria_(ALY)","EGY_Cairo_(CAI)","EGY_Luxor_(LXR)","EGY_Sharm_Elshekh_(SSH)" }, { "France_(Paris)","Russia_(Moscow)","Spain_(Madrid)","United_Kingdom_(London)" }, { "Canada_(Ottawa)","United_States_(Washington)","Brazil_(Brasilia)","Argentina_(Buenos_Aires)" } };
	cout << "\t\t\tplease choose the section you will want : \n";
	cout << "\t\t\tAsia [1] , Africa [2], Africa.Egypt [3] , Europe[4] , America[5] \n";
	cin >> continent;
	if (continent == 1)
	{
		cout << "\t\tplease choose a country you want in Asia : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[0][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 2)
	{
		cout << "\t\tplease choose a country you want in Africa : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[1][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 3)
	{
		cout << "\t\tplease choose a country you want in Egypt : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[2][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 4)
	{
		cout << "\t\tplease choose a country you want in Europe  : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[3][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else if (continent == 5)
	{
		cout << "\t\tplease choose a country you in America : \n\n";
		for (int i = 0; i < 4; i++)
		{
			cout << country[4][i] << "[" << i + 1 << "]\n\n";
		}
	}
	else
	{
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 5\n\n";
		countries(passengers, offers1, schedule);
	}
	cin >> count;
	bool X = false;
	if (!(count >= 1 && count <= 4))
	{
		cout << "\t\tthe number chosen is not from the options, please choose a number from 1 to 4\n\n";
		countries(passengers, offers1, schedule);
	}
	string r = country[continent - 1][count - 1];
	return r;
}
int check_Travel(string a, string b, countries_offers schedule[])
{
	int ind;
	if (a == b)
	{
		cout << "You have choosed the same airport,please try again...\n";
		ind = 31;
	}
	else
	{
		bool q = false;
		for (int i = 0; i < 30; i++)
		{

			if ((a == schedule[i].dep) || (a == schedule[i].arv))
			{
				if ((b == schedule[i].dep) || (b == schedule[i].arv))
				{
					ind = i;
					q = true;
					break;
				}
			}

		}
		if (!q)
		{
			cout << "this flight isn't avilable,please try again...\n";
			ind = 31;
		}
	}

	return ind;
}
void choose_trip(pass passengers[], countries_offers offers1[], countries_offers schedule[], int ind)
{
	int I = getindex(passengers, schedule);
	cout << "\t\tplease enter the date you want to travel in : \n";
	cout << "\t\t\t Enter the date : \n";
	cin >> passengers[I].airPorts.myDate.Day >> passengers[I].airPorts.myDate.Month >> passengers[I].airPorts.myDate.Year;
	if (passengers[I].airPorts.myDate.Day < 1 || passengers[I].airPorts.myDate.Day > 31)
	{
		cout << "\t\t\t you entered a wrong value, please try again\n\n";
	}
	else if (passengers[I].airPorts.myDate.Day)
	{
		int random = 1;
		if (random == 0)
		{
			cout << "\t\t\tthere is no trips in this day , please try again\n\n";
			main_menu(passengers, offers1, schedule);
		}
		else
		{
			cout << "\t\t\t there are " << 3 << " trips" << endl;
			cout << "\t\t\tplease choose from these trips : \n";

			cout << "\n\t\t\t\t\t\t    " << "[" << 1 << "]\n";
			cout << "FLIGHT DATE\t\tFLIGHT NO\t\tDEPARTURE\t\tARRIVAL\t\tCLASS\t\tprice" << endl;
			cout << passengers[I].airPorts.myDate.Day << "/" << passengers[I].airPorts.myDate.Month << "/" << passengers[I].airPorts.myDate.Year << "\t\t" << "DS914" << "\t\t" << passengers[I].airPorts.from << " " << 6 << ":00" << "\t\t" << passengers[I].airPorts.to << " " << 6 + schedule[ind].t_h << ":" << schedule[ind].t_h << "\t\t" << passengers[I].level << "\t\t" << schedule[ind].price << "\n";
			cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";


			cout << "\n\t\t\t\t\t\t    " << "[" << 2 << "]\n";
			cout << "FLIGHT DATE\t\tFLIGHT NO\t\tDEPARTURE\t\tARRIVAL\t\tCLASS\t\tprice" << endl;
			cout << passengers[I].airPorts.myDate.Day << "/" << passengers[I].airPorts.myDate.Month << "/" << passengers[I].airPorts.myDate.Year << "\t\t" << "DS914" << "\t\t" << passengers[I].airPorts.from << " " << 9 << ":00" << "\t\t" << passengers[I].airPorts.to << " " << 9 + schedule[ind].t_h << ":" << schedule[ind].t_h << "\t\t" << passengers[I].level << "\t\t" << schedule[ind].price << "\n";
			cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";



			cout << "\n\t\t\t\t\t\t    " << "[" << 3 << "]\n";
			cout << "FLIGHT DATE\t\tFLIGHT NO\t\tDEPARTURE\t\tARRIVAL\t\tCLASS\t\tprice" << endl;
			cout << passengers[I].airPorts.myDate.Day << "/" << passengers[I].airPorts.myDate.Month << "/" << passengers[I].airPorts.myDate.Year << "\t\t" << "DS914" << "\t\t" << passengers[I].airPorts.from << " " << 12 << ":00" << "\t\t" << passengers[I].airPorts.to << " " << 12 + schedule[ind].t_h << ":" << schedule[ind].t_h << "\t\t" << passengers[I].level << "\t\t" << schedule[ind].price << "\n";
			cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
			cout << "\t\t\tif you want to Exit press (0) , if you want to reserve choose the number of the trip : \n";
			int cont;
			cin >> cont;
			if (cont == 0)
			{
				main_menu(passengers, offers1, schedule);
			}
			else if (cont <= 3)
			{
				passengers[I].airPorts.price = schedule[ind].price;
				passengers[I].airPorts.tm2 = schedule[ind].t_m;
				if (cont == 1)
				{
					passengers[I].airPorts.th1 = 6;
					passengers[I].airPorts.th2 = 6 + schedule[ind].t_h;

				}
				else if (cont == 2)
				{
					passengers[I].airPorts.th1 = 9;
					passengers[I].airPorts.th2 = 9 + schedule[ind].t_h;

				}
				else if (cont == 3)
				{
					passengers[I].airPorts.th1 = 12;
					passengers[I].airPorts.th2 = 12 + schedule[ind].t_h;

				}

			}
			else
			{
				cout << "\t\t\tthis choice is not an option , please try again \n\n\n";
				choose_trip(passengers, offers1, schedule, ind);
			}
		}


	}
}
void oneway(pass passengers[], countries_offers offers1[], countries_offers schedule[])
{
	printmessage("\t\t\t\t\t welcome to oneway screen\n");
	string x, y;
	cout << "Choose the country you want to travel from...\n";
	x = countries(passengers, offers1, schedule);
	cout << "Choose the country you want to travel to...\n";
	y = countries(passengers, offers1, schedule);
	int I = getindex(passengers, schedule);
	int ind = check_Travel(x, y, schedule);
	if (ind == 31)
		oneway(passengers, offers1, schedule);
	else
	{
		passengers[I].airPorts.from = x;
		passengers[I].airPorts.to = y;

		int lev;
		bool Y = false;
		do
		{
			cout << "\t\t\tPlease choose the class you want to travel on \n \t\t\tPress 1 for Buisness Class \n \t\t\tPress 2 for Economic Class \n";
			cin >> lev;
			if (lev == 1 || lev == 2)
			{
				if (lev == 1)
					passengers[I].level = "BUSINESS";
				else
					passengers[I].level = "ECONOMY";
				Y = true;
			}
			else
				cout << "\t\t\tthe number choosen isn' t from the options , please try again\n\n";
		} while (Y == false);
		choose_trip(passengers, offers1, schedule, ind);
		reserve(passengers, offers1, schedule);
	}
	main_menu(passengers, offers1, schedule);
}
void round(pass passengers[], countries_offers offers1[], countries_offers schedule[])
{
	printmessage("\t\t\t\t\t welcome to Round Trip screen\n");
	cout << "\t\t\t please write your information about Departure Trip\n";
	string x, y;
	cout << "Choose the country you want to travel from...\n";
	x = countries(passengers, offers1, schedule);
	cout << "Choose the country you want to travel to...\n";
	y = countries(passengers, offers1, schedule);
	int I = getindex(passengers, schedule);

	int ind = check_Travel(x, y, schedule);
	if (ind == 31)
		round(passengers, offers1, schedule);
	else
	{
		passengers[I].airPorts.from = x;
		passengers[I].airPorts.to = y;

		int lev;
		bool Y = false;
		do
		{
			cout << "\t\t\tPlease choose the class you want to travel on \n \t\t\tPress 1 for Buisness Class \n \t\t\tPress 2 for Economic Class \n";
			cin >> lev;
			if (lev == 1 || lev == 2)
			{
				if (lev == 1)
					passengers[I].level = "BUSINESS";
				else
					passengers[I].level = "ECONOMY";
				Y = true;
			}
			else
				cout << "\t\t\tthe number choosen isn' t from the options , please try again\n\n";
		} while (Y == false);
		choose_trip(passengers, offers1, schedule, ind);
		reserve(passengers, offers1, schedule);

		passengers[I + 1].airPorts.from = passengers[I].airPorts.to;
		passengers[I + 1].airPorts.to = passengers[I].airPorts.from;
		passengers[I + 1].airPorts.price = passengers[I].airPorts.price;
		passengers[I + 1].user = passengers[I].user;
		passengers[I + 1].level = passengers[I].level;
		for (int j = 0; j < 7; j++)
		{
			passengers[I + 1].first_name[j] = passengers[I].first_name[j];
			passengers[I + 1].last_name[j] = passengers[I].last_name[j];
			passengers[I + 1].gender[j] = passengers[I].gender[j];
			passengers[I + 1].title[j] = passengers[I].title[j];
			passengers[I + 1].birthdate[j].Day = passengers[I].birthdate[j].Day;
			passengers[I + 1].birthdate[j].Month = passengers[I].birthdate[j].Month;
			passengers[I + 1].birthdate[j].Year = passengers[I].birthdate[j].Year;
			passengers[I + 1].passport_id[j] = passengers[I].passport_id[j];
		}
	}

	main_menu(passengers, offers1, schedule);

}
void multi(pass passengers[], countries_offers offers1[], countries_offers schedule[])
{
	printmessage("\t\t\t\t\t welcome to Multicity screen\n");
	cout << "\t\t\t\t How many trips you want ?? \n";
	string A, B;
	int tripnumber = 0;
	int I = getindex(passengers, schedule);
	char X = 'y';
	cout << "Enter the airport that you want to travel from\n";
	A = countries(passengers, offers1, schedule);
	do
	{
		cout << "Enter the airport you want to travel to..\n";
		B = countries(passengers, offers1, schedule);
		int ind = check_Travel(A, B, schedule);
		if (ind == 31)
		{
			cout << "DO you want to continue ? press (y) if you want to continue more in multi trips...\n";
			cin >> X;
			if (X == 'y' || X == 'Y')
				multi(passengers, offers1, schedule);
			else
				break;
		}
		else
		{
			passengers[I + tripnumber].airPorts.from = A;
			passengers[I + tripnumber].airPorts.to = B;

			int lev;
			bool Y = false;
			do
			{
				cout << "\t\t\tPlease choose the class you want to travel on \n \t\t\tPress 1 for Buisness Class \n \t\t\tPress 2 for Economic Class \n";
				cin >> lev;
				if (lev == 1 || lev == 2)
				{
					if (lev == 1)
						passengers[I].level = "BUSINESS";
					else
						passengers[I].level = "ECONOMY";
					Y = true;
				}
				else
					cout << "\t\t\tthe number choosen isn' t from the options , please try again\n\n";
			} while (Y == false);
			choose_trip(passengers, offers1, schedule, ind);
			A = passengers[I + tripnumber].airPorts.to;
			tripnumber++;
			cout << "DO you want to continue ? press (y) if you want to continue more in multi trips...\n";
			cin >> X;
		}

	} while ((X == 'y' || X == 'Y') && tripnumber < 8);
	if (tripnumber > 0)
	{
		reserve(passengers, offers1, schedule);
		for (int i = 1; i < tripnumber; i++)
		{
			passengers[I + i].airPorts.price = passengers[I].airPorts.price;
			passengers[I + i].user = passengers[I].user;
			passengers[I + i].level = passengers[I].level;
			for (int j = 0; j < 7; j++)
			{
				passengers[I + i].first_name[j] = passengers[I].first_name[j];
				passengers[I + i].last_name[j] = passengers[I].last_name[j];
				passengers[I + i].gender[j] = passengers[I].gender[j];
				passengers[I + i].title[j] = passengers[I].title[j];
				passengers[I + i].birthdate[j].Day = passengers[I].birthdate[j].Day;
				passengers[I + i].birthdate[j].Month = passengers[I].birthdate[j].Month;
				passengers[I + i].birthdate[j].Year = passengers[I].birthdate[j].Year;
				passengers[I + i].passport_id[j] = passengers[I].passport_id[j];
			}
		}
	}
	main_menu(passengers, offers1, schedule);
}
void reserve(pass passengers[], countries_offers offers1[], countries_offers schedule[])
{
	int n;
	bool ms = false;
	do
	{
		cout << "\t\t\tEnter the number of Passengers:      (the maximum number is 7) \n";
		cin >> n;
		if (n > 0 && n < 8)
			ms = true;
		else
			cout << "The number you have entered isn't available please try again \n ";
	} while (ms == false);
	int I = getindex(passengers, schedule);
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << " person information \n";
		cout << "\t\t\tPlease enter First name:\n";
		cin >> passengers[I].first_name[i];
		cout << "\t\t\tPlease enter last name:\n";
		cin >> passengers[I].last_name[i];
		cout << "\t\t\tPlease enter title:\n";
		cin >> passengers[I].title[i];
		cout << "\t\t\tPlease enter Passport ID:\n";
		cin >> passengers[I].passport_id[i];
		bool y = false;
		do {
			cout << "\t\t\tChoose gender:\n \t\t\t\t[1] Female , [2] Male \t";
			cin >> passengers[I].gender[i];
			if (passengers[I].gender[i] == "1")
			{
				passengers[I].gender[i] = "Female";
				y = true;
			}
			else if (passengers[I].gender[i] == "2")
			{
				passengers[I].gender[i] = "male";
				y = true;
			}
			else
				cout << "\t\t\tthe number choosen isn' t from the options , please try again\n";
		} while (y == false);

		cout << "\t\t\tPlease enter your birth date \t";
		cin >> passengers[I].birthdate[i].Day >> passengers[I].birthdate[i].Month >> passengers[I].birthdate[i].Year;
		cout << "****************************************************************\n";
	}

}
void offers(pass passengers[], countries_offers offers1[], countries_offers schedule[])
{
	int number;
	char num = '0';
	cout << "\n\t\t\t  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
	cout << "\t\t\t             WELCOME TO FLIGHT SCHEDULE SCREEN\n";
	cout << "\t\t\t  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n\n";
	for (int count = 0; count < 5; count++)
	{
		int n = (count + 1) * 3;
		cout << "\n\t\t\t\t\t\t    " << "[" << count + 1 << "]\n";
		cout << "FLIGHT DATE" << "\t" << "FLIGHT NO" << "\t" << "DEPARTURE" << "\t\t\t\t\t" << "ARRIVAL" << "\t\t\t\t" << "CLASS" << endl;
		cout << "15/4/2023" << "\t" << "DS914" << "\t\t" << offers1[count].dep << " " << n << ":00" << "\t\t\t" << offers1[count].arv << " " << n + offers1[count].t_h << ":" << offers1[count].t_m << "\t\t" << "ECONOMY\n";
		cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
	}
	cout << "\n\t\t\t       please enter the number of the ticket you like : \n";

	bool Y = false;
	do
	{
		cin >> number;
		if (number >= 1 && number <= 5)
			Y = true;
		else
			cout << "\t\t\twe do not have this ticket number , please try again\n";

	} while (Y == false);
	int n = (number) * 3;
	cout << "\n\t\t\t\t\t\t    " << "[" << number << "]\n";
	cout << "FLIGHT DATE" << "\t" << "FLIGHT NO" << "\t" << "DEPARTURE" << "\t\t\t\t\t" << "ARRIVAL" << "\t\t\t\t" << "CLASS" << endl;
	cout << "15/4/2023" << "\t" << "DS914" << "\t\t" << offers1[number - 1].dep << " " << n << ":00" << "\t\t\t" << offers1[number - 1].arv << " " << n + offers1[number - 1].t_h << ":" << offers1[number - 1].t_m << "\t\t" << "ECONOMY\n";
	cout << "\n\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
	cout << "\n\t\t  if you want to reserve this ticket press (y) if you don't ,press(n) any other key...\n";
	cin >> num;
	int I = getindex(passengers, schedule);
	if (num == 'y' || num == 'Y')
	{
		passengers[I].airPorts.from = offers1[number - 1].dep;
		passengers[I].airPorts.to = offers1[number - 1].arv;
		passengers[I].airPorts.myDate.Day = 15;
		passengers[I].airPorts.myDate.Month = 4;
		passengers[I].airPorts.myDate.Year = 2023;
		passengers[I].level = "ECONOMY";
		reserve(passengers, offers1, schedule);
	}
	else
	{

		cout << "If you want to back to flight schedule press (1),Or press (0) to go to main menu....\n";
		bool X = false;
		int num1;
		do
		{
			cin >> num1;
			if (num1 == 1)
			{
				offers(passengers, offers1, schedule);
				X = true;
			}
			else if (num1 == 0)
			{
				main_menu(passengers, offers1, schedule);
				X = true;
			}
			else
				cout << " You have entered invalid choice please choose again \n";
		} while (X == false);
	}
	main_menu(passengers, offers1, schedule);
}
void senddata2(countries_offers offers1[], countries_offers schedule[], pass passengers[])
{
	ofstream ah1("offers.txt");
	if (ah1.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			ah1 << offers1[i].dep << "\t" << offers1[i].arv << "\t" << offers1[i].t_h << "\t" << offers1[i].t_m << "\t" << offers1[i].price << endl;
		}

		ah1.close();
	}
	ofstream ah2("countries.txt");
	if (ah2.is_open())
	{
		for (int i = 0; i < 30; i++)
		{
			ah2 << schedule[i].dep << "\t" << schedule[i].arv << "\t" << schedule[i].t_h << "\t" << schedule[i].t_m << "\t" << schedule[i].price << endl;
		}

		ah2.close();
	}
	ofstream ah3("reservations.txt");
	if (ah3.is_open())
	{
		for (int i = 0; i < 500; i++)
		{
			ah3 << passengers[i].airPorts.from << "\t" << passengers[i].airPorts.to << "\t" << passengers[i].airPorts.price << "\t" << passengers[i].airPorts.myDate.
				Day << "\t" << passengers[i].airPorts.myDate.Month << "\t" << passengers[i].airPorts.myDate.Year << "\t" << passengers[i].airPorts.th1 << "\t" << passengers[i].airPorts.th2 << "\t" << passengers[i].airPorts.tm2 << passengers[i].level << "\t" << passengers[i].user << "\t";
			for (int j = 0; j < 7; j++)
			{
				ah3 << passengers[i].first_name[j] << "\t" << passengers[i].last_name[j] << "\t" << passengers[i].gender[j] << "\t" << passengers[i].title[j] << "\t" << passengers[i].passport_id[j] << "\t" << passengers[i].birthdate[j].Day << "\t" << passengers[i].birthdate[j].Month << "\t" << passengers[i].birthdate[j].Year;
			}
			cout << endl;
		}

		ah3.close();
	}
}
