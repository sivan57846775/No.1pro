#include<iostream.h>
#define M 10
float fun(int a[],int b[]);
void main()
{
	int a[M],b[M];
	cout<<"������ʮ���������飺"<<endl;
	cin>>a[M];
	fun(a,b);
	cout<<"���յõ�����������Ϊ��"<<endl;
	fun(a,b);
}
float fun(int a[],int b[])
{
	int i,j,max=0,min=0;
	for(i=1;i<=9;i++)
	{
		if(a[i]<a[min])
		{
			min=i;
		}
		if(a[i]>a[max])
		{
			max=i;
		}
	}
	for(j=0,i=0;i<=9;i++)
	{
		{
			if(i==max)
				b[j]=a[min];
			else
				if(i==min)
					b[j]=a[max];
				else
					b[j]=a[i];
		}
		cout<<b[j];
	}
	return b[j];
}
