#include<stdio.h>
/*优先值
   优先级    运算符    运算    结合关系    举例
      1         +    单目不变  自右向左    a*+b
	  1         -     取负                 a*-b
	  2         *       乘     自左向右    a*b
	  2         /       除                 a/b
	  2         %       取余               a%b
	  3         +       加     自左向右    a+b
	  3         -       减                 a-b
	  4         =       赋值   自右向左    a=b*/

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	
	int t=t2-t1;
	
	printf("时间差是%d小时%d分",t/60,t%60);
	
	return 0;

}
