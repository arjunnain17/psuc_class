#include <stdio.h>

int main(){
	int month , day;
	printf("Enter month : ");
	scanf("%d" , &month);
	if (month%2 == 0 && month !=2 && month != 8) printf("30 days");
	else if (month == 2) printf("28 days");
	else if (month==8) printf("31 days");
	else printf("31 days");
	return 0;



}
