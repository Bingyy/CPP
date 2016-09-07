#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(void)
{
	vector<int> ivec;
	for(int i = 0; i != 10; i++)
	{
		ivec.push_back(i);
		ivec.push_back(i); //每个元素保存两次
	}

	set<int> iset(ivec.cbegin(),ivec.cend());
	multiset<int> miset(ivec.cbegin(),ivec.cend());
	cout << iset.size() << endl; //size为10
	cout << miset.size() << endl; //size为20
	
	return 0;
}