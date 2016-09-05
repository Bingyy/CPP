#include<iostream>
#include<string>

using namespace std;

int main()
{
	// string line;
	// while(getline(cin,line))
	// 	cout << line <<endl;

	// string word;
	// while(cin >> word)
	// 	cout << word << endl; 

	string str("this is a string");
	for(auto c : str)
		cout << c << endl;
	return 0;
}