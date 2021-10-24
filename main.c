#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int a1=41;
	char b1=66;
	char b2='B';
	float c1=4.2;
	double d1=0.21;
	
	printf("%d %c %d %f %f %s \n", a1,b1,b2,c1,d1,"Yazilim Bilimi");
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	printf("%d byte\n",sizeof(long int));	
	printf("%d byte\n",sizeof(short int));
	return 0;
}
