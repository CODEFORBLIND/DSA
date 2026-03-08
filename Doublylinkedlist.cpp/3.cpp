// Reverse a Doubly Linked List

// Problem Statement: Given a doubly linked list of size ‘N’ consisting of positive integers, your task is to reverse it and return the head of the modified doubly linked list.

// Input : DLL - 1 <-> 2 <-> 3 <-> 4
// Output : DLL - 4 <-> 3 <-> 2 <-> 1

#include<bits/stdc++.h>
using namespace std;

class doublyLinkedList{
private:
    class Node{
        public:
            int data;
            Node* next;
            Node* prev;

            Node(int val, Node* next1, Node* prev1){
                data = val;
                next = next1;
                prev = prev1;
            }
            Node(int val){
                data = val;
                next = prev = nullptr;
            }
    };

    Node* head;
    Node* tail;

public: 
    // Constructor
    doublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Destructor to free memory
    ~doublyLinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next; // Save the next node before deleting current
        delete current;                // Free the memory
        current = nextNode;            // Move to the next node
    }
    head = tail = nullptr; 
}

    void listSize(){
        int count = 0;
        Node* temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        cout << "The length is : " << count << endl;
        
    }


    void append(int val){
        Node* temp = new Node(val);
        if(!head){
            head = tail = temp;
        } else{
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
        }
    }

    void reverse(){
        Node* temp = head;
        while(temp->next == nullptr){
        temp->prev = temp->next;
        }
        head->next = nullptr;
        tail->prev = nullptr;
    }


    void printLinkedList(){
        Node* temp = head;
        if(!head){
            return;
        } else{
            while(temp!= nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
        }
    }
};

int main(){
    doublyLinkedList db;
    db.append(10);
    db.append(20);
    db.append(30);
    db.printLinkedList();
    db.reverse();
    // db.listSize();
    db.printLinkedList();

return 0;
}