#include <stdio.h>

int main()
{
	int K = 33; // Задаем день
	while (K >= 6) // До тех пор, пока значение больше 7, вычитаем по одной неделе.
		K -= 6;
	printf("%d", K);
	return 0;
}
