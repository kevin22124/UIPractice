
 #include <iostream>
 using namespace std;
 int main(int argc, char* argv[]) 
 {
	 if (argc == 1|| argc>3)
	 {
		 cout << "���~";
	 }
	// if (argc > 3)
	// {
		// cout << "���~";
	 //}
	 if (argc < 4)
	 {
		 for (int i = 1; i < argc; i = i + 2)
		 {
			 string arg = argv[i];

			 if (arg == "-?")
			 {
				 cout << "�n��J��ӦW�l�~��";
			 }
			 else if (argc != 3)
			 {
				 cout << "���~";
			 }
			 else
			 {
				 cout << "Hello, " << argv[1] << "." << endl;
				 cout << "This is " << argv[2] << ", welcome." << endl;
			 };
		 }
	 }
	// if (argc != 3 )
	// {
		// cout << "���~";
	 //}
	//else
	//{
		// cout << "Hello, " << argv[1] << "." << endl;
		 //cout << "This is " << argv[2] << ", welcome."
			// << endl;
	//}
	return 0;

}
