#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("int �洢��С:%lu\n",sizeof(int));//%luΪ32λ�޷������� 
	printf("float �洢����ֽ���:%d\n",sizeof(float));
	printf("float ��Сֵ:%E\n",FLT_MIN);
	printf("float ���ֵ:%E\n",FLT_MAX);//EΪ��ָ����ʽ�����˫����ʵ�� 
	printf("����ֵ:%d\n",FLT_DIG);
	
	return 0;
}
