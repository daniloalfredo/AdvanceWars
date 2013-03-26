#ifndef ESTRUTURAS_H_INCLUDED
#define ESTRUTURAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef enum terrenos
{
    HQ, base, aeroporto, porto, cidade, plain, mar, praia, woods, recifes, montanha, rio, estrada, ponte
} Terrenos;

typedef enum unidades
{
    infantaria, mech, recon, tank, mdTank, neoTank, APC, artillery, rockets, aAir, missiles, fighter, bomber, bCopter
    , tCopter, bShip, cruiser, lander, submarine
} Unidades;

typedef enum movimentos
{
    wait, fire, supply, load, drop, capt, dive, rise, join, fimTurno
}Movimentos;

typedef struct unidade
{
  Unidades tipo;
	int dono;
	int HP;
	int ammoLeft;
	int fuelLeft;
	int armaAtiva;
	int dived;
	struct unidade** UniTransporte;
	int jogou;
	struct unidade* proxUnit;
	struct unidade* antUnit;
} Unidade;

typedef struct terreno
{
	Terrenos tipo;
	int dono;
	int pontosCaptura;
} Terreno;

typedef struct mapa
{
	Terreno* sprite;
	Unidade* unit;
}Mapa;

typedef struct jogador
{
	int dinheiro;
	Terreno* quartelGeneral;
	int qtdTerrenos;
	int qtdUnidades;
	int numJogador;
	Lista* units;
	struct jogador proxJogador;
} Jogador;

typedef struct info
{
    int* defesaTerrenos;
    int* fuelMax;
    int* ammoMax;
    char** rangeUnits;
    int* movePts;
    char** tipoMov;
    int* custoUnits;
    int** damageChart;
} Info;

typedef struct jogo
{
	Jogador* players;
	Mapa** mapaJogo;
	int turno;
    Info* infoGerais;
    int** rangeAtual;
} Jogo;

#endif // ESTRUTURAS_H_INCLUDED
