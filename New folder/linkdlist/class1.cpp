#include <iostream>
using namespace std;

// We can call a linked list a collection of nodes
// Non-continuous memory is used, which is different from arrays
// We are using non-continuous space in the function
// Internal fragmentation
// It should be in a corrected manner

// This goes from the head to the tail

class Node {
public:
    int data;
    Node* next;
    // Constructor
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

Node* insertAtHead(int value, Node* &head, Node* &tail) {
    // Linked list is empty - when both head and tail point to NULL
    if (head == NULL && tail == NULL) {
        // Step 1: Create a new node
        Node* newNode = new Node(value);
        // Step 2: Set head to new node
        head = newNode;
        // Step 3: Set tail to new node
        tail = newNode;
    } else {
        // Linked list is not empty
        // Step 1: Create a new node
        Node* newNode = new Node(value);
        // Step 2: Connect this new node to the head node
        newNode->next = head;
        // Step 3: Update head
        head = newNode;
    }
    return head;
}

Node* insertAtTail(int value, Node* &head, Node* &tail) {
    if (head == NULL && tail == NULL) {
        // Linked list is empty
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    } else {
        // Linked list is not empty
        // Step 1: Create a new node
        Node* newNode = new Node(value);
        // Step 2: Connect the current tail to the new node
        tail->next = newNode;
        // Step 3: Update tail
        tail = newNode;
    }
    return head;
}

void print(Node* head) {
    Node* temp = head;
    // Print all nodes until NULL
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail) {
    int length = getLength(head);
    if (position == 1) {
        head = insertAtHead(value, head, tail);
    } else if (position == length + 1) {
        insertAtTail(value, head, tail);
    } else {
        // Insert in between
        Node* temp = head;
        for (int i = 0; i < position - 2; i++) {
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

bool searchLL(int target, Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == target) {
            return true;
        }
        temp = temp->next; // Corrected assignment
    }
    // If we reach here, the item was not found in the linked list
    return false;
}

void deleteNodeFromLL(int position,Node* &head ,Node* &tail){
    if(head == NULL && tail == NULL){
        cout << " no node to delete";
        return ;
    }
    if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return ;
    }
    else{
        // multiple nodes and we needs to delete from it
      if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        Node* previous = head;
        for (int i = 0; i < position - 2; i++) {
            previous = previous->next;
        }
        Node* curr = previous->next;
        Node* forward = curr->next;
        previous->next = forward;
        curr->next = NULL;
        delete curr;
    }

    
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Insert at tail
    head = insertAtTail(101, head, tail);
    print(head);
    head = insertAtTail(103, head, tail);
    print(head);
    head = insertAtTail(104, head, tail);
    print(head);


//this is to search in to the linked list
// this helps to linear search in to the array 

    cout << searchLL(1003, head);
    cout << endl;


//this funciton helps to delete the function fromthe place we wants to delete

    deleteNodeFromLL(1,head,tail);
    print(head);
    return 0;
}

// Types of linked lists
// Singly linked list
// Doubly linked list
// Circular linked list

// There are many things in the linked list which can be good for solving problems
