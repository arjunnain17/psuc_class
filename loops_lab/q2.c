//To take n input and print odd numbers in descending order 
#include <stdio.h>
int a[100];
int main(){
	int n;
	scanf("%d"  , &n);
	for (int i = 1 ; i<n ; i+=2){
		printf("%d \n" , n-i-1);
	}
}
