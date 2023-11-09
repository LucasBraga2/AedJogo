#ifndef listase_h
#define listase_h

#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct tp_no
{
    tp_item info;
    tp_item identificador;
    tp_item monstro;
    struct tp_no *prox;
    struct tp_no *desvio;
} tp_listase;


typedef struct
{
    int tipo_c;
    tp_item monstro;
} fase;


tp_listase *inicializa_listase()
{
    return NULL;
}

int listase_vazia(tp_listase *lista)
{
    if (lista == NULL)
        return 1;
    return 0;
}

tp_listase *aloca_listase()
{ // ela ira alocar um espaco na memoria
    tp_listase *novo_no;
    novo_no = (tp_listase *)malloc(sizeof(tp_listase));
    return novo_no;
}

int insere_listase_no_fim(tp_listase **l, tp_item e, int i)
{
    tp_listase *novo_no, *atu;
    novo_no = aloca_listase(); // Pegando novo no e apontando pra NUUL
    if (novo_no == NULL)
        return 0; // Nao alocou memoria
    // Atribuir valores para o novo no
    novo_no->info = e;
    novo_no->identificador = i;
    novo_no->prox = NULL;
    // finaliza o encademaento do no
    if (listase_vazia(*l))
    { // Se for o primeiro no entra aqui
        *l = novo_no;
    }
    else
    {
        atu = *l;
        while (atu->prox != NULL)
        {
            atu = atu->prox; // Aponta pra o ultimo no
        }
        atu->prox = novo_no;
    }
    return 1;
}

void imprime_listase(tp_listase *lista)
{
    tp_listase *atu;
    atu = lista;
    while (atu != NULL)
    {
        printf("%d ", atu->info);
        atu = atu->prox;
    }
}

int remove_listase(tp_listase **lista, int i)
{
    tp_listase *ant, *atu;
    tp_item e;
    atu = *lista;
    ant = NULL;
    while ((atu != NULL) && (atu->identificador != i))
    {
        ant = atu;
        atu = atu->prox;
    }

    if (atu == NULL)
        return 0; // Nao econtrou o elemento
    if (ant == NULL)
    {                       // se for retirado o primeiro termo
        *lista = atu->prox; // Fazendo a lista apontar para o termo subsequente que foi retirado
    }
    else
    {
        ant->prox = atu->prox; // Fazendo interligacao entre o termo anterior e o termo subsequente
    }
    e = atu->info;
    free(atu);
    atu = NULL;
    return e;
}
tp_listase *busca_listase(tp_listase *lista, tp_item e)
{
    tp_listase *atu;
    atu = lista;
    while ((atu != NULL) && (atu->info != e))
    {
        atu = atu->prox;
    }
    return atu;
}

int tamanho_listase(tp_listase *lista)
{
    int cont = 0;
    tp_listase *atu;
    atu = lista;
    while (atu != NULL)
    {
        cont++;
        atu = atu->prox;
    }
    return cont;
}
void destroi_listase(tp_listase **l)
{
    tp_listase *atu;
    atu = *l;
    while (atu != NULL)
    {
        *l = atu->prox;
        free(atu);
        atu = *l;
    }
    *l = NULL;
}

int insere_listase_ordenado(tp_listase **lista, tp_item e, int i)
{

    tp_listase *novono, *ant, *atu;

    novono = aloca_listase();

    if (novono == NULL)
        return 0;

    novono->info = e;
    novono->identificador = i;

    atu = *lista;
    ant = NULL;

    while ((atu != NULL) && (atu->identificador < novono->identificador))
    {
        ant = atu;
        atu = atu->prox;
    }

    if (ant == NULL)
        *lista = novono;
    else
        ant->prox = novono;

    novono->prox = atu;

    return 1;
}

int num_de_nos_maiores(tp_listase **l, tp_item e)
{
    int cnt = 0;
    tp_listase *atu;
    atu = *l;
    while (atu != NULL)
    {
        if (atu->info > e)
        {
            cnt++;
        }
        atu = atu->prox;
    }
    return cnt;
}

int verifica_igualdade(tp_listase **l, tp_listase **l2)
{
    tp_listase *atu;
    atu = *l;
    tp_listase *atu2;
    atu2 = *l2;

    if (tamanho_listase(*l) != tamanho_listase(*l2))
        return 0;
    while (atu != NULL)
    {
        while (atu2 != NULL)
        {
            if (atu->info != atu2->info)
            {
                return 0;
            }
            atu2 = atu2->prox;
        }
        atu = atu->prox;
    }
    return 1;
}

void destroi_impar(tp_listase **l)
{
    tp_listase *atu, *ant;
    atu = *l;
    ant = NULL;

    while (atu != NULL)
    {
        ant = atu;
        atu = atu->prox;
        if (atu->info % 2 != 0)
        { // Se for impar
            remove_listase(l, ant->info);
        }
    }
}

int num_de_nos(tp_listase **l){

    int cnt = 0;
    tp_listase *atu;
    atu=*l;

    while (atu!=NULL)
    {
        cnt++;
        atu=atu->prox;
    }

    return cnt;
    
}
/*void cria_caminho(tp_listase **caminho, monstro *m)
{

    fase fases[7];
    // Tipo 1 = Combate
    // Tipo 2 = Descanso

    fases[0].tipo_c = 1;
    fases[0].monstro = 0;

    fases[1].tipo_c = 1;
    fases[1].monstro = 1;

    fases[2].tipo_c = 1;
    fases[2].monstro = 2;

    fases[3].tipo_c = 1;
    fases[3].monstro = 3;

    fases[4].tipo_c = 1;
    fases[4].monstro = 4;

    fases[6].tipo_c = 2;
    fases[6].monstro = -1;
    fases[7].tipo_c = 2;
    fases[7].monstro = -1;
}*/

#endif