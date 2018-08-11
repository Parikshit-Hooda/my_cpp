#include <iostream>
using namespace std;

class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print_linkedlist_spl(node *head)
{
    if(head==NULL)
        return;
    print_linkedlist_spl(head->next);
    cout<<head->data<<" ";
}

int main() {
    node *a = new node(1);
    node *b = new node(2);
    node *c = new node(3);
    node *d = new node(4);
    node *e = new node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;
    node *head = a;
    print_linkedlist_spl(head);
	return 0;
}
