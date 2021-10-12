#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int num,i,id,sum=0;
 printf("chao mung quy khach/n");
 printf("quy khach co bao nhieu nguoi :\n");
 scanf("%d",&num);
 int user[num],menu[3];
 
 for(i=0;i<5;i++){
 	menu[i]=0;}
 	
 	printf("menu\n");
  printf("1.caffe 30k/coc \n");
  printf("2.bac xiu 25k/coc \n");
  printf("3.coca 10k/coc \n");
 for(i=0;i<num;i++){
 	printf("quy khach thu %d muon chon gi? \n",i+1);
 	scanf("%d",&id);
 	switch(id){
 		case 1:
 			printf("mon cua quy khach chon la caffe gia 30k.\n\n");
 			menu[0]++;
 			user[i]=id;
 			sum+=30000;
 			break;
 		case 2:
 			printf("mon cua quy khach chon la bac xiu gia 25k.\n\n");
 			menu[1]++;
 			user[i]=id;
 			sum+=25000;
 			break;
 		case 3:
 			printf("mon cua quy khach chon la coca gia 10k.\n\n");
 			menu[2]++;
 			user[i]=id;
 			sum+=10000;
 			break;
 	 }
 }
 printf("\n\n\n\n");
 printf("hoa don cua quy khach la \n");
 
  for(i=0;i<num;i++){
  	printf("quy khach thu %d dung mon co ma %d \n",i+1,user[i]);
  }
  
  printf("1.caffe %d coc \n",menu[0]);
  printf("2.bac xiu %d coc \n",menu[1]);
  printf("3.coca %d coc \n",menu[2]);
  printf("tong %d \n",sum);
  printf("thue 10 %% la %f\n",sum*0.1);
  printf("tien phai thanh toan %.0f",sum*1.1);
}
