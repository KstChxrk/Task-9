#include<stdio.h>
int main() {
	int N = 2022; //Номер года
	int S = (N / 100) + 1; //Вычисляем век
	printf("%d век", S);
	return 0;

}