#include<stdio.h> 
int main(void) {
	printf("hello everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);

	printf("my age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("good \nmorning \neverybody\n");

	//���� 1 (���ڸ� %d�� �̿�, �̸� ȫ�浿, ���� 20��, ��� �� ������ 123-456)
	printf("�̸�: ȫ�浿 \n����: %d�� \n������: 123-456\n");

	//���� 2 (���� %d�� ǥ�� 4x5 = 20, 7x9 = 63�� ���)
	printf("%d x %d = %d\n%d x %d = %d\n", 4, 5, 20, 7 ,9 ,63);

	//������ ������
	//int ������ ������ ������ �޸� ������ �Ҵ�
	//num �� �޸� ������ �̸�
	int num;
	num = 20; //���� ������ 
	printf("%d\n", num);

	//int num1, num2;
	int num3 = 30, num4 = 40;
	printf("num1 = %d, num2 = %d\n", 10, 20);

	printf("num3: %d, num4: %d\n", num3, num4);

	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("���� ���: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d�� %d�� ���� %d�Դϴ�.\n", num1, num2, result);
	
	//�پ��� ������ 
	int num5 = 9, num6 = 2;
	printf("%d+%d=%d \n", num5, num6, num5 + num6);
	printf("%d-%d=%d \n", num5, num6, num5 - num6);
	printf("%dx%d=%d \n", num5, num6, num5 * num6);
	printf("%d��%d=%d \n", num5, num6, num5 / num6);
	printf("%d��%d�� �ʹ���=%d \n", num5, num6, num5 % num6);

	//���� ���� ������ *=, /=, %=, +=, -=, <<=, >>=, &=, ^=, |=	
	int num7 = 2, num8 = 4, num9 = 6;
	num7 += 3;
	num8 *= 4;
	num9 %= 5;
	printf("result: %d, %d, %d \n", num7, num8, num9);
	
	int num10 = +2;
	int num11 = -4;

	num10 = -num10;
	printf("num10: %d\n", num10);
	num11 = -num11;
	printf("num11: %d\n", num11);

	return 0;
}

int main(void) {
	//����, ���� ������ 
	// ++num ��1 ���� �� ���� ���� ����, num++ ���� ���� ���� �� ��1 ���� 
	// --num ��1 ���� �� ���� ���� ����, num-- ���� ���� ���� �� ��1 ���� 
	
	int num1 = 12, num2 = 12;
	printf("num1: %d\n", num1);
	printf("num1++: %d\n", num1++);
	printf("num1: %d\n", num1);

	printf("num2: %d\n", num2);
	printf("num2++: %d\n", ++num2);
	printf("num2: %d\n", num2);

	int num3 = 10;
	int num4 = num3-- + 2;

	printf("num3: %d\n", num3);
	printf("num4: %d\n", num4);


	return 0;

}