
//-------------不创建临时变量来计算字符串长度（递归）-------------

#include <stdio.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		*str++;
//	}
//	return count;
//}

//递归的方法
//大事化小
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("");
//1+1+1+0;
//3

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//str初始指向"bit"中的b，+1后指向i
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len = %d\n", len);
	
	return 0;
}