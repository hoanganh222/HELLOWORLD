#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float luong;
	char xeploai;
	printf("Nhap vao xep loai cua ban(A, B hoac khac(C)): ");
	scanf("%c", &xeploai);
	printf("Nhap vao luong ban dau cua ban: ");
	scanf("%f", &luong);
	if(xeploai == 'A')
	 {
	 	luong = luong + 300;
	 	printf("Luong sau tro cap cua ban la %f", luong);
	 	}
	else if(xeploai == 'B')
	 {
	    luong = luong + 250;
		printf("Luong sau tro cap cua ban la %f", luong);
		}
	else if(xeploai == 'C')
	 {
	    luong = luong + 100;
		printf("Luong sau tro cap cua ban la %f", luong);
		}	 	
	return 0;
}
