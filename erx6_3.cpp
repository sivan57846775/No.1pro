#include<iostream.h>
#define M 4
#define N 4
void main()
{
	int i,j,k,sum=0;
	int a[4][4];
	cout<<"请输入矩阵的16个数字的数值"<<endl;
	for (i=0;i<4;i++)
		for(j=0;j<4;j++)
			cin>>a[M][N];
			if(M>N) 
			   a[M][N]=a[M][N]+1;
			else
			   if(M<N)
			      a[M][N]=a[M][N]-1;
			cout<<"输出的矩阵为："<<endl;
			for(i=0;i<4;i++)
			{
               for(j=0;j<4;i++)
			      cout<<a[M][N]<<"  ";break;
				  cout<<endl;
			}
}