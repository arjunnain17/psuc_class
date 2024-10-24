#include <stdio.h>

int main(){
	int marks;
	printf("Enter Marks to get Grade : ");
	scanf("%d" , &marks);
	if(marks>=9 && marks <=10) printf("A");
	else if(marks>=7 && marks <= 8) printf("B");
	else if(marks>=5 && marks <= 6) printf("C");
	else if(marks>=3 && marks <= 4) printf("D");	
	else if(marks<3)                printf("F");
	else printf("Invalid");
	return 0;
		
		
		
		
}
