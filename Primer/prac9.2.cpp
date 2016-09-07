#include<iostream>
#include<string>
#include<list>
#include<deque>

using namespace std;

//定义一个list对象，其元素类型是deque
int main(void)
{
	list<deque<int> > foo;
	deque<int> d = {1,2,3,4};
	foo.push_back(d);
	return 0;
}