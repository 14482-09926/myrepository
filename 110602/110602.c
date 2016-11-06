#include<stdio.h>//主函数//
int main()//定义主函数//
{//主函数体开始//
	double term=1.0,sum=1.0,deno=2.0,a=2.0;//定义term,sum,deno，a为双精度型变量//
	while(deno<=1000)/*当分母小于等于1000时*/
	{
		term=a/deno;/*当前项等于a除以deno*/
		sum=term+sum;/*求所有项的和*/
		deno=deno*deno;/*分母的平分*/
		a=a+a;/*a加a*/
	}
	printf("%f\n",sum);/*输出sum的值*/
	return 0;/*返回函数值为0/
}
