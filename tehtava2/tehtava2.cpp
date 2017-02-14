// tehtava2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

struct node {

	int data;

	struct node * next;
};

node *head = NULL;

// Solmun lisaaminen listaan
void addNode(int n) {
	node *newNode = new node;
	newNode->data = n;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
		return;
	}
	node *cur = head;
	while (cur) {
		if (cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}
void haeLukua(node* Ptr, int m) {
	while (Ptr != NULL) {
		if (Ptr->data == m) {
			cout << m << " alkio löytyi listalta!\n";
			return;
		}
		else {
			Ptr = Ptr->next;
		}
	}
	cout << m << " alkiota ei löytynyt listalta!\n";
}


void display() {
	struct node *list = head;
	while (list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
}

// Pääohjelma, jossa testataan linkitetyn listan toiminta
int main()
{
	addNode(3); 

	addNode(31); 

	addNode(21); 
	addNode(52);
	addNode(16);
	addNode(91);
	addNode(10);
	addNode(5);
	display();
	int x;
	cout << "hae lukua: ";
	cin >> x;
	haeLukua(head, x);
	return 0;
}
