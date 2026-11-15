class MyLinkedList {
public:
    struct Node{
        int val;
        Node* next;

        Node(int x){
            val=x;
            next=NULL;
        }
    };
    Node* dummy;
    int size;

    MyLinkedList() {
        dummy=new Node(-1);
        size=0;
    }
    
    int get(int index) {
        if (index<0 || index>=size){
            return -1;
        }
        Node* temp=dummy->next;
        for (int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newnode=new Node(val);
        newnode->next=dummy->next;
        dummy->next=newnode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp=dummy;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        Node* newnode= new Node(val);
        temp->next=newnode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index< 0 || index> size){
            return;
        }
        Node* temp=dummy;
        for (int i=0;i<index;i++){
            temp=temp->next;
        }
        Node* newnode=new Node(val);
        newnode->next=temp->next;
        temp->next=newnode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index<0 || index>=size){
            return ;
        }
        Node * temp=dummy;
        for (int i=0;i<index;i++){
            temp=temp->next;
        }
        Node* oldnode=temp->next;
        temp->next=oldnode->next;
        delete(oldnode);
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */