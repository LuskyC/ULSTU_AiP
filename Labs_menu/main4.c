#include <stdio.h>
#include <Windows.h>
#include <math.h>
#define PI 3.1415
#define AREA_CIRCLE(R) ((PI) * ((R)*(R)))
#define PER_MILES_TO_KM(N) ((N) * (1.609344))
#define PER_BITES_TO_BIT(N) ((N) * (8))

int sumDigits(int num) {
	int sum = 0;
	while (num > 0) {
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}
int isPrime(int num) {
	int i = 2;
	while (i <= sqrt(num)) {
		if (num % i == 0)
			return 0;
		if (num % (num / i) == 0)
			return 0;
		i += 1;
	}
	return 1;
}
int isLeapYear(int year) {
	if (year % 400 == 0)
		return 1;
	if (year % 100 == 0)
		return 0;
	if (year % 4 == 0)
		return 1;
	return 0;
}
void lab4_1_1() {
	int a, b;
	printf("Введите начало интервала:\n");
	scanf_s("%d", &a);
	printf("Введите конец интервала:\n");
	scanf_s("%d", &b);

	int num = a;
	do {
		if (isLeapYear(num))
			printf("%d ", num);
		num += 1;
	} while (num <= b);
	printf("\n");
}
void lab4_1_2() {
	int a, b;
	printf("Введите начало интервала:\n");
	scanf_s("%d", &a);
	printf("Введите конец интервала:\n");
	scanf_s("%d", &b);

	int num = a;
	do {
		if (isPrime(num))
			printf("%d ", num);
		num += 1;
	} while (num <= b);
	printf("\n");
}
void lab4_1_3() {
	int a, b;
	printf("Введите начало интервала:\n");
	scanf_s("%d", &a);
	printf("Введите конец интервала:\n");
	scanf_s("%d", &b);

	int i = a;
	while (i <= b) {
		int temp = 0;
		printf("Сумма цифр (%d) = %d\n", i, sumDigits(i));
		i += 1;
	}
	printf("\n");
}
void lab4_1_4() {
	int b;

	printf("Введите превышение скорости:\n");
	scanf_s("%d", &b);

	if (b < 10)
		printf("Штраф 10лв\n");
	if ((11 <= b) && (b < 20))
		printf("Штраф 50лв\n");
	if ((21 <= b) && (b < 30))
		printf("Штраф 100лв\n");
	if ((31 <= b) && (b < 40))
		printf("Штраф 400лв\n");
	if ((41 <= b) && (b < 50))
		printf("Штраф 600лв\n");
	if (b >= 50)
		printf("Штраф 700лв");
	printf("\n");
}
void lab4_1_5() {

		/* Проверяется является ли сумма N:

	 Если сумма N делится на 3, то она  умножается на 2 иначе на 3;*/
	int n;

	printf("Введите n:\n");
	scanf_s("%d", &n);

	int n3 = sumDigits(n);
	if (n % 3 == 0)
		n3 *= 2;
	else
		n3 *= 3;
	printf("%d", n3);
	printf("\n");
}
void lab4_1_6() {
	float n;
	printf("Введите брутто зарплату:\n");
	scanf_s("%f", &n);

	float ans = 0;
	ans = (n - (n * 0.1378)) - ((n - (n * 0.1378)) * 0.1);
	printf("%.2f", ans);
}
void lab4_2_1() {
	float n;
	printf("Введите радиус круга:\n");
	scanf_s("%f", &n);

	float a = AREA_CIRCLE(n);
	printf("%.2f\n", a);
}
void lab4_2_2() {
	float n;
	printf("Введите мили:\n");
	scanf_s("%f", &n);

	float a = PER_MILES_TO_KM(n);
	printf("%.2f километров\n", a);
}
void lab4_2_3() {
	float n;
	printf("Введите кол-во байт:\n");
	scanf_s("%f", &n);

	float a = PER_BITES_TO_BIT(n);
	printf("%.2f бит\n", a);
}

void menu_lab4() {
	int choice;
	do {
		printf("\n");
		printf("Меню выбора лаб #4\n");
		printf("1. Лаба 4.1.1\n");
		printf("2. Лаба 4.1.2\n");
		printf("3. Лаба 4.1.3\n");
		printf("4. Лаба 4.1.4\n");
		printf("5. Лаба 4.1.5\n");
		printf("6. Лаба 4.1.6\n");
		printf("7. Лаба 4.2.1\n");
		printf("8. Лаба 4.2.2\n");
		printf("9. Лаба 4.2.3\n");
		printf("0. Выход из меню\n");
		printf("Выберете нужную лабу:");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			lab4_1_1();
			break;
		case 2:
			lab4_1_2();
			break;
		case 3:
			lab4_1_3();
			break;
		case 4:
			lab4_1_4();
			break;
		case 5:
			lab4_1_5();
			break;
		case 6:
			lab4_1_6();
			break;
		case 7:
			lab4_2_1();
			break;
		case 8:
			lab4_2_2();
			break;
		case 9:
			lab4_2_3();
			break;
		case 0:
			break;
		default:
			printf("Нет такого выбора!\n");
		}
	} while (choice != 0);
}