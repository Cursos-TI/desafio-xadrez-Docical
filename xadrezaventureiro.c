#include <stdio.h>

int main(){

int torre, rainha, bispo; // Variável para contar os movimentos das peças
int cavaloi, cavaloj;

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

printf("\n");

for(cavaloi = 1; cavaloi <= 2; cavaloi++){ // aqui o cavalo se movimentará 2 vezes para baixo
    
    printf("Baixo\n");
    if (cavaloi == 2){ // o if, serve pra impedir o comando do for ir direto para o do-while, o do-while so vai ser executado quando o cavalo se movimentar para baixo 2 vezes
        cavaloj = 1;
        do{
            
            printf("Esquerda\n");
            cavaloj++;

        } while(cavaloj <= 1); // cavalo se movimentara 1 vez para esquerda
        }   
    }
}

