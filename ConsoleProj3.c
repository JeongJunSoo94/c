#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*
* int main(void)
* {
*	return 0;
* }
*/
//������ ������
void main()
{
	//�ڷ��� ����
	//int , double , float , char , char[]
	
	//������ ����
	int i,j,k;//�ַ� ����ϴ� ������

	//int a;//���� ��
	//������ ������ ���� �ʱ�ȭ �ȵ� �ֱ� ������ �ʱ�ȭ ������Ѵ�.
	//a = 10;//�� �־��ֱ�

	//int a = 0; �����ϸ鼭 �־��ֱ�

	int a=0,b, c;
	double dA;//�տ� �ڷ���+���������� dA�������� �����.
	char cA;
	int nStudentNumber;//n_Student_Number �������� _�� ����ؼ� ���� ���� �Ҽ��� ����
	//���� ǥ��� 1.�밡���� 2.ī�� 3. �Ľ�Į ����� ǥ����� ���� �ϳ� ��� ����������� �ڵ��Ѵ�.

	a = 10;
	b = a;
	c = a + 20;
	dA = 3.5;//3.5f�� ����ϸ� float������ �޴°Ű� �Ⱥ��̸� double�� ���� �޴´�
	cA = 'A';

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%lf\n", dA);//%lf�� ����� longfloat�� �����̴� float�� %f�� ����ص� �ȴ�
	printf("%c\n", cA);
	
	//LValue, RValue: LValue�� ���Ӽ��� ������ ���̴�. RValue�� �ѹ� ����ϰ� ������ ���̴�.
	//a �� ���� ������ RValue �� �� �� �ִ�.

	//�ƽ�Ű �ڵ� 'A' = 65, 'a' = 97

	//�ڷ��� ũ��
	/*�ڷ��           byte                             ����
	* char              1                           -128 ~ 127
	* unsigned char     1                             0  ~ 255
	* short             2                        -32,768 ~ 32767
	* unsigned short    2                             0  ~ 65,535
	* int               4                 -2,147,483,648 ~ 2,147,483,647
	* unsigned int      4                             0  ~ 4,294,967,295
	* long              4                 -2,147,483,648 ~ 2,147,483,647
	* unsigned long     4                             0  ~ 4,294,967,295
	* longlong          8     -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
	* unsigned longlong 8                             0  ~ 18,446,744,073,709,551,615
	* float             4                   1.175494e-38 ~ 3.402823e+38
	* double            8                  2.225074e-308 ~ 1.797693e+308
	* longdouble        8                  2.225074e-308 ~ 1.797693e+308
	*/

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("%d\n", sh);
	printf("%d\n", in);
	printf("%ld\n", ln);
	printf("%lld\n", lln);//%d�� ���� �÷��� �޾ƾ� ���� ���� �������ִ�. �׷��� long�� l�� �޴°��̴�. %lld

	printf("short %d\n", sizeof(sh));
	printf("int   %d\n", sizeof(in));

	//unsigned�� ����� ����ؾ� �� �� ����Ѵ�
	unsigned int uA =1;
	printf("%u\n", uA);

	float fA = 1.234567890123456789;//��ȿ���� 7�ڸ�����
	double dB = 1.234567890123456789;//��ȿ���� 15�ڸ�����
	printf("%.20f\n", fA);
	printf("%.20lf\n", dB);

	char fruit[20] = "Apple";//[���ڿ����� + 1] �ʱ�ȭ�ؼ� ����ؾ���
	//'A','p','p','l','e','\0'
	fruit[0] = "strawberry";
	//�̷��� �ٽ� ���� �ִ°��� �Ҽ����� �ֳ��ϸ� fruit[0]�� �ϳ��� char���ε� �ִ� ���� string���̴� �׷��� ������ �˼����� ���� ���°��̴�
	//���� ���� �ְ� ������ char�� ������ �����ϴ�

	printf("%s %s \n", fruit, "Jam");

	fruit[0] = 's';
	fruit[1] = 't';
	fruit[2] = 'r';
	fruit[3] = 'a';
	fruit[4] = 'w';
	fruit[5] = 'b';
	fruit[6] = 'e';
	fruit[7] = 'r';
	fruit[8] = 'r';
	fruit[9] = 'y';

	printf("%s %s \n", fruit, "Jam");

	strcpy(fruit, "PineApple");//��������� �־���Ѵ�. string�Լ��� ����ϸ� ���� �ٲܼ� �ִ�.//string.h�� ��� strcpy���ǳ� �����̴�.

	printf("%s %s \n", fruit, "Jam");

	const double tax_rate = 0.12;//����� ���ÿ� �ʱ�ȭ ������Ѵ�
	//tax_rate = 0.5; ���ó�� �߱⶧���� ���� ������ �Ұ����ϴ�.

	const double PI = 3.14;
	double radius = 5;
	double circle_len = 0.0;
	circle_len = 2 * PI * radius;

	/*��� �Ұ����� ������
	* int main; ����� �̱⶧���� main ��� �Ұ���
	* 3���ڷν���
	* -�����»�� 
	* ~ƿ����
	*  ��ĭ
	* �����
	*/
	int aa = 0;
	double bb = 0;
	printf("���� �Է�:");
	scanf("%d%lf", &aa, &bb);//�Է°��� �ΰ� ������ �����̽���, ����, ���� ����ؼ� �Է��� �Ҽ��ִ�.
	printf("�Էµ� �� : %d %lf\n", aa, bb);
	
	char grade;
	char name[20];
	printf("�����Է� :");
	scanf("%c", &grade);

	printf("�̸��Է� :");
	scanf("%s", name);
	printf("�����Է� : %c �̸��Է� : %s\n", grade, name);

	return 0;
}