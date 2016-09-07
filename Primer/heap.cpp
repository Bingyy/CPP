//range heap example
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int myints[] = {10,20,30,5,15}; //用于生成vector的原料
	vector<int> v(myints,myints+5);//myints是数组的首地址，等价于我们说的迭代器

	make_heap(v.begin(),v.end()); //一个大顶堆就建立好了
	cout << "initial max heap : " << v.front() << endl; //30

	pop_heap(v.begin(),v.end());
	v.pop_back();
	cout << "max heap after pop : " << v.front() << endl;//20
	cout << "back after pop : " << v.back() << endl; //5


	v.push_back(99); 
	push_heap(v.begin(),v.end()); 
	cout << "max heap after push : " << v.front() << endl;//99
	cout << "back after push : " << v.back() << endl; //15

	sort_heap(v.begin(),v.end());
	cout << "back after sort : " << v.back() << endl; // 99
	cout << "front after sort: " << v.front() << endl;//5
	cout<< "final sorted range: ";
	for(int i = 0; i < v.size(); i++)
	{
		cout << ' ' << v[i];
	}
	cout << endl;
	return 0;
}