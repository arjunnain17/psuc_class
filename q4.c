#include <stdio.h>

int main() {
    int choice;
    float distance;

    printf("1. mm to cm, inch, feet\n2. cm to mm, inch, feet\n3. inch to mm, cm, feet\n4. feet to mm, cm, inch\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter distance in mm: ");
        scanf("%f", &distance);
        printf("Distance in cm: %.2f\n", distance / 10);
        printf("Distance in inch: %.2f\n", (distance / 10) / 2.5);
        printf("Distance in feet: %.2f\n", ((distance / 10) / 2.5) / 12);
    } else if (choice == 2) {
        // ... similar conversions for other choices
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
