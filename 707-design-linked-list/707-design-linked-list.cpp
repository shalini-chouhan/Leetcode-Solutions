class MyLinkedList {

public:
struct Node{
int data;
Node*next;
Node(int val){
data=val;
next=NULL;
}

};

Node*head;
int size;
public:
MyLinkedList() {
head=NULL;
size=0;
}

int get(int index) {
    if(index<0 || index>=size) return -1;
    Node*curr=head;
    for(int i=0;i<index;i++){
        curr=curr->next;
    }
    return curr->data;
}

void addAtHead(int val) {
    addAtIndex(0,val);
}

void addAtTail(int val) {
    addAtIndex(size,val);
}

void addAtIndex(int index, int val) {
    
  if(index<0 || index>size) return;
    
    Node*newNode=new Node(val);
    Node*curr=head;
    if(index==0){
        newNode->next=head;
        head=newNode;
    }
    else{
        for(int i=0;i<index-1;i++){
            curr=curr->next;
        }
        newNode->next=curr->next;
        curr->next=newNode;
    }
    
    size++;
    
  
}

void deleteAtIndex(int index) {
     if(index<0 || index>=size) return;
    
    else if(index==0){
        Node*temp=head;
        head=head->next;
        delete temp;
    }
    
    else{
        Node*curr=head;
        for(int i=0;i<index-1;i++){
            curr=curr->next;
        }
        Node*nextNode=curr->next->next;
        delete curr->next;
        curr->next=nextNode;
      
        
    }
    
    
   size--;    
}
};