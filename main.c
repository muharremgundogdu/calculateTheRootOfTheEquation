#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
int a,b,c,delta;
float kok1,kok2;
printf("Sirasiyla denklemdeki 2.dereceden bilinmeyenin katsayisini,1.dereceden bilinmeyenin katsayisini ve denkleminsabitini girin: ");
scanf("%d %d %d",&a,&b,&c);
delta=(b*b)-(4*a*c);
kok1=(-b-(sqrt(delta)))/2*a;
kok2=(-b+(sqrt(delta)))/2*a;
	if (delta<0)
	printf("Bu denklemin koku yoktur!\n");
	else
	printf("Denklemin birinci koku %f ve ikinci koku %f dir.\n",kok1,kok2);

return main();
}
