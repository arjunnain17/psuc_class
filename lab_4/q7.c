#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float s, area_f, area;

    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);


    s = (a + b + c) / 2;

    area_f = s * (s - a) * (s - b) * (s - c);

    if (area_f <= 0) {
        printf("The triangle is invalid\n");
    } else {

        area = sqrt(area_f);
        printf("Area is: %f\n", area);
    }

    return 0;
}

