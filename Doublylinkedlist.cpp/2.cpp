// Delete Last Node and first Node of a Doubly Linked List

// Problem Statement: Given a Doubly Linked List, delete the last node of the Doubly Linked List.

// Input:  DLL: 1 <-> 3 <-> 4 <-> 1

// Output: DLL: 1 <-> 3 <-> 4

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


    int listSize(){
        int count = 0;
        Node* temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        // cout << "The length is : " << count << endl;
        return count;
        
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

    void deletelast(){
        Node* temp = tail;
        if(!head){
            return;
        } else if(listSize() == 1){
            delete head;
            head = tail = nullptr;
            return;
        } else{
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
    }

    void deletefirst(){
        Node* temp = head;
        if(!head){
            return;
        } else if(listSize() == 1){
            delete head;
            head = tail = nullptr;
            return;
        } else{
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
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
    // db.listSize();
    // db.deletelast();
    db.deletefirst();
    db.printLinkedList();

return 0;
}