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
	cout<<"���������h:"<<endl;
	cin>>y;
	cout<<"����������2λС���Ľ���ǣ�"<<fun(y)<<endl;
}