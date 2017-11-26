#include<iostream.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a[10]="Hello",b[10]="WORLD!";
	int i;
	for(i=strlen(a)+1;i<20;i++)
		a[i]=b[i-strlen(a)];
	for(i=0;i<20;i++)
		cout<<a[i]<<endl;
}
