#ifndef ANALIZADOR_H
#define ANALIZADOR_H

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
  char *link;
  struct no *proximo;
}No;

typedef struct listaLinks{
  No *primeiro;
  No *ultimo;
  int quantLinks;
}ListaLinks;

No* startNo(char *link);
ListaLinks* startLista();
void addLista(ListaLinks *lista, char* link);
char* pop(ListaLinks *lista);
void print_lista(ListaLinks *lista);
ListaLinks* buscarLinks(char* arquivo);
char* pegar_link(FILE *arquivo);
int contido_no_dominio(char *link,char *dominio);
ListaLinks* filtrar_lista(ListaLinks *lista, char *dominio);
int salvar_links_econtrados(ListaLinks *lista);

#endif