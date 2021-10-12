#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j = 0; int vowel = 0;
	char text[100];
	
	printf("Enter a line of text: ");
	scanf("%s", &text);
	
	    for(j=0; j < 100; j++)
	    {
	        if(text[j] == 'a' || text[j] == 'e' || text[j] == 'i' || text[j] == 'o' || text[j] == 'u')
		        vowel++;
		        }
	printf("\nNumbers of vowels in a line of text is: %d", vowel);
	
	return 0;
}
