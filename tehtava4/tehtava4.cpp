// tehtava4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct Node {
	struct Node *prev;
	string data, data1;
	int data2;
	struct Node *next;
};
Node *head = NULL, *first = NULL, *last = NULL, *node1 = NULL, *node2 = NULL;

void AddData() {
	string data1;
	Node *pointer = new Node;
	cout << "Give the data:" << endl;
	cout << "First name: ";
	cin >> pointer->data;
	cout << "Last name: ";
	cin >> pointer->data1;
	cout << "Age: ";
	cin >> pointer->data2;

	if (first == NULL) {
		pointer->prev = NULL;
		pointer->next = NULL;
		first = pointer;
		last = pointer;
	}
	else {
		pointer->next = NULL;
		last->next = pointer;
		pointer->prev = last;
		last = pointer;
		cout << "Added" << endl;
	}
}

void display() {
	cout << "Here is your list:" << endl;
	struct Node *showpointer = first;
	while (showpointer) {
		cout << showpointer->data << ' ' << showpointer->data1 << ' ' << showpointer->data2 << endl;
		showpointer = showpointer->next;
	}
}

int main()
{
	int option = 0;
	while (option != 3) {
		cout << "1: add new data" << endl;
		cout << "2: show the list" << endl;
		cout << "3: exit" << endl;
		cin >> option;
		switch (option) {
		case 1:
			AddData();
			break;
		case 2:
			display();
			break;
		case 3:
			cout << "Exiting.." << endl;
			return 0;
			break;
		default:
			cout << "invalid choice";
			break;
		}
	}
	return 0;
}