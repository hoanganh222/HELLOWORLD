#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	
	printf("nhap so a=");
	scanf("%d", &a);
	
	printf("nhap so b=");
	scanf("%d", &b);
	
	printf("tong =%d\n", a + b);
	printf("hieu =%d\n", a - b);
	
	printf("tich =%d\n", a * b);
	printf("thuong =%f\n", a / (float)b);
	return 0;
}
