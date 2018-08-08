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

void printIthNode(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
  Node *temp = head;
  int currentIdx=0;
  while(temp != NULL) {
    if(currentIdx==i)
    {
      cout<<temp->data;
      return;
    }
    currentIdx++;
    temp=temp->next;
  }
  return;  
}


