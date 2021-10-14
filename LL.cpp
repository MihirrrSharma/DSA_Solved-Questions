#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
	Node(int data){
		this->data = data;
		next = NULL;
	}
};

Node* takeLLInput(Node* head,int n){
	Node* temp = head;
	int i;
	while(n){
	 if(temp==NULL){
		Node* p;
		cin>>i;
		p->data = i;
		temp = p;
		p->next = NULL;
	}
	 else{
	 	Node* p;
	 	cin>>i;
	 	p->data=i;
	 	temp = p;
	 	p->next = NULL;
	 }
	}
}

void Display(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}

int main(){
	Node* head = NULL;
	int n,i;
	cin>>n;
	takeLLInput(head,n);
	Display(head);
}
