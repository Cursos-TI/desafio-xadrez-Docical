#include <stdio.h>

int main(){

int torre, rainha, bispo; // Variável para contar os movimentos das peças

for(torre = 1; torre <= 5; torre++){  //Estrutura For: A Torre moverá 5 vezes para a direita

    printf("Direita\n"); //printf ira indicar que direção a peça esta indo
    
}

printf("\n");  // coloquei o "printf("\n")" só pra ficar mais arrumado quando for rodar o codigo
bispo = 1;    // se eu definisse a variavel dentro do comando "while", ele simplesmente nao funcionaria

while(bispo <= 5){ //Estrutura While: O Bismo se moverá 5 vezes para a diagonal

    printf("Cima, Direita\n"); // Como o Bismo se move na Diagonal, faremos ele andar nessas exatas direções

    bispo++; // O incremento impede do Loop ser infinito
}

printf("\n");
rainha = 1;

do { //Estrutura do while: a Rainha se moverá 8 vezes para a esquerda

    printf("Esquerda\n"); // Rainha se movendo...

    rainha++;
} while(rainha <= 8); // Condição que define quanto a rainha se moverá

    return 0;
}

