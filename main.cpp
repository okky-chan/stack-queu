#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int a = 0;
int selection = 0;

void option(); /* Menu Option */
void stackOpt(); /* Pilihan Stack */
void queueOpt(); /* Pilihan Queue */
void exit(); /* Exit */

struct nodeq {
	int dataq;
	nodeq *link;
};

struct q1 {
	nodeq *front;
	nodeq *rear;
	nodeq *link;
};

struct queue {
	q1 q;
	nodeq *t;
public:

void initialize() {
	q.front = NULL;
	q.rear = NULL;
}

void addq();
void delq();
void displayq();
};

struct node {
	int data;
	node *next;
};
class stack	{
	node *top;
public:
stack() {
	top=NULL;
}

void push();
void pop();
void display();
};

void option() {

    cout << "\nMain Menu - Pointer\n";
    cout << " 1. Stack\n";
    cout << " 2. Queue\n";
    cout << " 3. Keluar\n";
    cout << "Choose : ";
    cin >> selection;


    if (selection == 1)
    {
       stackOpt();
    }
        else if (selection == 2)
            {
                queueOpt();
            }
                else if (selection == 3)
                {
                    exit();
                }
}
void stack::push() {
	node *newlink;
	newlink=new node;
	cout<<"Input Data: "<<endl;
	cin>>newlink->data;
	newlink->next=top;
	top=newlink;
}

void stack::pop() {
	if(top==NULL)
	cout<<"There is no data yet";
	else {
		node *t;
		t=top;
		top=top->next;
		cout<<"The output is "<<t->data;
		delete t;
	}
}

void stack::display() {
	node *curt=top;
	if(top==NULL)
	cout<<"No data in stack!";
	else {
	cout<<"Stack data is: ";
//cout<<curt->data;
//getch();
	while(curt!= NULL) {
		cout<<curt->data<<" ";
		curt = curt->next;
		}
		cout<<endl;
	}
}

void stackOpt(){
	stack s1;
	int ch=0;
	cout<<endl<<"Stack Sorting"<<endl;
   	cout<<"1) Input data"<<endl;
   	cout<<"2) Delete data"<<endl;
   	cout<<"3) Show the data"<<endl;
   	cout<<"4) Back to main menu"<<endl;
	while(ch!=4) {
		cout<<"Choose: ";
		cin>>ch;
		switch(ch)
	{
	case 1:
	s1.push();
	break;
	case 2:
	s1.pop();
	break;
	case 3:
	s1.display();
	break;
	case 4:
	option();
	break;
	}
}
getch();
}
void queue::addq() {
	t = new(nodeq);
	cout<<"Input data: ";
	cin>>t->dataq;
	t->link = NULL;
	if((q.rear)== NULL)
	q.front = t;
	else
	q.rear->link = t;
	q.rear = t;
}

   //Function Definition For delq()
void queue::delq() {
	if(q.front == NULL) {
		cout<<"No data in queue!";
		q.rear = NULL;
	 }else {
	 	t = q.front;
		cout<<"The output is "<< q.front->dataq;
		q.front=q.front->link;
		free(t);
	 }
}

   //Function Definition For displayq()
void queue::displayq() {
	if(q.front == NULL) {
		cout<<"No data in queue!";
	 }else {
	 	cout<<"Queue data is: ";
		
		for(t=q.front;t!=NULL;t=t->link)
			cout<<" "<< t->dataq;
	    }
	    cout<<endl;
}

void queueOpt() {
	int choice;
	queue qu;
	qu.initialize();
	
	cout<<endl<<"Queue Sorting"<<endl;
   	cout<<"1) Input data"<<endl;
   	cout<<"2) Delete data"<<endl;
   	cout<<"3) Show the data"<<endl;
   	cout<<"4) Back to main menu"<<endl;
	
	while(choice != 4){
	cout<<"Choose: ";
	cin>>choice;
	
	switch(choice) {
	case 1:
	qu.addq();
	break;
	case 2:
	qu.delq();
	break;
	case 3:
	qu.displayq();
	break;
	case 4:
	option();
	break;
		default:
		cout << "Wrong choice!";
		}
	}
}
void exit(){
       /* to exit from the program */
       cout << endl;
       cout << "Thank you!\n";
       a = 1;
}
int main(){

    cout<<"\nThis Program created by \n";
    cout<<" Okky Dwi Triferyawan \n";

    while(true)
    {
        cout << endl;
        if (a == 1)
        {
            break;
        }
        option();
    }
   return 0;
}
