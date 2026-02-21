// Find the Length of a Linked List

// Problem Statement: Given the head of a linked list, print the length of the linked list.

// Input: 0->1->2 
// Output: 3
// Explanation: The list has a total of 3 nodes, thus the length of the list is 3.

#include<bits/stdc++.h>
using namespace std;


class linkedList{
private: 
    class Node{
        public :
            int data;
            Node* next;

            Node(int value){
                data = value;
                next = nullptr;
            }

            Node(int value, Node* next1){
                data = value;
                next = next1;
            }
    };

    Node* head;
    Node* tail;


public:
    linkedList() {  // Constructor
        head = tail = nullptr; 
    }  

    ~linkedList() { // Destructor to free memory
        Node* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void listSize(){
        int count = 0;
        Node* temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        cout << "The size of linkedlist is: " << count;
    }

    void append(int val){
        Node* newNode = new Node(val);
        if(!head){
            head = tail = newNode;
        } else{
            tail->next = newNode;
            tail = newNode;
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
    linkedList list;
    cout << "Original List " << endl;
    list.append(10);
    list.append(20);
    list.append(30);
    list.printLinkedList();
    list.listSize();
return 0;
}