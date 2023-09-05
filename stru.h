#include "pilha.h"
#include "fila.h"


typedef int vida;
typedef int energia;
typedef int valor;
typedef int tipo;
typedef int custo;
typedef char [20] nome;

typedef struct{
  int vida;
  nome m;
  tp_fila seq;
}monstro;

typedef struct{
  nome c;
  tipo t;
  valor v;
  custo c;
}carta;

typedef struct{
  vida v;
  energia e;
  nome j;
  tp_pilha deck;
}jogador;
