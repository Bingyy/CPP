#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s("some string");
	// if(s.begin() != s.end()) //确保s非空
	// {
	// 	auto it = s.begin(); //拿到第一个迭代器
	// 	*it = toupper(*it); //解引用，让首字母大写
	// }
	// cout << s << endl; //输出首字母大写的字符串

	for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
	{
		*it = toupper(*it); //将第一个单词some每个字符均变成大写，遇到空格结束
	}
	cout << s << endl;
	return 0;
}