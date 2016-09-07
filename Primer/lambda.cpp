#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>

using namespace std;

void biggies(vector<string> &words,vector<string>::size_type sz)
{
	eliDups(words);//将words字典排序并删除重复元素
	stable_sort(words.begin(),words.end(),
		[](const string &a,const string &b){
			return a.size() < b.size();
		});
	
	//获取一个迭代器，指向第一个满足size() >= sz的元素
	auto wc = find_if(words.begin(), words.end(),
		[sz](const string &a)
		{
			return a.size() >= sz;
		});
	//计算满足size >= sz的元素的数目
	auto count = words.end()- wc;
	cout << count << " " << make_plural(count,"word","s")
		<<" of length " << sz << " or longer" << endl;
	for_each(wc,words.end());
	cout << endl;
}

int main(void)
{
	//auto f = []{return 42;};
	auto func2 = [](int i) { return i+4; };
	cout << func2(4) << endl;
	return 0;
}

