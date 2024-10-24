#include <stdio.h>
int main() {
    char a;
    printf("Enter the character: ");
    scanf("%c", &a);
    if(a >= '0' && a <='9') printf("Character is a Digit");
    else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
	    printf("Its a vowel.");
    } 
    else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        printf("'%c' is a consonant.\n", a);
    }
    else {
        printf("'%c' is neither a vowel, consonant, nor digit.\n", a);
    }
    return 0;
}

