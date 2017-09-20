#include<iostream.h>
void main()
{
	int x;
	cout<<"输入一个整数:"<<endl;
	cin>>x;
	if(x<10)
		cout<<"该整数小于10"<<endl;
	else
		if(x<100)
			cout<<"该整数在10到99之间"<<endl;
		else
			if(x<1000)
				cout<<"该整数在100至999之间"<<endl;
			else
				cout<<"该整数在1000以上"<<endl;
}