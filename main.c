#include <stdlib.h>

#include <stdio.h>

int main() {
    char caractere;

    printf("Entrez un caractere : ");
    scanf(" %c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z') {
        printf("C'est une majuscule. \n");
    }
    else if (caractere >= 'a' && caractere <= 'z') {
        printf("C'est une minuscule.\n");
    }
    else {
        printf("Ce n'est ni une majuscule ni une minuscule.\n");
    }

    return 0;
}

