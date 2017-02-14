// tehtava01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

// Luodaan listaan solmu (sisältää datan ja viittauksen seuraavaan solmuun)
struct piste {
	// solmun data
	int luku;
	// osoitin seuraavaan solmuun
	struct piste *next;
};

// pointteri osoittamaan listan päätä
piste *eka = NULL;

int funktio2(int x) {
	// tähän funktioon syötetty int x jaetaan kahdella ja palajutetaan y:nä
	int y = x / 2;
	return y;
}

int funktio1() {
	// lisätään listaan uusi solmu "uusi"
	piste *uusi = new piste;
	// lisätään tähän solmuun data int "luku"
	uusi->luku = funktio2(126);
	// pointteri seuraavaan solmuun jätetään tyhjäksi
	uusi->next = NULL;
	// listan päätä osoittava pointteri siirretään osoittamaan solmua "uusi"
	eka = uusi;
	// luodaan uusi pointteri, joka siirretään kohti listan päätä
	piste *cur = eka;
	// siirretään osoitinta eteenpäin
	cur = cur->next;


	// luodaan uusi osoitin "lista" joka osoittaa listan päätä
	struct piste *lista = eka;
	// palautetaan sen solmun arvo, jossa on muuttuja "luku"
	return lista->luku;
}

int main()
{
	cout << funktio1();
}