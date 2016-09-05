#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(void)
{
	vector<int> v;
	int n;
	printf("Input a number: ");
	scanf("%d",&n);
	int a;
	printf("Input a list of numbers to sort: ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a);
		v.push_back(a);
	}

	sort(v.begin(),v.end());//使用迭代器

	for(int i = 0; i < n; i++)
	{
		printf("%d\n",v[i]);
	}
	string s4(5,'a');
	cout << s4 << " 's size = "<< s4.size() << endl;
	
	return 0;
}