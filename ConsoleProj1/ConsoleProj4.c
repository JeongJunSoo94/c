#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������
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
	printf("a: %.1lf\n", a);//�������� �ؼ� 2.0�� ���°��̴� int���̱� ������

	int aa = 0;
	++aa; // aa=aa+1, aa+=1 aa==1
	--aa; // aa=aa-1, aa-=1 aa==0

	int bb = 0;
	//��������
	printf("--------------���� \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = ++aa;
	printf("aa: %d bb: %d \n", aa, bb);
	//���� ����
	printf("--------------���� \n");
	printf("aa: %d bb: %d \n",aa, bb);
	bb = aa++;
	printf("aa: %d bb: %d \n", aa, bb);
	//��������
	printf("--------------���� \n");
	printf("aa: %d bb: %d \n", aa, bb);
	bb = --aa;
	printf("aa: %d bb: %d \n", aa, bb); 
	//���� ����
	printf("--------------���� \n");
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