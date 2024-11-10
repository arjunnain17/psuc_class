#include <stdio.h>
int main(){
	int call;
	float bill;
	printf("Enter No. of Calls :");
	scanf("%d" , &call);
	if (call>0 && call<150) bill=0;
	if (call>150 && call<250) bill=0.9;
	if (call>250 && call<400) bill=1.2;
	if (call>400) bill=1.5;
	printf("%f",call*bill);

}
