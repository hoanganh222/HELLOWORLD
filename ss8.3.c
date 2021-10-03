#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("nhap vao ba so can kiem tra\n");
	scanf("%d %d %d",&a,&b,&c);
	if ( a > b && a > c)
	printf("%d la so lon nhat",a);
	if ( b > a && b > c)
	printf("%d la so lon nhat",b);
	if ( c > a && c > b)
	printf("%d la so lon nhat",c);
	else 
	printf("gia tri cua cac so la khong duy nhat");
	
	
    return 0;
}
