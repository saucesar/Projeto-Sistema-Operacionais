#include <stdio.h>
#include <stdlib.h>
#include "analizador.h"

int main(int argc, char *argv[]) {
  ListaLinks *lista = buscarLinks(argv[1]);
  print_lista(lista);
  return 0;
}
