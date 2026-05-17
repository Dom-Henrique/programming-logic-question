/*Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0-12
anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).*/
#include <stdio.h>

void main()
{
    int age;
    printf("Your age: ");
    scanf("%d", &age);
    if (age >= 0 && age < 12){
        printf("You're a child\n");
    }
    else if (age >= 13 && age <= 17){
        printf("You're a young\n");
    }
    else if (age >= 18 && age <= 59){
        printf("You're an adult\n");
    }
    else{
        printf("You're old people\n");
    }
}