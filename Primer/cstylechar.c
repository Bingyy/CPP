#include<stdio.h>
int main(int argc, char const *argv[])
{
	char ca[] = {'a','b','c'};
	printf("%c\n",ca[0] );
	printf("%d\n", strlen(ca)); // 编译通过但是运行出错，测试输出的是9，那么是指针往后寻找到'\0'结束
	return 0;
}