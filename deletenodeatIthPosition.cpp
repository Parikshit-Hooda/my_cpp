/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* deleteNode(Node *head, int i) {

  int currentIdx = 0;
  Node *temp = head;
  if(i==currentIdx) //base case for i=0
  {
    head=head->next;
    return head;
  }
  currentIdx=1;
  
  while(temp != NULL) {
    if(currentIdx == i)
    {
      if(temp->next == NULL) {
        temp->next=NULL;
      }
      temp->next=temp->next->next;
      return head;
    }
    temp=temp->next;
    currentIdx++;
  }
  
    return head;
}


