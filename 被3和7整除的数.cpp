#include <iostream.h>
int main()
{
int n;
cin>>n;
switch(((n%3)||(n%7)||(n%21)))
{
case 0: cout<<"no\n";break;
default: cout<<"yes\n";
	}
}