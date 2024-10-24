#include <stdio.h>

int main(){
	int a,b,c,smallest;
	printf("Enter a,b &c \n");
	scanf("%d %d %d", &a,&b,&c);

	if (a >b && a>c){
		printf("A");
	}
	if (c >b && c>b){
		printf("C");
}
	else printf("B");

	return 0;
}
