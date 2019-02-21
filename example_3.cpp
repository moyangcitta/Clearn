#include <stdio.h>

int main()
{
	/*标识符只能由字母、数字和下划线组成，数字不可以出现在第一个位置上，C语言的关键字不可以用作标识符*/
	/*auto,break,case,char,const,continue,default,do,double,else,default,do,double,else,enum,extern,float,for,goto,
	if,int,long,register,return,short,signed,sizeof,static,struct,switch,typedef,union,unsigned,void,volatile,while,inline,restrict*/ 
	
	/*有什么变量，怎样使用变量*/
	
	const int AMOUNT=100;               //const是一个修饰符，表示不变的 
	int price=0;                        //定义一个变量"price"，类型是int，初始值为0,"="是用来赋值的一种动作 
	double foot;                        //浮点数，定点数 
	double inch; 
	printf("请输入英尺、英寸：");
	scanf("%lf %lf",&foot,&inch);       //要求scanf这个函数读入下一个整数 
	float tall=(foot+inch/12.0)*0.3;    //运算符,算子 
	printf("%f",tall);
	
	return 0;
}
