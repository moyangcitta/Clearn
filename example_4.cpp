#include <stdio.h>
/*
���ϸ�ֵ
��+=������-+������/=������%=��
����֮�䲻���пո�
*/

/*
"++"����--��
ǰ׺��ʽ a++ ֵ��a��1��ǰ��ֵ 
��׺��ʽ ++a ֵ�Ǽ�1�Ժ��ֵ 
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
