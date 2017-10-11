#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,q;
	printf("依次输入a,b,c(空格识别一个数)：");
	scanf("%f%f%f,",&a,&b,&c);
	s=(float)0.5*(a+b+c);
	q = (float)sqrt(s*(s-a)*(s-b)*(s-c));
	printf("面积为：%f",q);
}