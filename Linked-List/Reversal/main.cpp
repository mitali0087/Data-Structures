#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

int main(){
	// Creating the linked list
	//int num[5] = {1, 2, 3, 4, 5};
	Node *head = new Node;
	Node *current = new Node;
	//cout << "Enter the numbers in the list: ";
	//cin >> num;
	//head->data = num[0];
	head->data = 1;
	current = head;
	for(int i = 1; i < 10; ++i){
		//cin >> num[i];
		Node *temp = new Node;
		temp->data = i + 1;
		current->next = temp;
		current = temp;
	}
	current->next = NULL;
	Node *temp = new Node;
	temp = head;
	while(temp->next != NULL){
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << temp->data << endl;

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

	while(temp->next != NULL){
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << temp->data << endl;	

	return 0;
} 