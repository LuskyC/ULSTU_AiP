#include <stdio.h>
#include <Windows.h>
#include <math.h>

int func(base, stepen)
{
	int i, num;
	i = 0;
	num = base;

	if (stepen != 0)
	{
		do {
			num *= base;
			i += 1;
		} while (i != stepen);
	}
	else
	{
		num = 1;
	}

	return num;
}

void labs2_1_1()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.1.1\n");

	float num1;
	float num2;
	printf("Введите первое число:");
	scanf_s("%f", &num1);

	printf("Введите второе число:");
	scanf_s("%f", &num2);

	if (num1 > num2)
	{
		printf("%.2f\n", num1);
		printf("%.2f\n", num2);
	}
	else
	{
		printf("%.2f\n", num2);
		printf("%.2f\n", num1);
	}
	printf("\n");
}

void labs2_1_2()
{
	int v1, v2, v3;
	int max;

	printf("Лаба 2.1.2\n");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введите 3 числа: ");
	scanf_s("%d%d%d", &v1, &v2, &v3);

	if ((v2 > v1) && (v2 > v3))
	{
		max = v2;
	}
	if ((v3 > v1) && (v3 > v2))
	{
		max = v3;
	}
	if ((v1 > v3) && (v1 > v2))
	{
		max = v1;
	}
	printf("%d", max);
	printf("\n");
}

void labs2_1_3()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.1.3\n");

	float temperature;

	printf("Введите температруру:");
	scanf_s("%f", &temperature);

	if ((temperature >= 18) && (temperature < 22))
	{
		printf("Прохладно");
	}
	if ((temperature >= 22) && (temperature < 26))
	{
		printf("Тепло");
	}
	if ((temperature >= 26))
	{
		printf("Жарко");
	}
	printf("\n");
}

void labs2_1_4()
{
	int v1, v2, v3, v4, v5;
	int max;

	printf("Лаба 2.1.4\n");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введите 5 чисел: ");
	scanf_s("%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5);
	
	if ((v2 > v1) && (v2 > v3) && (v2 > v4) && (v2 > v5))
	{
		max = v2;
	}
	if ((v3 > v1) && (v3 > v2) && (v3 > v4) && (v3 > v5))
	{
		max = v3;
	}
	if ((v1 > v2) && (v1 > v3) && (v1 > v4) && (v1 > v5))
	{
		max = v1;
	}
	if ((v4 > v2) && (v4 > v3) && (v4 > v1) && (v4 > v5))
	{
		max = v1;
	}
	if ((v5 > v2) && (v5 > v3) && (v5 > v4) && (v5 > v1))
	{
		max = v5;
	}
	printf("%d", max);
	printf("\n");
}

void labs2_1_5()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.1.5\n");
	printf("Температура на огороде летом\n");

	float temp;

	printf("Введите температуру:");
	scanf_s("%f", &temp);

	if (temp >= 30)
	{
		printf("Жарища, сума сошли работать в огороде??");
	}
	if ((temp >= 25) && (temp < 30))
	{
		printf("Тепло, начинаешь потеть, но если надо, то можно работать");
	}
	if ((temp >= 20) && (temp < 25))
	{
		printf("Самое оно, пора сажать,копать!");
	}
	if (temp < 20)
	{
		printf("Прохладно, но пойдет");
	}
	printf("\n");

}

void labs2_1_6()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.1.6\n");
	printf("Цена на шаурму\n");

	float temp;

	printf("Введите цену:");
	scanf_s("%f", &temp);

	if (temp >= 500)
	{
		printf("Оверпарйс, лучше пельмени купить");
	}
	if ((temp >= 350) && (temp < 500))
	{
		printf("Дороговато, шаурма в богатом районе или на мероприятиях");
	}
	if ((temp >= 200) && (temp < 350))
	{
		printf("Самое оно, можно брать!");
	}
	if (temp < 200)
	{
		printf("Дешево,но мясо в шаурме вероятно недавно гавкало");
	}
	printf("\n");
}

void labs2_1_7()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.1.7\n");
	printf("Скорость слета со стипендии\n");

	float temp;

	printf("Введите кол-во дней за которое вы с нее слетели:");
	scanf_s("%f", &temp);

	if (temp >= 1400)
	{
		printf("Очень медленно, то есть ты не слетел, поздравляю!");
	}
	if ((temp >= 720) && (temp < 1400))
	{
		printf("Медленно, так держать!");
	}
	if ((temp >= 360) && (temp < 720))
	{
		printf("Нормально, пойдет");
	}
	if ((temp >= 200) && (temp < 360))
	{
		printf("Бытсро, не горюй");
	}
	if ((temp >= 180) && (temp < 200))
	{
		printf("Ну ты профи, быстро");
	}
	if ((temp >= 0) && (temp < 180))
	{
		printf("Мгновенно, как ты это сделал??");
	}
	if (temp < 0)
	{
		printf("Ты что колдун?");
	}
	printf("\n");
}

void labs2_2_1()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.1\n");
	printf("Ряд натуральных чисел\n");

	int i;
	int n;

	printf("n = ");
	scanf_s("%d", &n);

	i = 1;
	do {
		printf("%d", i);
		i += 1;
	} while (i <= n);
	printf("\n");
}

void labs2_2_2()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.2\n");
	printf("Степени двойки\n");

	int i;
	int stepen;

	stepen = 1;
	i = 0;

	do {
		printf("2^%d = %d\n", i, stepen);
		i += 1;
		stepen = pow(2, i);
	} while (i != 6);
	printf("\n");
}

void labs2_2_3()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.3\n");
	printf("Деньги на счете\n");

	int sum;
	int year;
	float percent;
	int i;

	printf("summa = ");
	scanf_s("%d", &sum);

	printf("procent = ");
	scanf_s("%f", &percent);

	year = 0;
	i = 0;

	do {
		printf("%d RUB in %d year\n", sum, year);
		sum = (sum * (100 + percent)) / 100;
		year += 1;
		i += 1;
	} while (i != 11);
	printf("\n");
}

void labs2_2_4()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.4\n");
	
	int N;
	int i;
	int res;

	printf("Введите N:\n");
	scanf_s("%d", &N);

	i = 0;
	res = 2;
	do {
		printf("%d\n", res);
		res += 2;
		i += 1;
	} while (i != N);

	printf("\n");
}

void labs2_2_5()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.5\n");

	int N;
	int A;
	int i;
	int num;

	printf("Введите N:");
	scanf_s("%d", &N);

	printf("Введите A:");
	scanf_s("%d", &A);
	i = 0;
	num = 0;
	do {
		if ((num % A == 0) && (num != 0))
		{
			printf("%d ", num);
			i += 1;
		}
		num += A;
	} while (i != N);
	printf("\n");
}

void labs2_2_6_old()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.6\n");
	printf("\n");

	int N, i, num1, num2, num3;

	printf("Введите N:");
	scanf_s("%d", &N);

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
	} while (i != N);

}

void labs2_2_6()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.6\n");
	printf("Первые n чисел Мерсенна\n");
	printf("\n");
	printf("Числом Мерсенна называется число вида M = 2^n - 1, где n — натуральное число\n");

	int n, i, num;

	printf("Введите число n:");
	scanf_s("%d", &n);

	num = 1;

	i = 1;
	
	do {
		num = pow(2, i) - 1;
		printf("%d ", num);
		i += 1;
	} while (i != n+1);

	
	printf("\n");

}

void labs2_2_7()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Лаба 2.2.7\n");
	printf("Подсчитать накопленную инфляцию за N лет, если она все годы одинаковая и составляет K % в год\n");

	int N;
	float K, temp, res, i, I;

	printf("Введите число N: ");
	scanf_s("%d", &N);

	printf("Введите число K: ");
	scanf_s("%f", &K);
	
	temp = (1 + (K / 100));
	res = 1;
	i = 0;

	do {
		res *= temp;
		i += 1;
	} while (i != N);
	I = (res - 1) * 100;


	printf("%.2f", I);
	printf("\n");
}

void menu_lab2() {
	int choice;
	do {
		printf("\n");
		printf("Меню выбора лаб #2\n");
		printf("1. Лаба 2.1.1\n");
		printf("2. Лаба 2.1.2\n");
		printf("3. Лаба 2.1.3\n");
		printf("4. Лаба 2.1.4\n");
		printf("5. Лаба 2.1.5\n");
		printf("6. Лаба 2.1.6\n");
		printf("7. Лаба 2.2.7\n");
		printf("8. Лаба 2.2.1\n");
		printf("9. Лаба 2.2.2\n");
		printf("10. Лаба 2.2.3\n");
		printf("11. Лаба 2.2.4\n");
		printf("12. Лаба 2.2.5\n");
		printf("13. Лаба 2.2.6_old\n");
		printf("14. Лаба 2.2.6\n");
		printf("15. Лаба 2.2.7\n");
		printf("0. Выход из меню\n");
		printf("Выберете нужную лабу:");
		scanf_s("%d", &choice);
		printf("\n");

		switch (choice) {
		case 1:
			labs2_1_1();
			break;
		case 2:
			labs2_1_2();
			break;
		case 3:
			labs2_1_3();
			break;
		case 4:
			labs2_1_4();
			break;
		case 5:
			labs2_1_5();
			break;
		case 6:
			labs2_1_6();
			break;
		case 7:
			labs2_1_7();
			break;
		case 8:
			labs2_2_1();
			break;
		case 9:
			labs2_2_2();
			break;
		case 10:
			labs2_2_3();
			break;
		case 11:
			labs2_2_4();
			break;
		case 12:
			labs2_2_5();
			break;
		case 13:
			labs2_2_6();
			break;
		case 14:
			labs2_2_6_old();
			break;
		case 15:
			labs2_2_7();
			break;
		case 0:
			break;
		default:
			printf("Нет такого выбора!\n");
		}
	} while (choice != 0);
}