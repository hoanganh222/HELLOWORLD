#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int a,b;
int sum(a,b);
int sub(a,b);
int mul(a,b);
float chia(a,b);
 main() {
	int chon;
	char nhapdiem;
	int kq;
	do
	{
	printf("nhap so 1:\n");
	scanf("%d",&a);
	printf("nhap so 2:\n");
	scanf("%d",&b);
	printf("ban muon thuc hien phep tinh nao\n");
	printf("1 cong\n");
	printf("2 tru\n");
	printf("3 nhan\n");
	printf("4 chia\n");
	printf("hay chon phep tinh muon thuc hien\n");
	scanf("%d",&chon);
	switch(chon)
	 {
	 	case 1:
	 		sum(a,b);
	 		break;
	 	case 2:
	 		sub(a,b);
	 		break;
	 	case 3:
	 		mul(a,b);
	 		break;
	 	case 4:
	 		chia(a,b);
	 		break;
	}
	printf("ban co muon tiep tuc thuc hien cac phep tinh\n");
	printf(" y de tiep tuc");
	printf(" n de ket thuc");
	fflush(stdin);
	scanf("%c",&nhapdiem);
	}while(nhapdiem!='n');
	{
		printf("end\n");
	}
	
	
	return 0;
}
int sum(int a, int b)
{	printf("sum = %d",a+b);

}
int sub(int a,int b)
{
	printf("sub = %d",a-b);
}
int mul( int a,int b)
{
	printf("mul = %d",a*b);
}
float chia(int a ,int b)
{
	printf("div = %f",(float)a/b);
}

