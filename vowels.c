#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[20];
    int i;
    int v = 0;

    printf("Type a string: ");
    scanf("%20s", str);

    for (i = 0; i < 20; i++) {
        switch (*(str + i)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                v++;
                break;
        }
    }

    printf("\nTotal vowels: %d\n", v); 
    return 0; 
}