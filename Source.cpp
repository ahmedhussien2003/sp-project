#include<iostream>
#include<fstream>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
bool islog()
{
	string user, pass, us, ps;
	cout << "enter your information\n";
	cin >> user >> pass;
	ifstream read("reg\\" + user + ".txt");
	getline(read, us);
	getline(read, ps);
	if (user == us && pass == ps)
		return true;
	else
		return false;
}
int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int option;
	cout << "enter your option 1-signup  2-login\n";
	cin >> option;
	if (option == 1)
	{
		string username, password;
		cout << "enter your information\n";
		cin >> username >> password;
		ofstream ahmed;
		ahmed.open("reg\\" + username + ".txt");
		ahmed << username << endl;
		ahmed << password << endl;
	}
	else if (option == 2) 
	{
		if (islog())
			cout << "welcome" << endl;
		else
			cout << "sorry" << endl;
	}

	
	return 0;
}


