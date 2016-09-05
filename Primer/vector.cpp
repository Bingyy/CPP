#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	vector<int> v;
	for(int i = 0; i != 100; i++)
	{
		v.push_back(i);
	}
	for(int i : v)
	{
		cout << i << " " ;
	}
	// cout << endl;
	printf("\n");
	return 0;

}