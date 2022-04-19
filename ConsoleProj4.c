#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//연산자
void main()
{
	double a;
	int b;
	int c;
	a = 5.0 / 2.0;
	b = 5 / 2;
	c = 5 % 2;
	printf("a: %.1lf\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);

	a = 5.0 / 2;
	printf("a: %.1lf\n", a);
	a = 5 / 2.0;
	printf("a: %.1lf\n", a);
	a = 5 / 2;
	printf("a: %.1lf\n", a);//정수끼리 해서 2.0이 나온것이다 int형이기 때문에

	int aa = 0;
	++aa; // aa=aa+1, aa+=1 aa==1
	--aa; // aa=aa-1, aa-=1 aa==0

	int bb = 0;
	//전위연산
	printf("--------------전위 \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = ++aa;
	printf("aa: %d bb: %d \n", aa, bb);
	//후위 연산
	printf("--------------후위 \n");
	printf("aa: %d bb: %d \n",aa, bb);
	bb = aa++;
	printf("aa: %d bb: %d \n", aa, bb);
	//전위연산
	printf("--------------전위 \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = --aa;
	printf("aa: %d bb: %d \n", aa, bb); 
	//후위 연산
	printf("--------------후위 \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = aa--;
	printf("aa: %d bb: %d \n", aa, bb);
	printf("-------------- \n");

	a = 10, b = 20, c = 10;
	int result;
	result = (a>b);
	printf("a > b  %d\n",result);
	result = (a >= b);
	printf("a >= b %d\n", result);
	result = (a < b);
	printf("a < b  %d\n", result);
	result = (a <= b);
	printf("a <= b %d\n", result);
	result = (a <= c);
	printf("a <= c %d\n", result);
	result = (a == b);
	printf("a == b %d\n", result);
	result = (a != c);
	printf("a != c %d\n", result);
	system("pause");
	return 0;
}