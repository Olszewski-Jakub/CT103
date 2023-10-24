#include <stdio.h>

#define SIZE 21

float averageRating(int rating[SIZE]) {
    //Calculate avarage rating
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += rating[i];
    }
    float avarage = (float) sum / SIZE;
    return avarage;
}

int maxValue(int arr[5]) {
    //Find max value
    int max = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int rating[SIZE];
    printf("Enter ratings from 1 to 5.\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Enter rating number %d: ", i + 1);
        scanf_s("%d", &rating[i]);
    }
    printf("Avarage rating = %.1f", averageRating(rating));

    int ratingFrequency[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < SIZE; i++) {
        ratingFrequency[rating[i] - 1]++;
    }

    printf("\n-------------\nRating frequency:\n-------------\n\n");
    int max = maxValue(ratingFrequency);
    for (int i = 0; i < 5; i++) {
        printf("%d star:  ", i + 1);
        for (int j = 0; j < ratingFrequency[i]; j++) {
            printf("*");
        }
        for (int j = 0; j < max - ratingFrequency[i] + 2; j++) {
            printf(" ");
        }
        printf("%d", ratingFrequency[i]);
        printf("\n");
    }

    float ratingPercent[5];
    int tempRatingFrequency[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++) {
        ratingPercent[i] = (float) ratingFrequency[i] / SIZE * 100;
        tempRatingFrequency[i] = ratingFrequency[i] * 100 / SIZE;
    }
    printf("-------------\nRating percent:\n-------------\n\n");
    max = maxValue(tempRatingFrequency);
    for (int i = 0; i < 5; i++) {
        printf("%d star:   ", i + 1);

        for (int j = 0; j < tempRatingFrequency[i] + 1; j++) {
            printf("*");
        }
        for (int j = 0; j < max - tempRatingFrequency[i] + 2; j++) {
            printf(" ");
        }
        printf("%.1f %%", ratingPercent[i]);
        printf("\n");
    }
    printf("-------------");
    return 0;
}
