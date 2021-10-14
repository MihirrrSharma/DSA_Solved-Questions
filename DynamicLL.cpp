#include <iostream>
#include "NodeLL.h"
using namespace std;

void printLL(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

Node* takeInput(){
    Node* head = NULL;
	Node* tail = NULL; 
	int data;
	cin>>data;
	while(data != -1){
		Node* n = new Node(data);
		if(head==NULL){
		 head = n; 
		 tail = n;
	    }
     	else{
     	  tail->next = n;
     	  tail = n;
    	}
    	cin>>data;
    }
    return head;
}

int length(Node* head){
   Node* temp = head;
   int count = 0;
   while(temp!=NULL){
   	count++;
   	temp=temp->next;
   }
   return count;
}

void printElement(Node* head,int pos){
	Node* temp = head;
	while(pos!=0){
		pos--;
		temp=temp->next;
	}
	cout<<temp->data<<endl;
}

Node* insertNodeAtBeginning(Node* head){
	Node* temp = head;
	cout<<"What element you want to place at beginninng? "<<endl;
	int data;
	cin>>data;
	Node* newNode = new Node(data);
	newNode->next = temp;
	head = newNode;
	return head;
}

void insertNodeAtAnyPlace(Node* head,int pos){
	Node* temp = head;
	Node* tail = NULL;
	int position = pos;
	while(pos!=0){
		pos--; 
		tail = temp;
		temp = temp->next;
	}
	cout<<"What element you want to place at "<<position<<" position? "<<endl;
	int data;
	cin>>data;
	Node* newNode = new Node(data);
	tail->next = newNode;
	newNode->next = temp;
}

Node* deleteNode(Node* head,int num){
	Node* temp = head;
	Node* tail = NULL;
	// If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == num)
    {
        head = temp->next; // Changed head
        delete temp;      // free old head
        return head;
    }
    else{
	
	  while(temp->data!=num && temp!=NULL){
	    tail = temp;
		temp = temp->next;
	}
	if(temp==NULL){
		return head;
	}
	tail->next=temp->next;
	delete temp;
	return head;
}
}

bool searchElement(Node* head, int num){
	Node* temp = head;
	while(temp!=NULL){
		if(temp->data==num){
			return true;
	}
		temp=temp->next;
	}
	return false;
}


void printMiddleElement(Node* head,int len){
	Node* temp = head;
	for(int i = 0;i<(len/2);i++){
		temp = temp->next;
	}
	cout<<temp->data<<endl;
}

int countElement(Node* head,int n){
	Node* temp = head;
	int count= 0;
	while(temp!=NULL){
		if(temp->data==n){
			count++;
		}
		temp=temp->next;
	}
	return count;
}

Node* moveLastToFirst(Node* head){
	Node* temp = head;
	Node* tail = NULL;
	while(temp->next!=NULL){
		tail = temp;
		temp= temp->next;
	}
	temp->next = head;
	tail->next =  NULL;
	head = temp;
	return head;
}

Node* reverseLL(Node* head){
	Node* curr = head;
	Node* prev = NULL;
	Node* next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}

void deleteOddNodes(Node* head){
	Node* str = head;
	Node* prev = NULL;
	int count=0;
	while(str!=NULL){
		if(count%2!=0){
			prev->next = str->next;
			str = str->next;
			count++;
		}
		else{
			count++;
			prev = str;
			str = str->next;
		}
	}
//	return head;
}

int main(){
	cout<<"Please enter numbers : ";
	Node* head = takeInput();
	int pos;
//	cin>>pos;
	printLL(head);
	int len = length(head);
	cout<<"Length of the Linked List is : "<<len<<endl;
//	printElement(head,pos);
	cout<<"At what position, you want to place new element? "<<endl;
	cin>>pos;
	insertNodeAtAnyPlace(head,pos);
	cout<<"Linked List after recent insertion: ";
	printLL(head);
	head = insertNodeAtBeginning(head);
	cout<<"Linked List after recent insertion: ";
	printLL(head);
	cout<<"What number u want to delete?"<<endl;
	cin>>pos;
	head = deleteNode(head,pos);
    cout<<"Linked List after recent deletion: ";
	printLL(head);
	cout<<"Which number would u like to search?"<<endl;
	cin>>pos;
	searchElement(head,pos)?cout<<"YES,Found!":cout<<"NO";
    cout<<"\nThe middle element is ";
    len = length(head);
	printMiddleElement(head,len);
	cout<<"You can also find out the number of times an element occurs in the linked list! You wanna find out??\nPlease type a number: "<<endl;
	cin>>pos;
	cout<<countElement(head,pos)<<endl;
    cout<<"Last node to first node insertion: ";
	head = moveLastToFirst(head);
	printLL(head);
	cout<<"Linked List after getting reversed: ";
	head = reverseLL(head);
	printLL(head);
	cout<<"LL after odd node deletion: ";
    deleteOddNodes(head);
	printLL(head);
	return 0;
}
