#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vize1,vize2,final;
	float dersort;
	
	float ortalama;
	
	printf("1.vize notunu girin:\n");
	scanf("%d",&vize1);
	
	printf("2.vize notunu girin:\n");
	scanf("%d",&vize2);
	
	printf("Final notunuzu girin:\n");
	scanf("%d",&final);
	
	printf("Universite ortalamasi kac:\n");
	scanf("%f",&ortalama);
	
	dersort = (vize1+vize2+final)/3.0;
	
	if (dersort>60)  {
		
		printf("Dersten gectiniz.");
		
	}
	
	else if (dersort>50) {
		
		printf("Bute kaldiniz.\n");
		
		if (ortalama<2.5){
			
			printf("Butu gecsen bile dersi seneye al, cunku ortalaman dusuk.\n");
		}
		
	}
	
	else {
		
		
		printf("Kaldiniz.");
	}
	
	
	
	
	return 0;
}
