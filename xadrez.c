#include <stdio.h>

int main(){

    int escolha, i = 0;

    printf("Escolha uma opção: \n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d",&escolha);

    switch (escolha)
    {
        case 1:
            while(i <= 5){
                printf("Direita\n");
                printf("Cima\n");
                i ++;
            }
            break;
        case 2:
            do{
                printf("Direita\n");
                i ++;
            }while(i <= 5);
            break;
        case 3:
            for(i = 0; i <= 8; i ++){
                printf("Esquerda\n");
            }
            break;
        case 4:
            i = 0;
            while (i != 1)
            {
                for( int j = 0; j < 2; j ++){
                    printf("Baixo\n");
                }
                i++;
            }
            printf("Esquerda");
            break;
        default:
            break;
    }

} 
