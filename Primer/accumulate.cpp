#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

int main(void)
{
	vector<int> nums(10,1);
	int i = 1;
	for(auto it = nums.begin(); it != nums.end(); it++,i++)
	{
		(*it) = i;
	}
	int sum = accumulate(nums.cbegin(), nums.cend(),0);
	cout << sum << endl;
	return 0;
}
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.ends());
	auto end_unique = unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}
