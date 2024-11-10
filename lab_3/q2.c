#include <stdio.h>
int main(){
	float temperature;
	printf("Enter Temperature :");
	scanf("%f" , &temperature);
	if (temperature < 0) printf("Freezing Weather");
	else if (temperature >=0 && temperature<10) printf("Very cold Weather");
	else if (temperature>=10 && temperature<20) printf("Cold Weather");
	else if (temperature>=20) printf("Normal Weather");
	else printf("Invalid");
	return 0;


}
