#include<stdio.h>//����������//
int main()
{//�������忪ʼ//
	int max(int x,int y,int z);//�Ա����ú�����˵��//
		int a,b,c,d;//�������a,b,c//
	scanf("%d,%d,%d",&a,&b,&c);//�������a,b,c//
	d=max(a,b,c);//����max���������õ���ֵ����d//
	printf("max=%d\n",d);//���d��ֵ//
	return 0;//���غ���ֵΪ0//
}//�����������//
int max(int x,int y,int z)//����max����������ֵΪ���Σ���ʽ����x��y��zΪ����//
{
	int m;//max�����е��������֣����屾�������õ���mΪ����//
	if(x>y&&x>z)m=x;//��x>y��x>z��������x��ֵ����m//
	else//����//
		if(y>x&&y>z)m=y;//��y>x��y>z��������y��ֵ����m//
		else m=z;//����z��ֵ����m//
		return(m);//��m��ֵ��Ϊ����max�ĺ���ֵ�����ص�����max������λ��
}
	