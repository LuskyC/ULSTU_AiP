#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include "Module.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	do {
		printf("\n");
		printf("Меню выбора номеров лаб\n");
		printf("1. Лабораторная работа #2\n");
		printf("2. Лабораторная работа #3\n");
		printf("3. Лабораторная работа #4\n");
		printf("0. Выход из программы\n");
		scanf_s("%d", &n);
		printf("\n");

		switch (n) {
		case 1:
			menu_lab2();
			break;
		case 2:
			menu_lab3();
			break;
		case 3:
			menu_lab4();
			break;
		case 0:
			break;
		default:
			printf("Введите корректный номер!\n");
			break;
		}
	} while (n != 0);
	return 0;
}