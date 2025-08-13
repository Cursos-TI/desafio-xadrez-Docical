#include <stdio.h>


void torre(int nt){  //Função Recursiva da Torre
    if(nt > 0){
        char mt[20] = "Direita";
        printf("%s\n", mt);
        torre(nt - 1); //Repete a Função Recursiva e Decrementa o nt
    }

}

void bispo(int nb){ //Função Recursiva do Bispo + Loop Aninhado
    if(nb > 0){
      for(int i = 1; i <= 1; i++){
        printf("Cima, ");
        for(int j = 1; j <= 1; j++){
            printf("Direita\n");
        }
      }
      bispo(nb - 1);
    }

}

void rainha(int nr){ //Função Recursiva da Rainha
    if(nr > 0){
        char mr[20] = "Esquerda";
        printf("%s\n", mr);
        rainha(nr - 1);
    }

}

void cavalo(int nc){ //Função Recursiva do Cavalo + Loop Aninhado
    int cima, direita;
    if(nc > 0){
        for(cima = 1; cima <= 1; cima++){
            for(direita = 1; direita <= 1; direita++){
                if(cima > 2){ //Impedir do cavalo andar mais de 2 vezes pra cima
                    break;
                }
                if(direita != 1){ //Impedir do cavalo ir pra Direita mais de 1 vez
                    continue;
                }
                printf("Cima\nCima\nDireita\n");
                
            }
        }
        cavalo(nc - 1);
    }


}

int main(){

int torre1 = 5, rainha1 = 8, bispo1 = 5, cavalo1 = 1; // Quantidade de Movimento das Peças

//Execução dos Movimentos
torre(torre1); 

printf("\n"); // printf pra ficar organizado na hora da Execução

bispo(bispo1);

printf("\n");

rainha(rainha1);

printf("\n");

cavalo(cavalo1);

printf("\n");

return 0;
}
