#include <stdio.h>
#include <stdlib.h>

int main() {
    float physics_assignment, physics_coursework, physics_midterm, physics_endterm;
    float chemistry_assignment, chemistry_coursework, chemistry_midterm, chemistry_endterm;
    float math_assignment, math_coursework, math_midterm, math_endterm;


    float physics_average, chemistry_average, math_average;
    float overall_average;


    printf("Enter marks for Physics:\n");
    printf("Assignment: ");
    scanf("%f", &physics_assignment);
    printf("Course Work: ");
    scanf("%f", &physics_coursework);
    printf("Mid Term: ");
    scanf("%f", &physics_midterm);
    printf("End of Term: ");
    scanf("%f", &physics_endterm);


    printf("\nEnter marks for Chemistry:\n");
    printf("Assignment: ");
    scanf("%f", &chemistry_assignment);
    printf("Course Work: ");
    scanf("%f", &chemistry_coursework);
    printf("Mid Term: ");
    scanf("%f", &chemistry_midterm);
    printf("End of Term: ");
    scanf("%f", &chemistry_endterm);


    printf("\nEnter marks for Math:\n");
    printf("Assignment: ");
    scanf("%f", &math_assignment);
    printf("Course Work: ");
    scanf("%f", &math_coursework);
    printf("Mid Term: ");
    scanf("%f", &math_midterm);
    printf("End of Term: ");
    scanf("%f", &math_endterm);


    physics_average = (physics_assignment + physics_coursework + physics_midterm + physics_endterm) / 4;
    chemistry_average = (chemistry_assignment + chemistry_coursework + chemistry_midterm + chemistry_endterm) / 4;
    math_average = (math_assignment + math_coursework + math_midterm + math_endterm) / 4;


    overall_average = (physics_average + chemistry_average + math_average) / 3;


    printf("\nAverage Marks:\n");
    printf("Physics: %.2f\n", physics_average);
    printf("Chemistry: %.2f\n", chemistry_average);
    printf("Math: %.2f\n", math_average);
    printf("\nOverall Average: %.2f\n", overall_average);

    return 0;
}


