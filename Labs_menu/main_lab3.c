#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include <stdbool.h>

int fact(int num) {
	int i = 1;
	int ans = 1;

	while (i <= num) {
		ans *= i;
		i += 1;
	}
	return ans;
}
int fib() {
	int i = 0;
	int num1, num2, num3, num;
	printf("Введите N: ");
	scanf_s("%d", &num);
	i = 0;
	num1 = 0;
	num2 = 1;
	printf("0 ");
	printf("1 ");
	do {
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%d ", num3);
		i += 1;
	} while (i < num - 2);
}
bool is_prime(int num) {
	int i = 2;
	while (i < (num)) {
		if (num % i == 0) {
			return false;
		}
		i += 1;
	}
	return true;
}	  

void print1_10() {
	int a = 1;
	do {
		printf("%d", a);
		a += 1;
	} while (a <= 10);
}
void print10_1() {
	int a = 10;
	do {
		printf("%d", a);
		a -= 1;
	} while (a >= 1);
}
void print5Odds() {
	int a = 1;
	int i = 1;
	do {
		printf("%d", a);
		a += 2;
		i += 1;
	} while (i <= 5);
}
void print100_10_while() {
	int a = 100;
	while (a >= 10) {
		printf("%d", a);
		a -= 10;
	}
}
void print1000_100_while() {
	int a = 1000;
	label_while2:
	if (a >= 100) {
		printf("%d", a);
		a -= 100;
		goto label_while2;
	}
}
void print1000_0_while() {
	int N;
	int a = 1000;
	printf("Введите шаг N:\n");
	scanf_s("%d", &N);
	label_while: 
	if (a >= 0) {
		printf("%d\n", a);
		a -= N;
		goto label_while;
	}
}
void N_factorials() {
	int N;
	int i = 0;
	printf("Введите N:\n");
	scanf_s("%d", &N);

	while (i <= N) {
		printf("%d\n", fact(i));
		i += 1;
	}
}
int rasklad() {
	int i = 2, N;
	printf("Введите N:\n");
	scanf_s("%d", &N);

	while (i <= N) {
		if (is_prime(i) && (N % i == 0)) {
			while (N % i == 0) {
				printf("%d ", i);
				N /= i;
			}
		}
		i += 1;
	}
	return 0;
}

void Task1() {
	printf("Task1() START\n");
	printf("Введите N (строки) и M (столбцы) через пробел: ");
	int N, M, i = 1, j = 1;
	scanf_s("%d %d", &N, &M);
	while (i <= N) {
 		while (j <= M) {
			printf("%d%d ", i, j);
			j += 1;
		}
		printf("\n");
		i += 1;
		j = 1;
	}
	printf("Task1() FINISH");
}
void Task2() {
	printf("Task2() START\n");
	int N = 10, M = 10, i = 1, j = 1, temp;
	while (i <= N) {
		while (j <= M) {
			temp = j * i;
			printf("%2d ", temp);
			j += 1;
		}
		printf("\n");
		i += 1;
		j = 1;
	}
	printf("Task2() FINISH");
}
void Task3() {
	printf("Task3() START\n");
	int center = 5;
	while (center >= 1) {
		
		int otstyp = 0;
		while (otstyp < center) {
			printf("  ");
			otstyp += 1;
		}
		int temp = 5;
		while (temp >= center) {
			printf("%d ", temp);
			temp -= 1;
		}
		temp = center + 1;
		while (temp <= 5) {
			printf("%d ", temp);
			temp += 1;
		}

		printf("\n");
		center -= 1;
	}



	printf("Task3() FINISH");
}

void lab3_2() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;

	do {
		printf("\n");
		printf("\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Задача 1 (i * 10 + j)\n");
		printf("2: Задача 2 (Таблица Пифагора)\n");
		printf("3: Задача 3 (Рисунок по варианту)\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		scanf_s("%d", &n);

		switch (n)
		{
		case 1:
			print1_10();
			break;
		case 2:
			print10_1();
			break;
		case 3:
			print5Odds();
			break;
		}
	} while (n != 0);
}

void menu_lab3() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;

	do {
		printf("\n");
		printf("\n");
		printf("Меню лаб #3\n");
		printf("1: Вывести числа от 1 до 10\n");
		printf("2: Вывести числа от 10 до 1\n");
		printf("3: Вывести 5 первых нечетных чисел начиная с 1\n");
		printf("11: Вывести числа 100 90 80 ... 10\n");
		printf("12: Вывести числа 1000 900 800 ... 100\n");
		printf("20: Вывести числа 1000 ... 0 c шагом N\n");
		printf("21: Вывести N первых факториалов\n");
		printf("31: Вывести N первых чисел Фибоначчи\n");
		printf("32: Вывести разложение числа N на простые множители\n");
		printf("4: Лаба 3.2\n");
		printf("\n");
		printf("0: Выйти из программы\n");
		scanf_s("%d", &n);
		printf("\n");
		
		switch (n)
		{
		case 1:
			print1_10();
			break;
		case 2:
			print10_1();
			break;
		case 3:
			print5Odds();
			break;
		case 11:
			print100_10_while();
			break;
		case 12:
			print1000_100_while();
			break;
		case 20:
			print1000_0_while();
			break;
		case 21:
			N_factorials();
			break;
		case 31:
			fib();
			break;
		case 32:
			rasklad();
			break;
		case 4:
			lab3_2();
			break;
		case 0:
			break;
		default:
			printf("Введен не тот номер!\n");
		}
	} while (n != 0);
}

