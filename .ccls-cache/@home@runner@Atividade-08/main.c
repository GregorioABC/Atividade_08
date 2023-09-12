//1
// #include <stdio.h>
// int somatorio(int n){
//   if(n==1){
//     return 1;
//   }else{
//     return n+somatorio(n-1);
//   }
// }
// int main(void) {
//   int n;
//   printf("informe o número positivo : ");
//   scanf("%d",&n);
//     if(n<1){
//       printf ("Informe apenas números positivos ");
//     }else{
//       int resultado = somatorio(n);
//       printf("O Somatorio de 1 até %d :  %d",n,resultado);
//     }
//   return 0;
// }
//2.
// #include <stdio.h>
// int fatorial (int n){
//    if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * fatorial(n - 1);
//     }
// }
// int main (void){
//   int n;
//   printf("Informe o valor para fatorar : ");
//   scanf("%d",&n);
//   int resultado = fatorial(n);
//   printf("O fatorial de %d = %d",resultado,n);
// }
//3
// #include <stdio.h>
// int fibonacci(int n) {
//     if (n <= 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }
// int main(void){
//   int n;
//     printf("Digite um número inteiro N  ");
//     scanf("%d", &n);
//     if (n < 0) {
//         printf("N deve ser um número não negativo.");
//     } else {
//         int resultado = fibonacci(n);
//         printf("O %d-ésimo termo da sequência de Fibonacci é: %d", n, resultado);
//     }
//     return 0;
// }
//4
// #include <stdio.h>
// void imprimeNaturais(int n) {
    // if (n == 0) {
    //     printf("0 ");
    //     return;
    // } else {
    //     imprimeNaturais(n - 1);
    //     printf("%d ", n); 
    // }
// }
// int main (void){
//   int n;
//     printf("Digite um número inteiro positivo ");
//     scanf("%d", &n);
//     if (n < 0) {
//         printf("N deve ser um número inteiro positivo.");
//     } else {
//         printf("Números naturais de 0 a %d em ordem decrescente:", n);
//         imprimeNaturais(n);
//         printf("\n");
//     }
//     return 0;
// }
//5
// #include <stdio.h>
// void imprimeNaturais(int n) {
//     if (n < 0) {
//         return;
//     } else {
//         printf("%d ", n);
//         imprimeNaturais(n - 1);
//     }
// }
// int main(void){
//   int n;
//     printf("Digite um número inteiro positivo: ");
//     scanf("%d", &n);
//     if (n < 0) {
//         printf("N deve ser um número inteiro positivo.");
//     } else {
//         printf("Números naturais de 0 a %d em ordem decrescente:", n);
//         imprimeNaturais(n);
//         printf("\n");
//     }
//     return 0;
// }