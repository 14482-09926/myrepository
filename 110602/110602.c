#include<stdio.h>//������//
int main()//����������//
{//�������忪ʼ//
	double term=1.0,sum=1.0,deno=2.0,a=2.0;//����term,sum,deno��aΪ˫�����ͱ���//
	while(deno<=1000)/*����ĸС�ڵ���1000ʱ*/
	{
		term=a/deno;/*��ǰ�����a����deno*/
		sum=term+sum;/*��������ĺ�*/
		deno=deno*deno;/*��ĸ��ƽ��*/
		a=a+a;/*a��a*/
	}
	printf("%f\n",sum);/*���sum��ֵ*/
	return 0;/*���غ���ֵΪ0/
}
