#include<iostream.h>
void main()
{
	int x;
	cout<<"����һ������:"<<endl;
	cin>>x;
	if(x<10)
		cout<<"������С��10"<<endl;
	else
		if(x<100)
			cout<<"��������10��99֮��"<<endl;
		else
			if(x<1000)
				cout<<"��������100��999֮��"<<endl;
			else
				cout<<"��������1000����"<<endl;
}