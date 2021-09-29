#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int chieucao,r;
float V;
printf("nhap chieu cao ");
scanf("%d",&chieucao);
printf("ban kinh day");
scanf("%d",&r);
V= 3.14*chieucao*r*r;
printf("the tich la %f",V);
	return 0;
}

