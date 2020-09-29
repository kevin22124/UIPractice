#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	string user;
	string vister;
	cout << "訪客叫什麼名子:";
	cin >> vister;
	cout << "主人叫什麼名子";
	cin >> user;
	if (argc < 2 || argc > 2)
	{
		cout << "usage:" << endl;
		cout << " " << argv[0] << " user" << endl;

	}
	else {
		cout << "Hello, " << argv[1] << "." << endl;
		cout << "Welcome to the "<<user<<" world." << endl;

	}
	return 0;
}