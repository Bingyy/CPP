#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;
int main(void)
{
	vector<string> words;
	string word;
	while(cin >> word && word != "q")
	{
		//读入的时候就针对每一个词进行大写转变
		for(auto &c : word)
		{
			c = toupper(c);
		}
		words.push_back(word);
	}

	for(auto word : words)
	{
		cout << word << endl;
	}

	return 0;
}