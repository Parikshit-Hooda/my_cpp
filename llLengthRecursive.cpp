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

int length(Node *head) {
  Node*temp = head;
  if(temp==NULL)
    return 0;
    return 1+length(temp->next);
}


