#include<iostream.h>
#include"stdio.h"  
  
void main()  
{  

	int x,temp;  
	cout<<"请输入一个自然数:"<<endl;  
	cin>>x;  
	temp=x;  
	while(1)  
			{  
			if(temp%2==0)  
				{  
					temp=temp/2;  
					cout<<temp*2<<"/2="<<temp<<endl;  
                  if(temp==1)  break;  
					}  
						else  
					{  
						temp=temp*3+1;  
						cout<<(temp-1)/3<<"*3+1="<<temp<<endl;  
								}  
									}  
																}

