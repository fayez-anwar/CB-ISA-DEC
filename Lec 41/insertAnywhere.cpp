#include <iostream>
using namespace std;

class Node{
public:
	int val;
	Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};

void insertAtTail(Node* &head, int x){
	Node* newNode = new Node(x);

	if(head == NULL){
		head = newNode;
		return;
	}

	Node* it = head;
	// (*it).next === it->next
	while(it->next != NULL){
		it = it->next;//increment
	}

	it->next = newNode;
}

void insertAtHead(Node* &head, int x){
	Node* newNode = new Node(x);
	if(head == NULL){
		head = newNode;
		return;
	}
	newNode->next = head;
	head = newNode;
}

void insertAtPos(Node* &head, int x, int pos){
	if(pos <= 1){
		insertAtHead(head, x);
		return;
	}

	Node* it = head;
	int prevBlockPos = pos - 1;

	for(int i = 0; i < prevBlockPos - 1 and it->next != NULL; i++){
		it = it->next;
	}

	Node* newNode = new Node(x);

	newNode->next = it->next;
	it->next = newNode;
}

void printLL(Node* &head){
	Node* it = head;
	while(it){
		cout<<it->val<<' ';
		it = it->next;
	}
	cout<<endl;
}

int main(void){
	Node* head = NULL;

	int n, x;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>x;
		insertAtTail(head, x);
	}

	cin>>x;
	int pos;
	cin>>pos;

	printLL(head);

	insertAtPos(head, x, pos);

	printLL(head);
	
}