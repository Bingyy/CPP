#include<iostream>
#include<map>
#include<string>
#include<set>

using namespace std;
int main(void)
{
	map<string,size_t> word_count;//size_t是整数型
	set<string> exclude = {"The","But","And","Or","A",
							"the","but","and","or","a"};

	string word;
	while(cin >> word && word != "q")
	{
		if(exclude.find(word) == exclude.end())//find定位数据的迭代器，找不到就返回end()这个迭代器
		{
			++word_count[word];//提取word的计数器并将其加1
		}
		
	}
	for(const auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second 
			<< ((w.second > 1) ? " times ": " time") << endl;
	}
	return 0;
}