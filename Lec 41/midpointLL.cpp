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

Node* midPointLL(Node* &head){
	int n = lengthLL(head);
	int mid = n/2;

	Node* it = head;
	// int i = 0;
	// while(i < mid){
	// 	it = it->next;
	// 	i++;
	// }
	for (int i = 0; i < mid; ++i){
		it = it->next;
	}
	return it;
}

Node* midPointLL2(Node* &head){
	// if(head ==  NULL or head->next == NULL or head->next->next == NULL)
	if(head ==  NULL)
		return head;
	Node *slow = head, *fast = head;
	while(fast->next and fast->next->next){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

int main(void){
	Node* head = NULL;

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int x; cin>>x;
		insertAtTail(head, x);
	}

	// Node* midNode = midPointLL(head);
	Node* midNode = midPointLL2(head);
	if(midNode != NULL){
		cout<<midNode->val;
	}
	
}