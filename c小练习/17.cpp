//17.	题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
#include<stdio.h>
int main()
{
	int g=0;
	printf("该生成绩为：");
	scanf("%d",&g); 
	if (g<60)
		printf("等级为C"); 
		else if (g<90)
			printf("等级为B"); 
				else
					printf("等级为A"); 
	return 0;
}
