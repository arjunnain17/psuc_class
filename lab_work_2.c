#include <stdio.h>

int main(){
	char cgrade;
	int marks;
	printf("Input Marks : ");
	scanf("%d", &marks);
	
	if (marks>100) printf("Invalid Marks");
	if (marks>90 && marks<100) printf("Grade A");
	else if (marks>80 && marks<90) printf("Grade B");
	else if (marks>70 && marks<80) printf("Grade C");
	else if (marks>50 && marks<70) printf("Grade F");
	else printf("Grade F");
	return 0;
}
