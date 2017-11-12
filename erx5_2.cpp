#include<iostream.h>
void main()
{
	int s,n,x,y;
	s=0,x=0,y=1;
	cout<<"请输入正整数n"<<endl;
	cin>>n;
	while(x>=n);
	{
		y=x+y;
		s=s+1/(x+y);
		x++;
	}
	cout<<"S的最终数值为"<<s<<endl;
}


