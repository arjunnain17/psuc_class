#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    float distance;

    printf("Enter coordinates of point 1 (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of point 2 (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the two points: %.2f\n", distance);

    return 0;
}
