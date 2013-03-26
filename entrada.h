#ifndef ENTRADA_H_INCLUDED
#define ENTRADA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct jogo Jogo;
typedef struct unidade Unidade;
typedef struct terreno Terreno;
typedef struct jogador Jogador;
typedef struct mapa Mapa;
typedef struct info Info;

Info* initInfoJogo();
/*lê o arquivo com as informações gerais do jogo (damage chart das unidades, combustível máximo, defesa dos terrenos, custos
unidades, etc.) e retorna um ponteiro para estrutura do tipo Info com as informações inicializadas*/

Mapa* preencheMapa();
/*lê as duas matrizes do arquivo de entrada e retorna a estrutura do mapa preenchida corretamente*/

int dinheiro (int a);
//cálculo simples da qtd de dinheiro do jogador. "a" representa a qtd de território em posse do jogador, e a função
//retorna o dinheiro ganho/inicial a partir disso

Unidade* listUnit (Mapa* Map, int numJogador);
/*retorna uma lista duplamente encadeada de unidades, com as unidades do jogador de número numJogador*/

Jogador* initJogadores (Mapa* Map);
/*a partir da estrutura do mapa já preenchida, retorna a lista de jogadores*/

Jogo* initJogo (Mapa* Map, Info* infoGerais, Jogador* listaJogadores);
//inicializa a estrutura jogo, com todas as informações necessárias

#endif // ENTRADA_H_INCLUDED
