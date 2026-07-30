#include <stdio.h>

int main() {
    printf("=== Municipal Financial Management System ===\n");
    printf("Welcome to Windhoek Municipality\n\n");

    char municipalityName[100];
    char mayorName[100];
    int population;

    printf("Enter Municipality Name: ");
    scanf("%49s", municipalityName);

    printf("Enter Mayor's Name: ");
    scanf("%49s", mayorName);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n=== Municipal Report ===\n");
    printf("Municipality: %s\n", municipalityName);
    printf("Mayor: %s\n", mayorName);
    printf("Population: %d\n", population);

    return 0;
}