#include<iostream.h>
int main()
{
	int x,y,m,n,min,max,a[10];
	for(x=0;x<10;x++)
	cout<<"请输入一组数据："<<endl;
	cin>>a[x];
	max=a[0];
	min=a[0];
	for(x=1;x<10;x++)
	{
		if(a[x]>max)
			max=a[x],m=x;
		if(a[x]<min)
			min=a[x],n=x;
	}
	y=a[m];
	a[m]=a[n];
	a[n]=y;
	for(x=0;x<10;x++)
	{
		cout<<a[x];
		if(x<9)cout<<"  ";
	}
	return 0;
}