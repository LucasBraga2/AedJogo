#ifndef listase_h
#define listase_h

#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct
{
    char tipo_c;
    tp_item monstro;
} fase;

typedef struct tp_no
{
    tp_item info;
    tp_item identificador;
    fase f;
    struct tp_no *prox;
    struct tp_no *desvio;
} tp_listase;




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

int insere_listase_no_caminho(tp_listase **l, fase f_m)
{
    tp_listase *novo_no, *atu;
    novo_no = aloca_listase(); // Pegando novo no e apontando pra NUUL
    if (novo_no == NULL)
        return 0; // Nao alocou memoria
    // Atribuir valores para o novo no
    novo_no->f = f_m;
    novo_no->prox = NULL;
    novo_no->desvio = NULL;
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
        return -1; // Nao econtrou o elemento
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
/*
void cria_desvio(tp_listase **l, fase e){
    tp_listase *novo_no;
    *novo_no = aloca_listase();
    *l->desvio = novo_no;
    novo_no->info = e;
    novo_no->prox = *l->prox->prox;
}*/

void cria_caminho(tp_listase **l){
    *l = inicializa_listase();
    fase c1, c2, c3, c4, c5, d1, d2; 
    c1.tipo_c = 'c';                          //tipo identifica se eh combate ou descanso (combate = 1; descanso = 0);
    c1.monstro = 0;                         //monstro identifica a posição no vetor monstros para a determinada fase(-1 para descanso pois n há monstro);
    c2.tipo_c = 'c';
    c2.monstro = 1;
    c3.tipo_c = 'c';
    c3.monstro = 2;
    c4.tipo_c = 'c';
    c4.monstro = 3;
    c5.tipo_c = 'b';
    c5.monstro = 4;
    d1.tipo_c = 'd';
    d1.monstro = -1;
    d2.tipo_c = 'd';
    d2.monstro = -1;
    insere_listase_no_caminho(l, c1);                   //cria o caminho, de combates
    insere_listase_no_caminho(l, c2);
    insere_listase_no_caminho(l, c3);
    insere_listase_no_caminho(l, c4);
    insere_listase_no_caminho(l, c5);
    tp_listase * desvio1, *desvio2, *atu;
    desvio1 = aloca_listase();                          //aloca os desvios
    desvio2 = aloca_listase();
    atu = *l;
    atu->desvio = desvio1;                              //conecta o primeiro combate ao primeiro desvio 
    desvio1->prox = atu->prox->prox;                    //conecta a saída do desvio ao terceiro combate
    desvio1->desvio=NULL;                               //determina que não existe desvio no desvio
    desvio1->f = d1;                                    //preenche as informações do desvio
    atu = atu->prox->prox;
    atu ->desvio = desvio2;                             //conecta o combate 3 ao desvio 2
    desvio2->prox = atu->prox->prox;                    //conecta o desvio 2 ao combate 5
    desvio2->desvio = NULL;                             //determina que não existe desvio no desvio
    desvio2->f = d2;                                    //preenche as informações do desvio
}

void printa_caminho(tp_listase *l){
    printf("\n\n");
    printf("                ^-----|%c|----|\n",l->prox->prox->desvio->f.tipo_c);
    printf("                |            v");
    printf("\n|%c%d|-->|%c%d|-->|%c%d|-->|%c%d|-->|%c|\n", l->f.tipo_c, l->f.monstro+1, l->prox->f.tipo_c,l->prox->f.monstro+1,l->prox->prox->f.tipo_c,l->prox->prox->f.monstro+1,l->prox->prox->prox->f.tipo_c,l->prox->prox->prox->f.monstro+1,l->prox->prox->prox->prox->f.tipo_c,l->prox->prox->prox->prox->f.monstro+1);
    printf("  |             ^\n");
    printf("  v-----|%c|-----|\n", l->desvio->f.tipo_c);
}


#endif