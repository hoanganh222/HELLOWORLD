#include <stdio.h>
#include <stdlib.h>

void main() {
    int ary[10];
    int i;
    int total=0;
    int max=0;
    int min=0;
    for(i=0;i<10;i++) {
    	printf("\n enter value: %d",i+1);
    	scanf("%d",&ary[i]);
    	if(i=0) {
    		min=ary[0];
    		max=ary[0];
    	}
    	if(max<ary[i]) max=ary[i];
    	if(min>ary[i]) min=ary[i];
    	total+=ary[i];
    }
    printf("\nmax = %d\n",max);
    printf("\nmin + %d\n",min);
    printf("\ntotal + %d\n",total);
    printf("\navegare = %d\n",total/10);
    getch();
}

