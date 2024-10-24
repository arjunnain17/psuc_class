#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = M_PI * pow(radius, 2);

    printf("Area of the circle: %.2f\n", area);

    return 0;
}
