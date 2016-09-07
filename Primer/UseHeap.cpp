#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

void PrintVector(vector<int> &vet)
{
	for(auto pos = vet.begin(); pos != vet.end(); pos++)
	{
		cout << *pos << " ";
	}
	cout << endl;
}

int main()
{
	const int MAXN = 20;
	int a[MAXN];
	int i;
	for(i = 0; i < MAXN; i++)
	{
		a[i] = rand() & (MAXN * 3);
	}
	//动态申请vector并堆vector建堆
	vector<int> *pvet = new vector<int>(40);
	pvet->assign(a,a+MAXN);//用数组a的值填充

	PrintVector(*pvet);//建成堆后，输出的数据是按照堆序的

	// 建堆
	make_heap(pvet->begin(), pvet->end());//在vector之上建堆，对vector是改造性的
	PrintVector(*pvet);

	//加入新数据：现在容器中加入，然后再调用push_heap
	pvet->push_back(25);
	push_heap(pvet->begin(),pvet->end());
	PrintVector(*pvet);

	// 删除数据：先调用pop_heap(),再在容器中删除
	pop_heap(pvet->begin(),pvet->end());
	pvet->pop_back();

	pop_heap(pvet->begin(),pvet->end());
	pvet->pop_back();

	PrintVector(*pvet);

	//堆排序:大顶堆对应的是递增排序
	sort_heap(pvet->begin(), pvet->end());
	PrintVector(*pvet);

	delete pvet;

	//总结：无论是对堆的哪种操作，为了体现它是寄生在容器上的，每次的参数都是容器的首尾迭代器（指针）



	return 0;

}