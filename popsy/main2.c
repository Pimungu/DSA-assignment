#include <stdio.h>

#define MAX_ANIMALS 100

int main() {
    int N, X;
    char domesticAnimals[MAX_ANIMALS][50];
    char wildAnimals[MAX_ANIMALS][50];

    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);


    printf("Enter the names of %d domestic animals:\n", N);
    if (N > 0) {
        printf("Domestic animal 1: ");
        scanf("%s", domesticAnimals[0]);
    }
    if (N > 1) {
        printf("Domestic animal 2: ");
        scanf("%s", domesticAnimals[1]);
    }
    if (N > 2) {
        printf("Domestic animal 3: ");
        scanf("%s", domesticAnimals[2]);
    }



    printf("Enter the number of wild animals: ");
    scanf("%d", &X);


    printf("Enter the names of %d wild animals:\n", X);
    if (X > 0) {
        printf("Wild animal 1: ");
        scanf("%s", wildAnimals[0]);
    }
    if (X > 1) {
        printf("Wild animal 2: ");
        scanf("%s", wildAnimals[1]);
    }
    if (X > 2) {
        printf("Wild animal 3: ");
        scanf("%s", wildAnimals[2]);
    }
    printf("\nList of all animals (domestic and wild):\n");

    printf("Domestic animals:\n");
    if (N > 0) {
        printf("%s\n", domesticAnimals[0]);
    }
    if (N > 1) {
        printf("%s\n", domesticAnimals[1]);
    }
    if (N > 2) {
        printf("%s\n", domesticAnimals[2]);
    }


    printf("Wild animals:\n");
    if (X > 0) {
        printf("%s\n", wildAnimals[0]);
    }
    if (X > 1) {
        printf("%s\n", wildAnimals[1]);
    }
    if (X > 2) {
        printf("%s\n", wildAnimals[2]);
    }


    return 0;
}
