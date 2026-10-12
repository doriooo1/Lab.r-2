#include <locale.h>
#include <stdio.h>

int n1();
int n2();
int n3();

int main()
{
	setlocale(LC_ALL, ".UTF8");
	n1();
	n2();
	n3();
	homework();

	return 0;
}

int n1()
{
	printf("1\n2\n3\n");  

	printf("1\n \t2\n \t \t3\n"); 

	printf("%4d\n", 1, 2, 3, 4); 

	printf("%10.5f\n ", 12.234657);

	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5); 
	printf("Умножение %d на %d равно %d\n ", 2000, 4, 4 * 2000); 

	
	printf("%d разделить на %d равно %d\n ", 5., 2000000., 5. / 2000000); 
	printf("%f разделить на %f равно %f\n ", 5., 2000000., 5. / 2000000); 
	printf("%g разделить на %g равно %g\n ", 5., 2000000., 5. / 2000000); 
	printf("%e разделить на %e равно %e\n ", 5., 2000000., 5. / 2000000); 

	return 0;
}

int n2()
{
	int N, K, S;
	N = 10;
	K = 33;
	S = 21;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf(" Идет %d минута суток\n", N * 60 + K);
	printf(" До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf(" С 8.00 прошло %d секунд\n", S);
	printf(" Текущий час =%2.2f суток и текущая минута =%2.2f часа\n", N / 24., K / 60.);

	return 0;
}

int n3()
{
	int n, L, k, m;
	n = 4;
	L = 337;
	k = n / L;
	m = n / L % 10;

	printf("Дано:\n   %d\n %d\n----\nОтвет:\n%d0000.%d11\n ", n, L, k, m);

	return 0;
}

int homework()
{
	int X, N, Y;
	X = 34;
	N = 100;
	Y = 150;

	printf("Дано:\n");
	printf("Вес багажа - %d кг\n", X);
	printf("Бесплатно - 20 кг\n");
	printf("N = %d руб.\n", N);
	printf("Y = %d руб.\n", Y);

	printf("\nРешение:\n");
	printf("Доплата = %d руб.\n", (X - 20) * N);

	printf("\nОтвет: %d руб.", (X - 20) * N);

	return 0;
}