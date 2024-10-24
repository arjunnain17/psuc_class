#include <stdio.h>
#include <math.h>
int main(){
	float a , b , c ,r1 , r2, in1 , in2;
	printf("Enter a,b and c of the quadratic equation ax^2 + bx +c \n ");
	scanf("%f %f %f", &a , &b , &c);
	in2 = sqrt(pow(b,2) - 4*a*c);
	r1 =(( -b + in2 )/ 2 );
	r2 =(( -b -  in2 )/ 2 );
	printf("Roots are :%f and %f ",r1/a , r2/a);
	return 0;
}
