#include<iostream.h>
void main()
{
	cout<<"数列的前20项为：1,1,";
	int i,x,y,z;
	i=3,x=1,y=1,z=0;
	for(i=3;i<=20;i++)
		cout<<y-x<<",",z=y,y=y-x,x=z;
}
