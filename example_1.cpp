#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("int 存储大小:%lu\n",sizeof(int));//%lu为32位无符号整数 
	printf("float 存储最大字节数:%d\n",sizeof(float));
	printf("float 最小值:%E\n",FLT_MIN);
	printf("float 最大值:%E\n",FLT_MAX);//E为以指数形式输出单双精度实数 
	printf("精度值:%d\n",FLT_DIG);
	
	return 0;
}
