#include <stdio.h>

void main() {
	int arr[10];
	int i;
	printf("Nhap 10 so:");
	printf("\n==================");
	
	for (i = 0; i < 10; i++) {
		printf("\nNhap so %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n==================\n");
	
	for (i = 9; i >= 0; i--) {
		printf("\nNhap nguoc lai %d : %d", i + 1, arr[i]);
	}
	
	printf("\n\nEND\n");
}
