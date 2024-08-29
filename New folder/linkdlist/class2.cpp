#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int value, Node* &head, Node* &tail) {
    if (head == NULL && tail == NULL) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void printReverse(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

void insertAtTail(int value, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode; 
    } else {
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    int len = getLength(head);
    if(position == 1){
        insertAtHead(value, head, tail);
    } else if(position == len + 1){
        insertAtTail(value, head, tail);
    } else {
        Node* temp = head;
        for(int i = 1; i < position - 1; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

bool searchElement(Node* head, int target){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteFromPosition(int position, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL){
        cout << "No nodes to delete" << endl;
        return;
    } else if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    } else if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    } else {
        Node* backward = head;
        for(int i = 0; i < position - 2; i++){
            backward = backward->next;
        }
        Node* curr = backward->next;
        Node* forward = curr->next;
        backward->next = forward;
        forward->prev = backward;
        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(10, head, tail);
    insertAtTail(20, head, tail);
    insertAtTail(30, head, tail);

    print(head);

    insertAtHead(5, head, tail);
    print(head);

    insertAtPosition(3, 15, head, tail);
    print(head);

    deleteFromPosition(2, head, tail);
    print(head);

    deleteFromPosition(0,head,tail);
    print(head);

    return 0;
}
