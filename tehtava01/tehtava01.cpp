// tehtava01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

// Luodaan listaan solmu (sis�lt�� datan ja viittauksen seuraavaan solmuun)
struct piste {
	// solmun data
	int luku;
	// osoitin seuraavaan solmuun
	struct piste *next;
};

// pointteri osoittamaan listan p��t�
piste *eka = NULL;

int funktio2(int x) {
	// t�h�n funktioon sy�tetty int x jaetaan kahdella ja palajutetaan y:n�
	int y = x / 2;
	return y;
}

int funktio1() {
	// lis�t��n listaan uusi solmu "uusi"
	piste *uusi = new piste;
	// lis�t��n t�h�n solmuun data int "luku"
	uusi->luku = funktio2(126);
	// pointteri seuraavaan solmuun j�tet��n tyhj�ksi
	uusi->next = NULL;
	// listan p��t� osoittava pointteri siirret��n osoittamaan solmua "uusi"
	eka = uusi;
	// luodaan uusi pointteri, joka siirret��n kohti listan p��t�
	piste *cur = eka;
	// siirret��n osoitinta eteenp�in
	cur = cur->next;


	// luodaan uusi osoitin "lista" joka osoittaa listan p��t�
	struct piste *lista = eka;
	// palautetaan sen solmun arvo, jossa on muuttuja "luku"
	return lista->luku;
}

int main()
{
	cout << funktio1();
}