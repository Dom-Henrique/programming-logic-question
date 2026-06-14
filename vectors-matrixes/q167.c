// #include <stdio.h>

// void main(){
//     int number, reserva, i=0;
//     do{
//         printf("Numero entre 0 e 255: ");
//         scanf("%d", &number);
//     } while (number>255 || number<0);
//     // binario eh quando a gente vai dividindo por 2
//     // criar um vetor com cada algarismo pra fazer as contas.
//     char vector[100];
//     while (number>0){
//         reserva = number%2;
//         vector[i] = reserva;
//         number/=2;
//         i++;
//     }
//     printf("Numero em binario: ");
//     while (vector[i]!=''){
//         printf("%d", vector[i]);
//         i--;
//     }
//     printf("\n");
// }