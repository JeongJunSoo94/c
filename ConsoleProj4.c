#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������
void main()
{
	/*
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
	*/
	//�������� && AND, || OR, ! NOT
	/*
	*   AND     OR    NOT
	*    0 1    0 1   0 1
	*  0 0 0  0 0 1   1 0
	*  1 0 1  1 1 1  
	*/
	/*
	* ���̸� �Է� �޾Ƽ�
	* �ش糪���� ���ɴ븦 ����϶�
	* 13
	* 13�� 10�� �Դϴ�.
	* 26
	* 26�� 20�� �Դϴ�.
	*/
	/*
	int value;
	printf("���̸� �Է� �޾Ƽ� \n�ش糪���� ���ɴ븦 ����϶�\n");
	printf("�Է� > ���̸� �Է��Ͻÿ� :");
	scanf("%d", &value);
	printf("��� > %d�� %d�� �Դϴ�.\n", value, (value/10)*10);
	*/
	/*
	* �ΰ� ������ 100�� �̶�� �����ϰ�, ��� �� ���Ǹ� �Ǹ� ������ 3�ð� 40�� ����ȴٰ� �Ѵ�.
	* � ����� ����(20��� ����)�� �� ���� N�Ⱓ �Ϸ翡 M���Ǿ� ��踦 �ǿ��ٸ� ������ �󸶳� ���� �Ǿ���, �� ����� ��� �ִ°�?
	* (ex .. N =20 , M =3 ���� ���� ����)
	* > N,M �Է¹ް�...
	* ��� > 
	*      �پ�� ���� : 00�� 00�� 00��
	*      ��� ���� : 00�� 00�� 00�� 00��
	*/
	/*
	int N, M;
	int life = 100 * 365 * 24 * 60;
	int reduced_lifeSpan = 0;
	int YY = 0, DD = 0, TT=0, MM=0;
	printf("> N,M �Է¹ް�...");
	scanf("%d %d",&N,&M);
	reduced_lifeSpan = (365 * N * M) * 220;
	MM = reduced_lifeSpan % 60;
	TT = reduced_lifeSpan / 60 % 24;
	DD = reduced_lifeSpan / 60 / 24 % 365 + reduced_lifeSpan / 60 / 24;
	printf("��� >\n �پ�� ���� : %d�� %d�� %d��\n",DD,TT,MM);
	MM = (life-reduced_lifeSpan) % 60;
	TT = (life - reduced_lifeSpan) / 60 % 24;
	DD = (life - reduced_lifeSpan) / 60 / 24 % 365;
	YY = (life - reduced_lifeSpan) / 60 / 24 / 365;
	printf("��� ���� : %d�� %d�� %d�� %d�� ", YY,DD,TT,MM);
	*/
	/*
	int a=20,b =3;
	double res;
	res = ((double)a / (double)b);//res = (double)(a / b);//�̸� �������� ������ ������ ����� ����
	printf("a = %d,b = %d\n",a,b);
	printf("a/b %.1lf ��� : \n",res);
	a = (int)res;
	printf("(int)%.1lf�� ���: %d\n", res,a);
	*/
	//int a = 10, b = 20;
	//int res = 2;
	/*
	a += 20;
	res *= b + 10;
	*/
	/*
	res = 0;
	res = (++a, ++b);
	*/
	//res = (a > b) ? a : b;

	/*
	* ����ڷκ��� ���� 3���� �Է¹޾� �����ϰ�
	* ���ǿ����ڸ� ����Ͽ� �̵� ������ ���� ū ���� ����ϴ� ���α׷��� �ۼ��϶�.
	*/
	/*
	 int a, b, c;
	scanf("%d %d %d", &a, &b,&c);
	printf("���� ū ��: %d", a > b ? a > c ? a : c : b > c ? b : c);
	*/
	
	int a = 10;
	int b = 12;
	
	printf("a&b:%d\n", a& b);
	printf("a^b:%d\n", a^ b);
	printf("a|b:%d\n", a| b);
	printf("~a:%d\n", ~a);
	printf("a<<1:%d\n", a<<1);
	printf("a>>2:%d\n", a >> 2);

	//��Ʈ�������� ������ Ȯ�ΰ���
	//flag = 0101 0001
	//b&flag ? 1:0
	system("pause");
	return 0;
}