#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ݺ���
void main()
{
	/*
	int a = 1;
	while (a< 10)
	{
		a = a * 2;
	}
	printf("a:%d", a);

	while (1)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d",&a);
		if (a <= 0)
			break;
		if (a % 2)
			printf("Ȧ��\n");
		else
			printf("¦��\n");
	}
	*/
	/*
	int a = 1;
	for (int i = 0; i < 3; i++)
	{
		printf("i: %d \n", i);
	}
	for (int i = 0; i < 3; i++)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);
	*/
	/*
	* � �ڿ����� �Է¹޾� ���丮���� ���ϴ� ���α׷��� �ۼ��϶�
	*/
	
	/*
	* int factorial = 1;
	scanf("%d", &a);
	for (int i = a; i > 0; i--)
	{
		if (i == a)
		{
			printf("%d", i);
		}
		else
		{
			printf(" * %d", i);
		}
		factorial *= i;
	}
	printf("\nfactorial : %d\n", factorial);
	* factorial = 1;
	for (int i = 1; i <= a; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" * %d", i);
		}
		factorial *= i;
	}

	printf("\nfactorial : %d\n", factorial);
	* 
	*/
	/*
	* �� ���� �Է¹޾� �� �� ���̿� �����ϴ� ������ ���� ���ϴ� ���α׷��� �ۼ��϶�.
	*/
	
	/*
	int a, b;
	int sum=0;
	scanf("%d %d", &a ,&b);
	
	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			sum += i;
		}
		printf("%d\n", sum);
	}
	else
	{
		for (int i = a; i <= b; i++)
		{
			sum += i;
		}
		printf("%d\n", sum);
	}

	sum = 0;
	if (a > b)
	{
		while (a != b)
		{
			sum += b++;
		}
		sum += a;
		printf("%d\n", sum);
	}
	else
	{
		while (a != b)
		{
			sum += a++;
		}
		sum += b;
		printf("%d\n", sum);
	}
	
	*/
	/*
	* ����ڷκ��� ���� ���� m�� n�� �Է¹޾� n�� ��ŭ m�� ����� ����ϴ� ���α׷��� �ۼ�
	* ex> 3 4
	* => 3 6 9 12
	*/

	/*
	* int m, n;
	scanf("%d %d", &m, &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ",m * i);
	}
	*/
	//Ȯ�ι���
	
	/*
	int a = 0;
	do
	{
		printf("��:%d\n", a);
		printf("��:%d\n", a);
		scanf("%d", &a);
	} while (a<0);
	printf("����:%d\n", a);

	for (int i = 0; i < 5; i++)
	{
		printf("Be happy\n");
	}
	*/
	/*
	* ����ڷκ��� ��� ������ �Է¹޾� �� ���� ��� ���� ������.
	* ����ڰ� 0�� �Է� �Ҷ����� ��� �Ǿ�� �ϸ� , 0�� �ԷµǸ� 
	* �Էµ� ��� ������ ���� ����Ѵ�.
	*/
	
	/*
	* int a = 1;
	int sum = 0;
	while (a)
	{
		printf("�� �Ұ� �Է�: \n");
		scanf("%d", &a);
		printf("���ϴ���: %d\n", sum+=a);
	}
	printf("��� ������ ��: %d\n", sum);
	*/
	/*
	for (int i = 2; i < 9; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				printf("%d * %d = %d\n",i, j, i * j);
			}
		}
	*/
	/*
	* 1 �̻� 100 �̸��� ���� m �� n�� ����� ����ϴ� ���α׷��� �ۼ��϶�.
	* ��, m�� ��� �̸鼭 n�� ����� ������ �ѹ��� ����ؾ� �Ѵ�.
	*/
	
	/*
	* int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 1; i < 100; i++)
	{
		if ((i % m)==0||(i%n)==0)
		{
			printf("%d ",i);
		}
	}
	*/
	
	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------\n");
	for (int i = 5; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("------\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-i; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	printf("------\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 5 - 1; j > i; j--) {
			printf(" ");
		}

		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("------\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = 2 * 5 - 1; j > 2 * i; j--) {
			printf("*");
		}
		printf("\n");
	}
	//������ n�� �Է� �޾Ƽ� ������ ���� ���·� ���
	int a = 0;
	scanf("%d",&a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = a; i > 0; i--)
	{
		for (int j = i-1; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <=a-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = a; i > 0; i--)
	{
		for (int j = 0; j <= a-i; j++)
		{
			printf("*");
		}
		for (int j = i*2 - 1; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <= a - i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}