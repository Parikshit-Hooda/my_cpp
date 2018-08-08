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
  Node *curr = head;
  Node *prev = head;
  while(curr != NULL) {
    if(currentIdx == i) {
      //cout<<"entered if with "<<currentIdx<<endl;
      //handle extreme cases here
 	  if(curr == head) {  //for i==0
        head=head->next;
        break;
      }
      if(curr->next == NULL) { //for i==linkedlist.length
        prev->next = NULL;
        break;
      }  
      //handle normal case here - for middle elements
      {
      	prev->next = curr->next;
        break;
      }
    }
    
    curr=curr->next;
    if(currentIdx==0) //dont move prev for first element in the linked list
        {
          currentIdx++;
          continue;
        }
    currentIdx++;

    prev=prev->next;
  } //while loop ends here

    return head;
}


