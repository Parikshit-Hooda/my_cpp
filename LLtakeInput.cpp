//take input exits if input data is -1

class Node {
    int data;
    Node *next;
    public:
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
}

Node* takeInput() {
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1) {
        if(head==NULL) {
            head = new Node(data);
            tail = head;
        } else {
            tail->next = new Node(data);
            tail=tail->next;
        }
    cin>>data;
    }
    return head;
}