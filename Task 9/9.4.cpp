#include <stdio.h>

int main() {
	int A = 4; // ������ ������� �������������� � ��������.
	int B = 10;
	int C = 2;
	int N = ((A / C) * (B / C)); // ���-�� ��������� � ��������������.
	int S = (A * B - N * C * C); // ���������� �������.
	printf("%d\n", N); 
	printf("%d", S);
	return 0;

}