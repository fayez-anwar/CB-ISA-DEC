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

void deleteAtHead(Node* &head){
	if(head == NULL)
		return;
	Node* temp = head;
	head = head->next;
	delete temp;
}

void deleteAtTail(Node* &head){
	if(head == NULL)
		return;
	if(head->next == NULL){
		delete head;
		head = NULL;
	}
	Node *temp = head, *t2 = head->next;
	while(t2->next != NULL){
		temp = temp->next;
		t2 = t2->next;
	}

	// Node* temp = head;
	// // temp->next != NULL; there is a block after it
	// // (temp->next)->next != NULL; there are atleast two blocks after it
	// while(temp->next != NULL and (temp->next)->next != NULL){
	// 	temp = temp->next;
	// }
	delete temp->next;
	temp->next = NULL;
}

void deleteAtPos(Node* &head, int pos){
	if(pos <= 1){
		deleteAtHead(head);
		return;
	}

	Node* it = head;
	for (int i = 0; i < pos - 2 and it->next and it->next->next; ++i)
		it = it->next;

	Node* temp = it->next;
	it->next = it->next->next;
	delete temp;
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

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int x; cin>>x;
		insertAtTail(head, x);
	}

	int pos;
	cin>>pos;

	printLL(head);

	// deleteAtHead(head);
	// deleteAtTail(head);
	deleteAtPos(head, pos);

	printLL(head);

	
	
}