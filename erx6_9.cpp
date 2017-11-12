#include<iostream.h>
#include<iomanip.h>
int a[50];
int fun(int m)
{
	int n=0;
	for(int i=1;i<=m;i++)
	{
		if(i%7==0||i%11==0)
		{
			a[n]=i;
			n++;
		}
	}
	return n;
}
main()
{
	int m,x;
	x=0;
	cout<<"请输入m的数值"<<endl;
	cin>>m;
	for(int i=0;i<fun(m);i++)
	{
		x++;
	}
	cout<<"符合的数的个数为"<<x<<"个"<<endl;
}
