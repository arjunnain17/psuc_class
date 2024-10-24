#include <stdio.h>

int main(){
	int a, b;
	printf("Enter 2 numbers : ");
	scanf("%d %d" , &a , &b);
	if(a%b == 0 || b%a == 0) printf("One of them is multiple of the other");
	else printf("Neither is multiple of the other");
	return 0;



}
