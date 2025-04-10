#include<stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main()
{
    int matriz [LINHAS][COLUNAS], tabuleiro = 0, posicaoH = 3, posicaoV = 3;

    //inicializando tabuleiro com zero
    for(int i = 0; i < LINHAS; i++)
    {
        for(int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] = tabuleiro;
        }
    }
    // Navio horizontal (linha 2, colunas 3-6)
    for(int j = 3; j <= 3 + posicaoH; j++)
    {
        matriz[2][j] = 3;
    }

    // Navio vertical usando (coluna 7, linhas 4-6)
    for(int i = 4; i < 4 + posicaoV; i++)
    {
        matriz[i][7] = 3;
    }

      // Imprime letras das colunas
   printf("    "); // Espaço extra para alinhamento
   for(int j = 0; j < COLUNAS; j++)
   {
      printf("%c ", 'A' + j); // Letras das colunas
   }
   printf("\n");

   printf("    "); // Espaço extra para alinhamento
   for(int j = 0; j < COLUNAS; j++)
   {
      printf("- "); // traço abaixo de cada letra
   }
   printf("\n");

   // Imprime a matriz com números das linhas
   for(int i = 0; i < LINHAS; i++)
   {
      printf("%2d| ", i); // Número da linha com 2 dígitos
      for(int j = 0; j < COLUNAS; j++)
      {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }


    return 0;
}
