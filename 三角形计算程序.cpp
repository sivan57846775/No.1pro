#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,q;
	printf("��������a,b,c(�ո�ʶ��һ����)��");
	scanf("%f%f%f,",&a,&b,&c);
	s=(float)0.5*(a+b+c);
	q = (float)sqrt(s*(s-a)*(s-b)*(s-c));
	printf("���Ϊ��%f",q);
}