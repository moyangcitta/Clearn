#include <stdio.h>

int main()
{
	/*��ʶ��ֻ������ĸ�����ֺ��»�����ɣ����ֲ����Գ����ڵ�һ��λ���ϣ�C���ԵĹؼ��ֲ�����������ʶ��*/
	/*auto,break,case,char,const,continue,default,do,double,else,default,do,double,else,enum,extern,float,for,goto,
	if,int,long,register,return,short,signed,sizeof,static,struct,switch,typedef,union,unsigned,void,volatile,while,inline,restrict*/ 
	
	/*��ʲô����������ʹ�ñ���*/
	
	const int AMOUNT=100;               //const��һ�����η�����ʾ����� 
	int price=0;                        //����һ������"price"��������int����ʼֵΪ0,"="��������ֵ��һ�ֶ��� 
	double foot;                        //�������������� 
	double inch; 
	printf("������Ӣ�ߡ�Ӣ�磺");
	scanf("%lf %lf",&foot,&inch);       //Ҫ��scanf�������������һ������ 
	float tall=(foot+inch/12.0)*0.3;    //�����,���� 
	printf("%f",tall);
	
	return 0;
}
