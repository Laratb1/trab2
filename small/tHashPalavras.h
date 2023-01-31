#ifndef HASH_H
#define HASH_H

#include "tPalavra.h"

typedef struct hashPalavras tHashPalavras;
typedef struct listaPalavra tListaPalavra;
tHashPalavras *Hash_cria();
void Hash_adiciona_palavra(tHashPalavras *, char *, int);
void Hash_imprime(tHashPalavras *, int);
tPalavra *Hash_get_palavra(tListaPalavra *);
tListaPalavra *Hash_get_no_palavra(tHashPalavras *, int);
tListaPalavra **Hash_get_lista_palavras(tHashPalavras *);
tListaPalavra *Hash_atribui_prox_no(tListaPalavra *);
int Hash_get_idc_max(tHashPalavras *);
void Hash_destroi(tHashPalavras *);

#endif
