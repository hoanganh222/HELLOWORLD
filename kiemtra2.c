#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1 , num2 ,id ;

	printf("* Nhap so thu nhat : \n");
	scanf("%d",&num1);
	printf("* Nhap so thu hai : \n");
	scanf("%d",&num2);
	printf("\n");

	printf("====MENU====\n");
	printf("1. Tinh tong 2 so \n");
	printf("2. Tinh hieu 2 so \n");
	printf("3. Tinh tich 2 so \n");
	printf("4. Tinh thuong 2 so \n");
	printf("\n");
	printf("* Nhap id lua chon ban muon thuc hien : \n");
	scanf("%d",&id);

	switch (id)
	{
		case 1 : 
		 	printf("==> Tong 2 so la : %d\n",num1+num2);
		 	break;
		case 2 : 
		 	printf("==> Hieu  2 so la : %d\n",num1-num2);
		 	break;
		case 3 : 
		 	printf("==> Tich 2 so la : %d\n",num1*num2);
		 	break;
		case 4 : 
		 	printf("==> Thuong 2 so la : %f\n",(float)num1/num2);
		 	break;
	default :
		printf("==> Ban nhap id khong hop le !!!\n");
	}

	return 0;
}

