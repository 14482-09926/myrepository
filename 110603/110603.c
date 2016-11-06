#include<stdio.h>//主函数//
int main()//定义主函数//
{//主函数开始//
	int score;//定义score//
	scanf("%d",&score);//输入到score//
	if(score<=100&&score>=80)/*如果成绩是小于100分且大于80分*/
	{
		printf("你的成绩优秀!\n");//则输出“你的成绩优秀”!//
	}
	else//否则//
	{
		if(score<=80&&score>=60)//如果你的成绩小于80分且大于60分//
		{
			printf("你的成绩良好!\n");//输出“你的成绩良好!”//
		}
		else//否则//
		{
			printf("你的成绩一般!\n");//输出“你的成绩一般”//
		}
	}
	return 0;//返回主函数0//
}
