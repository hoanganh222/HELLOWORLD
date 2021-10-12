#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j = 0; int vowel = 0, consonant = 0;
	char text[100];
	
	printf("Enter a word: ");
	scanf("%s", &text);
	
	    while(text[j] != '\0')
	    {
	        if(text[j] == 'a' || text[j] == 'e' || text[j] == 'i' || text[j] == 'o' || text[j] == 'u')
		        vowel++;
			    consonant++;    
		        }
	printf("\nNumbers of vowels in word is: %d", vowel);
	printf("\nNumbers of consonants in word is: %d", consonant);
	return 0;
}
