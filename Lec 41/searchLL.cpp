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

Node* searchValue(Node* &head, int key){//implement recursively
	Node* it = head;
	int i = 0;
	while(it != NULL){
		if(it->val == key)
			return it;
		it = it->next;
		i++;//position..
	}
	return NULL;//not found
}

void printLL(Node* &head){
	Node* it = head;
	while(it){
		cout<<it->val<<' ';
		it = it->next;
	}
	cout<<endl;
}

Node* searchRecursive(Node* &head, int key){
	if(head == NULL)
		return NULL;
	if(head->val == key)
		return head;
	// head = head->next;
	return searchRecursive(head->next, key);
}

int main(void){
	Node* head = NULL;

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int x; cin>>x;
		insertAtTail(head, x);
	}

	printLL(head);

	int key;
	cin>>key;
	Node* t = searchRecursive(head, key);
	
	if(t != NULL){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}

	printLL(head);
	
}