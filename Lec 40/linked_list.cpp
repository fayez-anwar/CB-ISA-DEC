#include <iostream>
using namespace std;

class Node{
public:
	int val;//value of the element
	// type_of_pointer??* next;
	Node* next;//address of the next block/node

	Node(int x){
		val = x;
		next = NULL;
	}
};

void insertElementAtTail(Node*&head, int x){
	Node *newNode = new Node(x);
	// Node *newNode = new Node;
	// newNode->val = x;
	// newNode->next = nullptr;

	if(head == nullptr){
		head = newNode;
		return;
	}


	Node *it = head;//pointing to the first node/block
	while((*it).next != NULL){
		it = it->next;//different notation
		// it = (*it).next;
	}
	it->next = newNode;
}

Node* insertElementAtHead(Node* &head, int x){
	Node *newNode = new Node(x);
	if(head == nullptr){
		return newNode;
	}
	newNode->next = head;
	return newNode;
}

void printListByRef(Node* &head){
	Node* temp = head;
	while(temp != nullptr){
		cout<<temp->val<<' ';
		temp = temp->next;
	}
	cout<<endl;
}

void printListByVal(Node* head){
	while(head != nullptr){
		cout<<head->val<<' ';
		head = head->next;
	}
	cout<<endl;
}

int main(void){
	Node* head = NULL;//represents and entire linkedList

	int n;
	cin>>n;

	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		insertElementAtTail(head, x);
		//just like push_back in a vector
	}

	head = insertElementAtHead(head, 6);

	printListByVal(head);

	return 0;
}