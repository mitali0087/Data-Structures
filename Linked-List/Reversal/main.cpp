#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

int main(){
	int i;
	Node *head = new Node;
	Node *current = new Node;
	head = current;
	for(i = 0; i < 9; ++i){
		Node *temp = new Node;
		current->data = i + 1;
		current->next = temp;
		current = temp;
	}
	current->data = i + 1;
	current->next = NULL;
	
	current = head;
	while(current->next != NULL){
		cout << current->data << "\t";
		current = current->next;
	}
	cout << current->data << endl;

	//reversing

	Node *temp1 = new Node;
	temp1 = head;
	Node *temp2 = new Node;
	temp2 = temp1->next;
	head->next = NULL;
	Node *temp3 = new Node;
	while(temp2->next != NULL){
		temp3 = temp2->next;
		temp2->next = temp1;
		temp1 = temp2;
		temp2 = temp3;
	}
	temp2->next = temp1;
	head = temp2;

	current = head;
	while(current->next != NULL){
		cout << current->data << "\t";
		current = current->next;
	}
	cout << current->data << endl;

	return 0;
} 