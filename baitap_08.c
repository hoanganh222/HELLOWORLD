#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,e,g;
	a= sizeof(int);
	b= sizeof(float);
	c= sizeof(double);
	d= sizeof(char);
	e= sizeof(long int);
	g= sizeof(long double);
	printf("kich thuoc kieu du lieu int:%d byte\n",a);
	printf("kich thuoc kieu du lieu float:%d byte\n",b);
	printf("kich thuoc kieu du lieu double:%d byte\n",c);
	printf("kich thuoc kieu du lieu char:%d byte\n",d);
	printf("kich thuoc kieu du lieu long int:%d byte\n",e);
	printf("kich thuoc kieu du lieu long double:%d byte\n",g);
}
