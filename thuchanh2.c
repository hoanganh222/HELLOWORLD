#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int numbers[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Nhap vao so nguyen thu %d: ", i+1);
		scanf("%d", &numbers[i]);
	}
	printf("\nResult: ");
	for(i = 9; i >= 0; i--)
	{
		printf(" %d ", numbers[i]);
	}
	return 0;
}


