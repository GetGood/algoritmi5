#include "stdafx.h"

#include <iostream>

using namespace std;

// Luodaan lista
struct piste {
	int luku;
	// osoitin seuraavaan solmuun
	struct piste *next;
};

// t�m� pointteri osoittaa listan p��t�
piste *eka = NULL;

int funktio2(int x) {
	// T�h�n funktioon annettu numero jaetaan kahdella ja palautetaan takaisin
	int y = x / 2;
	return y;
}

int funktio1() {
	// lis�t��n listaan solmu "uusi"
	piste *uusi = new piste;
	// lis�t��n t�h�n solmuun data int "luku"
	uusi->luku = funktio2(126);
	// pointteri seuraavaan solmuun j�tet��n tyhj�ksi
	uusi->next = NULL;
	// listan p��t� osoittava pointteri siirret��n osoittamaan solmua "uusi"
	eka = uusi;
	// luodaan uusi pointteri, joka osoittaa listan p��t�
	piste *cur = eka;
	// t�m� uusi pointteri siirtyy eteenp�in kunnes tulee NULL vastaan(?)
	cur = cur->next;


	// luodaan uusi osoitin "lista" joka osoittaa listan p��t�
	struct piste *lista = eka;
	// palautetaan sen solmun arvo, jossa asuu muuttuja "luku"
	return lista->luku;
}

int main()
{
	cout << funktio1();
}