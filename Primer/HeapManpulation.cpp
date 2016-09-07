//插入数据时新的数据堆的调整代码
//新结点往上走，向下拖父亲下马，插入的结点要上位与父亲比较
void MinHeapFixup(int a[],int i)
{
	// 小顶堆
	int j, temp;
	temp = a[i]; //当前新插入结点
	j = (i-1)/2; //父结点
	while(j >= 0 && i != 0)
	{
		if(a[j] <= temp) //把较大的结点往下移动
			break;
		a[i] = a[j];
		i = j;
		j = (i-1)/2;
	}
	a[i] = temp; //新插入的数据最终放在i这个位置，i是找到的合适的位置
}

// 在小顶堆中加入新的数据
void MinHeapAddNumber(int a[],int n, int nNum)
{
	a[n] = nNum;
	MinHeapFixup(a,n);//重点是理解并实现堆的调整算法
}

// 堆的删除，这个过程，我们称之为老皇帝驾崩，最苦的百姓（最末尾的那个）为钦差，选择合适的人选，自己若是最牛也可以当选的过程
//从i结点开始计算，n为结点总数
//从0开始计算，i结点的子结点是2*i+1,2*i+2
void MinHeapFixdown(int a[],int i,int n)
{
	int j,temp;
	temp = a[i];
	j = 2 * i + 1;
	while(j < n)
	{
		if(j+1 < n && a[j+1] < a[j]) //在左右孩子中找到最小的
		{
			j++;
		}
		if(a[j] >= temp)
			break;
		a[i] = a[j]; //把较小的子结点往上移动，替换父结点
		i = j;
		j = 2 * i + 1;
	}
	a[i] = temp;
}

// 在最小堆中删除数
void MinHeapDeleteNumber(int a[],int n)
{
	Swap(a[0],a[n-1]);
	MinHeapFixdown(a,0,n-1); //从根结点开始调整
}
//写一个很酷的交换算法
void Swap(int &a, int &b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}