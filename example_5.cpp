#include <stdio.h>
/*��ϵ����������ȼ�����������ĵͣ����Ǳȸ�ֵ����ĸ�
  ��==������=�������ȼ��������ĵͣ������Ĺ�ϵ����ʽ�����������*/

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int ih =hour2-hour1;
	int im =minute2-minute1;
	if(im<0){                            //�ж���� 
		im=60+im;
		ih--;
	}
	if(ih>=0){
		printf("ʱ����%dh%dm",ih,im);
	}else{
		printf("����ʧ��");
	}
	
	return 0;
}
