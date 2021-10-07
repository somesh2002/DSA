/*
Create a Linked List to perform the following operations
1) Add a element at first node
2) Add a element at nth node
3) remove a element from front 
4) Remove a element from nth node
5) Find Length
6) Print list elements
7) Get nth node of the list


*/

#include <stdio.h>

class Node{
public:
	int element;
	Node *next;
};

class Linkedlist{
	
public:
	Node *head;
	Node *tail;
	int length=0;
	friend class Node;

	Linkedlist();
	~Linkedlist();
	void addFront(int n);
	void addLast(int n);
	int removeFront();
	int removeLast();
	void Length();
	void print();
	void search(int num);
	void NthNode(int n);

};

Linkedlist::Linkedlist(){
	head=NULL;
}

Linkedlist ::~Linkedlist(){
	Node *temp;
	while(head!=NULL){
		temp=head;
		head=head->next;
		delete temp;
	}
}

void Linkedlist::addFront(int n){
	Node *temp=head;
	if(head==NULL){
		head =new Node;
		head->element=n;
		head->next=NULL;
		tail=head;
		length++;
		return;	
	}

	head =new Node;
	head->element=n;
	head->next=temp;
	length++;
}

void Linkedlist::addLast(int n){
	
	if(head==NULL){
		head =new Node;
		head->element=n;
		head->next=NULL;
		tail=head;
		length++;
		return;	
	}
	Node *temp=tail;
	tail->next =new Node;
	tail->next->element=n;
	tail=tail->next;
	length++;
}

int Linkedlist::removeFront(){
	int a=0;
	if(head == NULL) return -1;
	Node *temp;
	temp=head;
	head=head->next;
	a=temp->element;
	length--;
	delete temp;
	return a;	
}

int Linkedlist::removeLast(){
	int a=0;
	if(tail == NULL) return -1;
	Node *temp=head;
	while(temp->next!=tail){
		temp=temp->next;
	}	
	a=tail->element;
	tail=temp;
	length--;
	delete tail->next;
	tail->next=NULL;
	return a;
}

void Linkedlist::Length(){
	printf("\nLength: - %d\n",length);
}

void Linkedlist::print(){
	Node *temp=head;
	while(temp!=NULL){
		printf("\t%d",temp->element);
		temp=temp->next;
	}
}

void Linkedlist::search(int num){
	Node *temp=head;
	int flag=0;
	while(temp!=NULL){
		if(num==temp->element) flag=1;
		temp=temp->next;
	}

	if(flag==0){
		printf("Element is not in the list\n");
	}
	else printf("Element is there in the list\n");
}

void Linkedlist::NthNode(int index){
	
	if (index>length) {
		printf("\nIndex out of range");
		return;
	}

	int a=0;
	int n=index;
	Node *temp=head;
	while((n-1)!=0){
		temp=temp->next;
		n--;
	}

	a=temp->element;
	printf("\nValue at %d,th node is %d\n",index,a);
}



int main(){
	int a=0;
	Linkedlist mylist;
	mylist.addFront(45);
	mylist.addFront(23);
	mylist.addLast(82);
	mylist.print();
	mylist.Length();

	a=mylist.removeLast();

	mylist.print();
	mylist.Length();

	mylist.addFront(77);
	mylist.addFront(41);

	mylist.print();
	mylist.Length();

	a=mylist.removeFront();
	mylist.search(7);
	mylist.NthNode(2);
	mylist.print();
	mylist.Length();

}