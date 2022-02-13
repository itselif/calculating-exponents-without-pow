#include<stdio.h>
int main()
{
	/* Klavyeden taban ve üs deðeri girilen sayýnýn kuvvetini hesaplama (pow() komutu kullanýlmadan)*/

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
