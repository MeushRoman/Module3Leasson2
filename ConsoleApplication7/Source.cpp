#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <iostream>
#include <Windows.h>

void main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "rus");
	SetConsoleTextAttribute(hConsole, 15);
	srand(time(NULL));

start:

	int n = 0;

	printf("n = ");
	scanf("%d", &n);

	switch (n)
	{
	case 1: {
		printf("1.	������ � ���������� ��� �����. ����������, ��� ������, �������� ��������� ��� ������ �������� �������� ���� �����. ����� ������� � ���� ���������\n");

		int a = 1 + rand() % 100, b = 1 + rand() % 100;

		if (pow(a, 2) - pow(b, 2) > abs(pow(a - b, 2))) {
			printf("�������� ���������\n");
		}
		else printf("������ �������� ��������\n");
	}
			break;

	case 2: {
		printf("2.	������ � ���������� �������������� ������� � ������ ����� � ����������, � ����� ��������� ��� ��������� (� ��������� ��� ��������).\n");

		int d, sh;

		printf("������� = ");
		scanf("%d", &d);

		printf("������ = ");
		scanf("%d", &sh);

		if (d > 0 && sh > 0)
		{
			SetConsoleTextAttribute(hConsole, 20);
			printf("N");
			SetConsoleTextAttribute(hConsole, 9);
			printf("E\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		else if (d > 0 && sh < 0)
		{
			SetConsoleTextAttribute(hConsole, 9);
			printf("S");
			SetConsoleTextAttribute(hConsole, 12);
			printf("E\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		else if (d < 0 && sh > 0)
		{
			SetConsoleTextAttribute(hConsole, 9);
			printf("N");
			SetConsoleTextAttribute(hConsole, 12);
			printf("W\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 20);
			printf("S");
			SetConsoleTextAttribute(hConsole, 12);
			printf("W\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
	}
			break;
	case 3: {
		printf("1.	�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20% ������. ������ ����������������� ��������� � ���� ������ (����� �� 1 �� 7).\n");

		int day;
		float m;

		printf("����������������� ��������� = ");
		scanf("%d", &m);

		printf("����� ���  ������ (1-7)= ");
		scanf("%d", &day);


		switch (day)
		{
		case 6:	printf("�������! ������ 20%%\n��������� ��������� = %.2f\n", (float)(m * 7) / 0.2);
			break;
		case 7:	printf("�����������! ������ 20%%\n��������� ��������� = %.2f\n", (float)(m * 7) / 0.2);
			break;
		default: printf("��������� ��������� = %.2f\n", m * 7);
			break;
		}

	}
			break;
	case 4: {
		printf("2.	��������� ��������� ������� � ������ ������. ������ 5% ���������������, ���� ����� ������� ��������� 500 ����� � 10%, ���� ������ 1000 �����.\n");
		int sp1, sp2, sum;

		printf("����� ������� 1 = ");
		scanf("%d", &sp1);

		printf("����� ������� 1 = ");
		scanf("%d", &sp2);

		sum = sp1 + sp2;

		if (sum > 500 && sum < 1000) printf("����� ������� = %.2f\n", (float)sum - sum / 0.05);
		else if (sum > 1000) printf(" ����� ������� = %.2f\n", (float)sum - sum / 0.1);
		else printf("����� ������� = %d\n", sum);
	}
			break;

	case 5: {
		printf("4.	���� ��� ����� a, b, c. ����������, ������� �� ����� ��� ���� �� ���� ���� ������\n");

		int a = 1 + rand() % 10, b = 1 + rand() % 10, c = 1 + rand() % 10;

		if (a == b || b == c || a == c) printf("���� ������ ����\n"); else printf("������ ����� ���\n");
	}
			break;

	case 6: {
		printf("5.	�������� ��������� ��� ����������� ������� ����� �� ������� �������� ������� � ������� ��������� (���� � � 6 �� 12, ���� � � 12 �� 18, ����� � � 18 �� 24, ���� � � 0 �� 6).\n");

		int t;

		printf("������� ����� ����� = ");
		scanf("%d", &t);

		if (t > 24 || t < 0) {
			SetConsoleTextAttribute(hConsole, 12);
			printf("\t�������� ����� �����!!!\n");
			printf("\-----------------------------------\n\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		else {
			if (t >= 6 && t < 12) printf("����!\n");
			else if (t >= 12 && t < 18) printf("�e��!\n");
			else if (t >= 18 && t < 24) printf("�����!\n");
			else printf("����!\n");
		}
	}
			break;
	case 7: {
		printf("1.	���� ����������� �����. ����������:\na.������ �� � ���� ����� 5;\nb.������ �� � ���� ����� �.\n\n");

		int x = 10 + rand() % 99, a;

		printf("x = %d\n", x);

		printf("a = ");
		scanf("%d", &a);

		if ((x / 10 == 5) || (x % 10 == 5)) printf("a) �������� ����� 5\n"); else printf("�� �������� ����� 5!\n");

		if ((x / 10 == a) || (x % 10 == a) || x == a) printf("b) �������� ����� *�*\n"); else printf("�� �������� ����� a!\n");

	}
			break;
	case 8: {
		printf("2.	�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 99 ��������� � ���� ����� *�������* � ���������� �����. ��������, 1 �������, 5 ������, 42 �������\n");

		int a = 1 + rand() % 99;
		printf("a = %d\n", a);

		if (a != 13)

		{
			if (a % 10 >= 2 && a % 10 <= 4) printf("%d �������\n", a);
			else
				if (a % 10 >= 5 && a % 10 <= 9)
					printf("%d ������!\n", a);
				else
					if (a % 10 == 1) printf("%d �������\n", a);
		}
		else  printf("%d ������!\n", a);
	}
			break;
	case 9:
	{
		printf("3.	���� ����������� �������������� �����. ��������, �������� �� ��� ����������� (�������� ��������� ����� ������� � ������ ������).\n");
	start2:
		int x;
		printf("x = ");
		scanf("%d", &x);
	
		if (x > 999 && x < 10000) 
		{
			if ((x / 1000 == x % 100) && (x / 1000 == x % 10)) printf("���������!\n"); else printf("�� ���������!\n");
		}
		else
		{
			printf("x - �������������� �����!!\n");
			goto start2;
		}
	}
			break;
	default:
		printf("n = 1 - 12\n");
		break;

	}
	goto start;

}