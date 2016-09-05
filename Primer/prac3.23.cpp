#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> iv(10);
	for(int i = 0; i < 10; i++)
	{
		iv[i] = i;
	}
	for(auto it = iv.begin(); it != iv.end();++it)
	{
		(*it) = (*it) * 2;
	}
	for(auto v : iv)
	{
		cout << v << " ";
	}
	cout << endl;
	return 0;
}