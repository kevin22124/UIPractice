#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	string user;
	string vister;
	cout << "�X�ȥs����W�l:";
	cin >> vister;
	cout << "�D�H�s����W�l";
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