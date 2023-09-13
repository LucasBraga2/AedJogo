#include "pilha.h"
#include "fila.h"
#include <string.h>


typedef int vida;
typedef int energia;
typedef int valor;
typedef int tipo;
typedef int custo;

typedef struct{
  vida h;
  char nome [20];
  tp_fila seq;
  tipo t;
  valor v;
}monstro;

typedef struct{
  char nome [20];
  tipo t;
  valor v;
  custo c;
}carta;

typedef struct{
  char nome [20];
  tipo t;
  valor v;
}carta_monstro;

typedef struct{
  vida h;
  energia e;
  char nome [20];
  tp_pilha deck;
}jogador;
