#include<stdio.h>//定义主函数//
int main()
{//主函数体开始//
	int max(int x,int y,int z);//对被调用函数的说明//
		int a,b,c,d;//定义变量a,b,c//
	scanf("%d,%d,%d",&a,&b,&c);//输入变量a,b,c//
	d=max(a,b,c);//调用max函数，将得到的值赋给d//
	printf("max=%d\n",d);//输出d的值//
	return 0;//返回函数值为0//
}//主函数体结束//
int max(int x,int y,int z)//定义max函数，函数值为整形，形式参数x和y和z为整形//
{
	int m;//max函数中的声明部分，定义本函数中用到的m为整形//
	if(x>y&&x>z)m=x;//若x>y且x>z成立，将x的值赋予m//
	else//否则//
		if(y>x&&y>z)m=y;//若y>x且y>z成立，将y的值赋予m//
		else m=z;//否则将z的值赋予m//
		return(m);//将m的值作为函数max的函数值，返回到调用max函数的位置
}
	