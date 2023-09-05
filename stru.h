#include "pilha.h"
#include "fila.h"


typedef int vida;
typedef int energia;
typedef int valor;
typedef int tipo;
typedef int custo;

typedef struct{
  int vida;
  char nome [20] 
  tp_fila seq;
}monstro;

typedef struct{
  char nome [20]
  tipo t;
  valor v;
  custo c;
}carta;

typedef struct{
  vida v;
  energia e;
  char nome [20]
  tp_pilha deck;
}jogador;
