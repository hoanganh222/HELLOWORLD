#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//khai  bao bien
	float tong,toan, ly, hoa, tbc;
	//nhap diem toan
	printf("nhap diem toan =");
	scanf("%f", &toan);
	printf("nhap diem ly =");
	scanf("%f", &ly);
	printf("nhap diem hoa =");
	scanf("%f", &hoa);
	//tinh tong diem
	tong = toan +ly +hoa;
	//tinh diem trung binh cong
	tbc = tong/3;
	//hien thi
	printf("tong 3 mon la %f",tong);
	printf("trung binh cong la %f\n",tbc);
	}
