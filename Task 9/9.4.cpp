#include <stdio.h>

int main() {
	int A = 4; // Задаем стороны прямоугольника и квадрата.
	int B = 10;
	int C = 2;
	int N = ((A / C) * (B / C)); // Кол-во квадратов в прямоугольнике.
	int S = (A * B - N * C * C); // Оставшаяся площадь.
	printf("%d\n", N); 
	printf("%d", S);
	return 0;

}