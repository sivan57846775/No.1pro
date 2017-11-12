#include<iostream.h>
float fun(float h)
{
	long x;
	x=(h*1000+5)/10;
	return(float)x/100;
}
main()
{
	float y;
	cout<<"请输入变量h:"<<endl;
	cin>>y;
	cout<<"将该数保留2位小数的结果是："<<fun(y)<<endl;
}