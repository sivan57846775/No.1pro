#include<iostream.h>
#define M 10
float fun(int a[],int b[]);
void main()
{
	int a[M],b[M];
	cout<<"请输入十个整数数组为："<<endl;
	cin>>a[M];
	fun(a,b);
	cout<<"所得数组为："<<b[M]<<endl;
}
float fun(int a[],int b[])
{
	int i=0,j=9,k=0;
	for(m=0;m<=4;m++,i++,j--)
	{
		k=i;
		i=j;
		j=k;
	}
	return b[j];
}
