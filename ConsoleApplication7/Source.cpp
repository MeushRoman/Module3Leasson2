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
		printf("1.	Ввести с клавиатуры два числа. Определить, что больше, разность квадратов или модуль квадрата разности этих чисел. Ответ вывести в виде сообщения\n");

		int a = 1 + rand() % 100, b = 1 + rand() % 100;

		if (pow(a, 2) - pow(b, 2) > abs(pow(a - b, 2))) {
			printf("разность квадратов\n");
		}
		else printf("модуль квадрата разности\n");
	}
			break;

	case 2: {
		printf("2.	Ввести с клавиатуры географическую долготу и широту места и определить, в каком полушарии оно находится (в восточном или западном).\n");

		int d, sh;

		printf("Долгота = ");
		scanf("%d", &d);

		printf("Широта = ");
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
		printf("1.	Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется 20% скидка. Ввести продолжительность разговора и день недели (цифра от 1 до 7).\n");

		int day;
		float m;

		printf("продолжительность разговора = ");
		scanf("%d", &m);

		printf("номер дня  недели (1-7)= ");
		scanf("%d", &day);


		switch (day)
		{
		case 6:	printf("Суббота! скидка 20%%\nСтоимость разговора = %.2f\n", (float)(m * 7) / 0.2);
			break;
		case 7:	printf("Воскресенье! скидка 20%%\nСтоимость разговора = %.2f\n", (float)(m * 7) / 0.2);
			break;
		default: printf("Стоимость разговора = %.2f\n", m * 7);
			break;
		}

	}
			break;
	case 4: {
		printf("2.	Вычислить стоимость покупки с учетом скидки. Скидка 5% предоставляется, если сумма покупки превышает 500 тенге и 10%, если больше 1000 тенге.\n");
		int sp1, sp2, sum;

		printf("сумма покупки 1 = ");
		scanf("%d", &sp1);

		printf("сумма покупки 1 = ");
		scanf("%d", &sp2);

		sum = sp1 + sp2;

		if (sum > 500 && sum < 1000) printf("Сумма покупки = %.2f\n", (float)sum - sum / 0.05);
		else if (sum > 1000) printf(" Сумма покупки = %.2f\n", (float)sum - sum / 0.1);
		else printf("Сумма покупки = %d\n", sum);
	}
			break;

	case 5: {
		printf("4.	Даны три числа a, b, c. Определить, имеется ли среди них хотя бы одна пара равных\n");

		int a = 1 + rand() % 10, b = 1 + rand() % 10, c = 1 + rand() % 10;

		if (a == b || b == c || a == c) printf("есть равные чила\n"); else printf("равных чисел нет\n");
	}
			break;

	case 6: {
		printf("5.	Написать программу для определения времени суток по данному текущему времени и вывести сообщение (утро – с 6 до 12, день – с 12 до 18, вечер – с 18 до 24, ночь – с 0 до 6).\n");

		int t;

		printf("Введите время суток = ");
		scanf("%d", &t);

		if (t > 24 || t < 0) {
			SetConsoleTextAttribute(hConsole, 12);
			printf("\tНеверное время суток!!!\n");
			printf("\-----------------------------------\n\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
		else {
			if (t >= 6 && t < 12) printf("Утро!\n");
			else if (t >= 12 && t < 18) printf("Дeнь!\n");
			else if (t >= 18 && t < 24) printf("Вечер!\n");
			else printf("Ночь!\n");
		}
	}
			break;
	case 7: {
		printf("1.	Дано двухзначное число. Определить:\na.входит ли в него цифра 5;\nb.входит ли в него цифра а.\n\n");

		int x = 10 + rand() % 99, a;

		printf("x = %d\n", x);

		printf("a = ");
		scanf("%d", &a);

		if ((x / 10 == 5) || (x % 10 == 5)) printf("a) Содержит число 5\n"); else printf("Не содержит число 5!\n");

		if ((x / 10 == a) || (x % 10 == a) || x == a) printf("b) Содержит число *а*\n"); else printf("Не содержит число a!\n");

	}
			break;
	case 8: {
		printf("2.	Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово *копейка* в правильной форме. Например, 1 копейка, 5 копеек, 42 копейки\n");

		int a = 1 + rand() % 99;
		printf("a = %d\n", a);

		if (a != 13)

		{
			if (a % 10 >= 2 && a % 10 <= 4) printf("%d копейки\n", a);
			else
				if (a % 10 >= 5 && a % 10 <= 9)
					printf("%d копеек!\n", a);
				else
					if (a % 10 == 1) printf("%d копейка\n", a);
		}
		else  printf("%d копеек!\n", a);
	}
			break;
	case 9:
	{
		printf("3.	Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом (читается одинаково слева направо и справа налево).\n");
	start2:

		int x;

		printf("x = ");
		scanf("%d", &x);
	
		if (x > 999 && x < 10000) 
		{
			if ((x / 1000 == x % 100) && (x / 1000 == x % 10)) printf("Палиндром!\n"); else printf("не палиндром!\n");
		}
		else
		{
			printf("x - четырехзначное число!!\n");
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