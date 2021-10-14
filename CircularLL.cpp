#include <bits/stdc++.h>
#include "NodeLL.h"
using namespace std;

int main()
{
   int t;
   cin>>t;
   Node* head = NULL;
   Node* tail = NULL;
   while(t--){
   	int data;
   	cin>>data;
   	Node* n = new Node(data);
   	if(head==NULL){
   		head = n;
   		tail = n;
	   }
	else{
		Node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = n;
		tail = n;
	}
	
   }
   tail->next = head;
   Node* temp = head;
   cout<<temp->data<<"->";
   temp=temp->next;
   while(temp!=head){
   	cout<<temp->data<<"->";
   	temp=temp->next;
   }
   cout<<"NULL";
}

