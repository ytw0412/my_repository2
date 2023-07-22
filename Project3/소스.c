//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 100, num2 = 100;
//	int* pnum;
//
//	pnum = &num1;
//	(*pnum) += 30;
//
//	pnum = &num2;
//	(*pnum) -= 30;
//
//	printf("num1:%d,num2:%d \n", num1, num2);
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int num = 10;
//	int* ptr1 = &num;
//	int* ptr2 = ptr1;
//
//	(*ptr1)++;
//	(*ptr2)++;
//	printf("%d \n", num);
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr2 = &num1;
	ptr1 = &num2;

	printf("")
}