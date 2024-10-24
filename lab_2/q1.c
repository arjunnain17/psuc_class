#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    printf("Enter the time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    printf("Time in hours, minutes, and seconds: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
