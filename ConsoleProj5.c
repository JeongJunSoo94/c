#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���ù�
void main()
{
	int a = 0,b =0;
	/*
	if(ũ�������� ����� ����ģ���� ������)
	{
		ģ���� -> �Ұ����� �ּ����ش�.
	}
	*/
	/*
	* if (a > 10)
	{
		b = a;
	}
	printf("A:%d B:%d\n", a, b);

	scanf("%d",&a);
	if (a % 2)
	{
		printf("�Էµ� �� %d Ȧ���Դϴ�.\n", a);
	}
	if (!(a % 2))
	{
		printf("�Էµ� �� %d ¦���Դϴ�.\n", a);
	}
	*/
	/*
	if (a > 0)
	{
		b = 1;
	}
	else 
	{
		b = 2;
	}
	printf("A:%d B:%d\n", a, b);

	scanf("%d", &a);
	*/
	int chest = 95;
	char size;
	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest > 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("%c\n", size);
	/*
	* �ΰ��� ������ �Է¹޾� �� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
	* ��, ������ ū ������ ���� ���� ���� �Ѵ�.
	* if ~else ���� �̿��ؼ� �ۼ�
	* ���ǿ����ڸ� �̿��ؼ� �ۼ�
	*/
	
	/*
	scanf("%d %d", &a,&b);
	if (a > b)
	{
		printf("%d\n", a - b);
	}
	else if (b>a)
	{
		printf("%d\n", b-a);
	}
	else
	{
		printf("%d\n",0);
	}

	a >= b ? a == b ? printf("%d", 0) : printf("%d", a - b) : printf("%d", b - a);

	printf("%d", (a > b) ? (a - b) : (b - a));//���ٶ�� ������ �����ϱ� �ٷ� ���� ����ϰ� �Ͽ� �� ª�� ���� �ڵ��̴�.
	*/
	/*
	* 
	*/
	//���� ������� divide and conquer
	//
	/*
	* int rank = 2,m=0;
	switch (a=0)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("%d", m);
	*/
	/*
	* �л��� ��ü ��� ������ ���� ������ ����ϴ� ���α׷� �ۼ�.
	* ������ 90�� �̻� A,
	* ������ 80�� �̻� B,
	* ������ 70�� �̻� C,
	* ������ 60�� �̻� D,
	* �� �̸��� F�� ó��.
	* ���α׷� ����� ����, ����, ������ ������ �Է� �޴´�.
	* �� ����� ���ϰ�, ���� �����Ͽ� ������ ������ ����Ͽ���.
	*/
	/*
	* 
	int l, e, m;
	scanf("%d %d %d", &l, &e, &m);
	int average = (l+e+m)/3;
	average /= 10;
	switch (average)
	{
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
	*/


	return 0;
}