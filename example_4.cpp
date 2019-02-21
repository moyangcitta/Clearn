#include <stdio.h>
/*
复合赋值
“+=”、“-+”、“/=”、“%=”
符号之间不能有空格
*/

/*
"++"、“--”
前缀形式 a++ 值是a加1以前的值 
后缀形式 ++a 值是加1以后的值 
*/ 

int main()
{
	int a=2;
	int b=4;
	int t;
	
	t=a;
	a=b;
	b=t;
	
	printf("%d %d\n",a,b);
	
	printf("a++=%d\n",a++);
	printf("a=%d\n",a);
	
	printf("++a=%d\n",++a);
	printf("a=%d\n",a);
	
	return 0;
 } 
