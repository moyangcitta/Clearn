#include <stdio.h>
/*关系运算符的优先级比算术运算的低，但是比赋值运算的高
  “==”“！=”的优先级比其他的低，连续的关系运算式从左到右运算的*/

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int ih =hour2-hour1;
	int im =minute2-minute1;
	if(im<0){                            //判断语句 
		im=60+im;
		ih--;
	}
	if(ih>=0){
		printf("时差是%dh%dm",ih,im);
	}else{
		printf("计算失败");
	}
	
	return 0;
}
