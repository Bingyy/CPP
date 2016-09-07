#include<iostream>
#include<map>
using namespace std;
int main(void)
{
	map<string,size_t> word_count;//size_t是整数型
	string word;
	while(cin >> word && word != "q")
	{
		++word_count[word];//提取word的计数器并将其加1
	}
	for(const auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second 
			<< ((w.second > 1) ? " times ": " time") << endl;
	}
	return 0;
}