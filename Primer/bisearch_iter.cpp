#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> iv;
	int num;
	int target;
	cout << "How many numbers: ";
	cin >> num;
	cout << "what number to search: ";
	cin >>  target;
	cout << "Input the numbers: "
	for(int i = 0; i < num; i++)
	{
		int temp;
		cin >> temp;
		iv.push_back(temp);
	}
	//sort
	sort(iv.begin(),iv.end());

	auto beg = iv.begin(),end = iv.end();
	auto mid = beg + iv.size() /2;
	while(beg != end && *mid != target)
	{
		if(*mid > target)
		{
			end = mid;
		}
		else
		{
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}
	cout << *mid << endl;
	return 0;
}