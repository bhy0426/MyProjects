#include <stdio.h>

int main(void)
{
	// ++ 뿔뿔
	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a); */
	//int b = 20;
	//// b = b + 1;
	//printf("b 는 %d\n", ++b);
	//printf("b 는 %d\n", b++);
	//printf("b 는 %d\n", b);

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	// 반복문
	// for, while, do while

	//for (선언; 조건; 증감) { }
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/
	
	//while (조건) { }
	//int i = 1;
	//while (i<=10)
	//{
	//	printf("Hello World %d\n", i++);
	//	// i++;
	//}

	// do { } while (조건) ;
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/

	// 2중 반복문
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("첫 번째 반복문 : %d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("  두 번째 반복문 : %d\n", j);
	//	}
	//}
	

	// 하연 연습 (for, while, do while);
	//for (int i = 2; i <= 9; i++)
	//{
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");

	//}
	//int i = 2;
	//while (i <= 9)
	//{
	//	int j = 1;
	//	while (j <= 9)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//		j++;
	//	}
	//	i++;
	//}
	//int i = 2;
	//do {
	//	int j = 1;
	//	do {
	//		printf("%d x %d = %d\n", i, j, i * j);
	//		j++;
	//	} while (j <= 9);
	//	i++;
	//} while (i <= 9);

	return 0;
}