#include<stdio.h>
/*ѭ������Ҫ�иı������Ļ���*/

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
	����й̶���������for
	�������ִ��һ�Σ���do_while
	���������while*/
	int fact;
	printf("�׳�Ϊ:");
	int i=1;
	//���ʱ����ʼ����Ϊ0   
	for(i=1;i<=n;i++){   //��ʼ������ѭ������������ ,ѭ��������i++  for(;����;)==while(����)
		fact*=i;
	}
	printf("%d\n",n,fact);
	
	return 0;
}
