//head is the head of the linked list and n is  how many element you want to append from the last to the front
// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

node* append_LinkedList(node* head,int n)
{
  int LLLength=0;
  node *temp = head;
  node *tail = head;
  node *newtail = head;
  while(temp != NULL) {
    LLLength++;
    temp=temp->next;
  }
 // cout<<LLLength;
  int currentIndex=1;
  temp=head;
  while(currentIndex < (LLLength-n)) {
    currentIndex++;
    temp=temp->next;
  }
  
  newtail=temp;
  node *newhead = temp->next;
 // cout<<newhead->data<<endl;
  while(temp->next != NULL) {
    temp=temp->next;
  }
  newtail->next=NULL;
  temp->next=head;
  head=newhead;
  return head;
  }
