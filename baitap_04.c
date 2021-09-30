#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c,f;
	//nhap do c
	printf("nhap do c =");
	scanf("%f", &c);
	printf("nhap do f =");
	scanf("%f", &f);
	c =((f-32)/9)*5;
}
