#include "stdafx.h"

#include <iostream>

using namespace std;

// Luodaan lista
struct piste {
	int luku;
	// osoitin seuraavaan solmuun
	struct piste *next;
};

// tämä pointteri osoittaa listan päätä
piste *eka = NULL;

int funktio2(int x) {
	// Tähän funktioon annettu numero jaetaan kahdella ja palautetaan takaisin
	int y = x / 2;
	return y;
}

int funktio1() {
	// lisätään listaan solmu "uusi"
	piste *uusi = new piste;
	// lisätään tähän solmuun data int "luku"
	uusi->luku = funktio2(126);
	// pointteri seuraavaan solmuun jätetään tyhjäksi
	uusi->next = NULL;
	// listan päätä osoittava pointteri siirretään osoittamaan solmua "uusi"
	eka = uusi;
	// luodaan uusi pointteri, joka osoittaa listan päätä
	piste *cur = eka;
	// tämä uusi pointteri siirtyy eteenpäin kunnes tulee NULL vastaan(?)
	cur = cur->next;


	// luodaan uusi osoitin "lista" joka osoittaa listan päätä
	struct piste *lista = eka;
	// palautetaan sen solmun arvo, jossa asuu muuttuja "luku"
	return lista->luku;
}

int main()
{
	cout << funktio1();
}