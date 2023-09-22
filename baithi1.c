#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int mutiply(int a, int b);
float devide(float a, float b);

int main() {
	
	float num1, num2;
	printf("\nNhap so 1: ");
	scanf("%f", &num1);
	printf("\nNhap so 2: ");
	scanf("%f", &num2);
	
	int so1 = sum(num1, num2);
	printf("\nsum = %d", so1);
	int so2 = subtract(num1, num2);
	printf("\nsubtract = %d", so2);
	int so3 = mutiply(num1, num2);
	printf("\nmutiply = %d", so3);
	float so4 = devide(num1, num2);
	printf("\ndevide = %.1f", so4);
	
	return 0;
}


int sum(int a, int b) {
	int c;
	printf("\nThuc hien tinh tong:\n");
	printf("\nSo thu nhat la: %d", a);
	printf("\nSo thu hai la : %d", b);
	c = a + b;
	return c;
}

int subtract(int a, int b) {
	int c;
	printf("\nThuc hien tinh tru:\n");
	printf("\nSo thu nhat la: %d", a);
	printf("\nSo thu hai la : %d", b);
	c = a - b;
	return c;
}

int mutiply(int a, int b) {
	int c;
	printf("\nThuc hien tinh nhan:\n");
	printf("\nSo thu nhat la: %d", a);
	printf("\nSo thu hai la : %d", b);
	c = a * b;
	return c;
}

float devide(float a, float b) {
	float c;
	printf("\nThuc hien tinh chia:\n");
	printf("\nSo thu nhat la: %f", a);
	printf("\nSo thu hai la : %f", b);
	c = a / b;
	return c;
}
