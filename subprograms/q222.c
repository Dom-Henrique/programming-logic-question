/*Escreva um programa que leia o número total de questões existentes em uma prova 
e o número de questões que um candidato acertou e determine o seu percentual de 
acertos  e  o  seu  percentual  de  erros.  O  cálculo  deve  ser  realizado  através  de  um 
subprograma.*/
#include <stdio.h>
int acceptanceRate(int totalQuestions, int acceptance){
    return (acceptance/totalQuestions)*100;
}
int failRate(int totalQuestions, int acceptance){
    return 100 - acceptanceRate(totalQuestions, acceptance);
}