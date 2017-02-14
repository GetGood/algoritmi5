// tehtava3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct Node {
	string data;
	Node *next;
};

Node *head = NULL;


void AddValue(string n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
		return;
	}
	Node *cur = head;
	while (cur) {
		if (cur->next == NULL) {
			cur->next = newNode;
			return;
		}

		cur = cur->next;
	}
}

void Wordlist() {
	cout << "insert the number of words you want to give: " << endl;
	int numberNodes;
	cin >> numberNodes;
	cout << "give the words: " << endl;
	for (int i = 0; i <= numberNodes; i++) {
		if (i>0) cout << "give word number " << i<<": ";
		
		string givenWord;
		getline(cin, givenWord);
		AddValue(givenWord);

	}

}

void display() {
	cout << "Here is your list!" << endl;
	struct Node *showpointer = head;
	while (showpointer) {
		cout << showpointer->data << ' ';
		showpointer = showpointer->next;
	}
}


int main()
{
	Wordlist();
	display();
	return 0;
}