#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Enter car manufacturers\n");
    char carManufacturer[5][20];
    for (int i = 0; i < 5; i++) {
        scanf("%s", carManufacturer[i]);
    }


    //Printing all Uppercase letters in array of strings
    for (int i = 0; i < 5; i++) {
        for (int j = 0; carManufacturer[i][j] != '\0'; j++) {
            if (isupper(carManufacturer[i][j])) {
                printf(" Uppercase letter found: %c \n", carManufacturer[i][j]);
            }
        }
    }

    //Converting all string to Uppercase
    printf("\nChecking for uppercase letters");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; carManufacturer[i][j] != '\0'; j++) {
            carManufacturer[i][j] = toupper(carManufacturer[i][j]);
        }
    }

    //Printing all strings in array of strings
    printf("\nFinal list\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", carManufacturer[i]);
    }

    return 0;
}
