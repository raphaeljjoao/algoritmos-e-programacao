#include <stdio.h>
#include <locale.h>

/*
 * Aluno: Jo�o Raphael Fontoura Dorneles (333315)
 * Enunciado: Escreva um programa que leia n�meros inteiros do usu�rio at� que o usu�rio
 *            digite 9999. Voc� N�O sabe quantos n�meros ir�o ser fornecidos pelo usu�rio.
 *            Ao encerrar, apresente na tela o menor e o maior valor lido.
 *
 *             SOLU��O MAIS SIMPLES COMPARADA COM A ANTERIOR, MAS AINDA PODE MELHORAR
 *
 */

int main(){

    setlocale(LC_ALL, "Portuguese");

    int contador = 0, num, menorNum, maiorNum, sucesso = 0;

    do{
        printf("Insira um n�mero inteiro: ");
        scanf("%d", &num);

        if (num != 9999){ // caso o usu�rio ainda n�o queira encerrar
                sucesso = 1;
            if (contador == 0){ // o primeiro n�mero inserido � a base para as compara��es que vir�o
                menorNum = num;
                maiorNum = num;
            }

            contador++;

            if (num > maiorNum) maiorNum = num;
            if (num < menorNum) menorNum = num;
        }

    } while(num != 9999);

    if(sucesso) printf("O menor n�mero vale %d e o maior n�mero vale %d.", menorNum, maiorNum);
    else printf("N�o h� valores para informar.");

    return 0;
}
