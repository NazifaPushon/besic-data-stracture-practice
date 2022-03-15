#include <iostream>
using namespace std;

class Node {
    public:
        int Value;
        Node* Next;
        Node(int data){
            Value=data;
            Next = NULL;
        }
        
};
//display the linklist
void display(Node* n){
    while(n!=NULL){
        cout << n->Value << " ";
        n=n->Next;
    }
    cout <<endl;

};

// adding a new Item at the end of the linklist
void intsertAtTail (Node* &head, int val) {
    Node* n = new Node(val);
    if(head ==NULL){
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->Next!=NULL){
        temp = temp->Next;
    };
    temp->Next=n;
}

//Insterting an element at the head of the link list
void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->Next = head;
    head=n;
}


//searching in the link list
bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->Value==key){
            return true;
        }
        temp= temp->Next;
    }
    return false;
};

int main () {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
   
    head->Next = second;
   
    second->Next = third;

    third->Next = NULL;

    display(head);
    intsertAtTail(head,43);
    display(head);
    insertAtHead(head,32);
    display(head);
    cout << search(head,345) << endl;
}