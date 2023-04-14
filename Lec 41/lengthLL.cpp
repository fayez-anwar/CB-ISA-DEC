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

int lengthLL(Node* &head){
	Node* it = head;
	int len = 0;
	while(it != NULL){
		it = it->next;
		len++;
	}
	return len;
}

int main(void){
	Node* head = NULL;

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int x; cin>>x;
		insertAtTail(head, x);
	}

	int len = lengthLL(head);
	cout<<len;
}