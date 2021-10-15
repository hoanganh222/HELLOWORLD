#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int xeploai(int a, int b, int c);
	
	main()
	{
	       int	a_s_m, lythuyet, thuchanh;
	       int tb;
	       char luachon;
	       
	       do{
	       	    printf("\nnhap vao diem asm:");
	       	    scanf("%d",&a_s_m);
				printf("nhap vao diem ly thuyet:");
				scanf("%d",&lythuyet);
				printf("\nnhap vao diem asm:");
				scanf("%d",&thuchanh);
				
				tb= xeploai(a_s_m, lythuyet,thuchanh);
				
				switch(tb){
					    case 0:
					    	printf("\nban truot mon");
					    	   break;
					    case 1:
					    	printf("\nban xep loai trung binh");
					    	   break;
					    case 2:
					    	printf("\nban xep loai kha");
					    	   break;
					    case 3:
					    	printf("\nban xep loai gioi");
					    	   break;
				}
				
				printf("\nban co muon tra cuu xep loai tiep khong?");
				printf("\nco nhan chu Y,khong nhan chu N\n");
				fflush(stdin);
				scanf("%c", &luachon);
		}while(luachon == 'Y' || luachon == 'y');
		
		if(luachon != 'Y' && luachon != 'y')
		    printf("\nhen gap lai !");
		return 0;
	}
	
	int xeploai(int a, int b, int c)
	{
		    float tb = (float)(a+b+c)/3;
		        if(tb <40)
		            return 0;
		        else if(tb>=40 && tb<60)
		            return 1;
		        else if(tb>=60 && tb<80)
		            return 2;
		        else if(tb>=80)
		            return 3;
    }


