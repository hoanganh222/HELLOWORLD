#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s ,top,bottom,height;
	printf("nhap vao do dai day nho");
	scanf("%d", &top);
	printf("nhap vao do dai day lon");
	scanf("%d", &bottom);
	printf("nhap vao chieu cao");
	scanf("%d", &height);
	s= (bottom + top)* height/2;
	printf("dien tich hinh thang =%d",s);
}
