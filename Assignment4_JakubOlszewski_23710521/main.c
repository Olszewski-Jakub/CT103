#include <stdio.h>



int main() {

    int numberOfChildren = 0;
    int ageSum = 0;
    int currentAge = 0;
    short int minAge = 18;
    short int maxAge = 0;
    while(currentAge >=0) {
        printf("Enter age of children %d : ", numberOfChildren + 1);
        scanf_s("%d", &currentAge);
        if (currentAge >= 0 && currentAge < 18) {
            ageSum += currentAge;
            numberOfChildren++;
            if (currentAge < minAge)
                minAge = currentAge;

            if (currentAge > maxAge) {
                maxAge = currentAge;
            }
        }
        if (currentAge < 0) {
            printf("Ending while loop\n");
        }
        if (currentAge >= 18) {
            printf("Not a child\n");
        }
    }
    printf("There are %d children\n", numberOfChildren);
    float avarageAge = (float)ageSum / (float)numberOfChildren;
    printf("Avarage age of children is: %.2f\n", avarageAge);
    printf("Min age is: %d\n", minAge);
    printf("Max age is: %d\n", maxAge);
    return 0;
}
