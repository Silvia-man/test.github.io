//24.	题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#include<stdio.h>
int main()
{
	float high=100;
	float len=100;
	for (int i=1;i<10;i++)
	{
		len+= high;
		high=high/2; 
	}
	high=high/2;
	printf("第10次落地时，共经过%f米,第10次反弹%f米\n",len,high);
	return 0;
 } 
