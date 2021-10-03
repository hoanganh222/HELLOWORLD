#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float marks;
	printf("Enter your marks: ");
	scanf("%f", &marks);
	if(marks < 35)
	   printf("Your grade is E");
    else if(35 < marks && marks < 45)
       printf("Your grade is D");
	else if(45 < marks && marks < 65)
       printf("Your grade is C");
	else if(65 < marks && marks < 75)
       printf("Your grade is B");
    else if(75 < marks)
       printf("Your grade is A");
    return 0;
}


