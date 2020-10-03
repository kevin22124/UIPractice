
 #include <iostream>
 using namespace std;
 int main(int argc, char* argv[]) 
 {
	 for (int i = 1; i < argc; i = i++)
	 {
		 string arg = argv[i];

		 if (arg == "-?"|| argc !=3)
		 {
			 cout << "要輸入兩個名子才行";
		 }
	 }
	 if (argc != 3)
	 {
		 cout << "";
	 }
	else
	{
		 cout << "Hello, " << argv[1] << "." << endl;
		 cout << "This is " << argv[2] << ", welcome."
			 << endl;
	}
	return 0;

}
