#include<stdio.h>
/*����ֵ
   ���ȼ�    �����    ����    ��Ϲ�ϵ    ����
      1         +    ��Ŀ����  ��������    a*+b
	  1         -     ȡ��                 a*-b
	  2         *       ��     ��������    a*b
	  2         /       ��                 a/b
	  2         %       ȡ��               a%b
	  3         +       ��     ��������    a+b
	  3         -       ��                 a-b
	  4         =       ��ֵ   ��������    a=b*/

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	
	int t=t2-t1;
	
	printf("ʱ�����%dСʱ%d��",t/60,t%60);
	
	return 0;

}
