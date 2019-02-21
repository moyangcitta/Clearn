#include<stdio.h>
/*循环体内要有改变条件的机会*/

int main()
{
	int x;
	int n=0;
	
	scanf("%d",&x);
	do{
		++n;
		x/=10;
	}while(x>0);
	printf("%d\n",n);
	
	/*tips for loops
	如果有固定次数，用for
	如果必须执行一次，用do_while
	其他情况用while*/
	int fact;
	printf("阶乘为:");
	int i=1;
	//求和时，初始变量为0   
	for(i=1;i<=n;i++){   //初始条件，循环继续的条件 ,循环结束后i++  for(;条件;)==while(条件)
		fact*=i;
	}
	printf("%d\n",n,fact);
	
	return 0;
}
