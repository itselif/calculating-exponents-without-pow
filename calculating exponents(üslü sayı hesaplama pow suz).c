#include<stdio.h>
int main()
{
	/* Klavyeden taban ve �s de�eri girilen say�n�n kuvvetini hesaplama (pow() komutu kullan�lmadan)*/

	int base, exponent,i,conclusion=1;
	printf("Enter the base value  ");
	scanf("%d",&base);
	
	printf("Enter the exponent value  ");	
	scanf("%d",&exponent);

	for (i=1;i<=exponent;i++)
	{
		conclusion=conclusion*base;
		
	}
	printf("%d ^ %d = %d ",base, exponent, conclusion);



return 0;
	
}
