#include <stdio.h>
#include <string.h>
#include "tListas.h"
#include "tHashPalavras.h"

int main(int argc, char *argv[]) {

  tListas *l;
  printf("\n ARGV 1: %s\n", argv[1]);
  printf("\n ARGV 2: %s\n", argv[2]);

  FILE *arqListadosDocs = fopen(argv[2], "r");

  if (arqListadosDocs == NULL) {
    printf("ERRO: Arquivo %s nao encontrado!\n", argv[2]);
    return 1; // VER SE VAI SAIR SEM FINALIZAR TUDO
  }
// char string[50];
//     while(1){
//     scanf("%s", string);
//         if (!(strcmp(string, "n"))){
//             break;
//             }
    //long long int testeInd=hash_cria_indice(string);

    //printf("%lld\n", testeInd);
        //}
  l=Listas_ler_train(arqListadosDocs);

  Lista_destroi(l);


  // /* walk through other tokens */

  fclose(arqListadosDocs);

  return 0;
}