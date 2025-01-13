#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c",&x);
    switch(x){
    case 'a':
        printf("Vowel\n");
        case 'e':
        printf("Vowel\n");
        case 'i':
        printf("Vowel\n");
        case 'o':
        printf("Vowel\n");
        case 'u':
        printf("Vowel\n");
        default:
            printf("Consonant\n");
    }
    return 0;
}
