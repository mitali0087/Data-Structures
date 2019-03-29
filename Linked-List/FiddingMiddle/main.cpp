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
	for(i = 0; i < 10; ++i){
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

	Node *fastptr = new Node;
	Node *slowptr = new Node;
	fastptr = head;
	fastptr = fastptr->next;
	slowptr = head;

	while(fastptr->next != NULL){
		fastptr = fastptr->next;
		if(fastptr->next == NULL){
			slowptr = slowptr->next;
			break;
		}
		fastptr = fastptr->next;
		slowptr = slowptr->next;
	} 
	cout << slowptr->data << endl;

	return 0;
}