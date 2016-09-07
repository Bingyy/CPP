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
	cout << iset.size() << endl;
	cout << miset.size() << endl;
	// s.insert(1);
	// for(auto it = s.begin(); it != s.end(); it++)
	// {
	// 	cout << (*it) << " ";
	// }
	// cout << endl;
	// cout << s.count(6) << endl;
	return 0;
}