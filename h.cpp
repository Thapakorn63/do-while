#include <iostream>
#include <string>
using namespace std;
int main()
{
	char menu;
	string username,password,user,pass;
	cout << "Please enter menu" << endl;
	cout << "------------------" << endl;
	cout << "1. Register"<< endl;
	cout << "2. Login" << endl;
	cout << "Q. Exit" << endl;
	cout << "Select : ";
	cin >> menu;
	do
	{ if (menu=='1') 
		{cout << "Enter username : " ;
		 cin >> username;
		 cout << "Enter password : ";
		 cin >> password;
	    }
	else if(menu=='2') {
		 cout << "Input username for login: " ;
		 cin >> user;
		 cout << "Input password for login: ";
		 cin >> pass;
		 if(username==user&&password==pass)
		 {
			 cout << "Username and password are corect." << endl;
		 }
		 else cout <<"Username or password is incorect." << endl;
	}
	cout << "Select : ";
	cin >> menu;
	
	} 
	while(menu!='Q' && menu!='q');

	return (0);
}