// Insert at the head of a Linked List

// Problem Statement: Given a linked list and an integer value val, insert a new node with that value at the beginning (before the head) of the list and return the updated linked list.

// Input: 0->1->2, val = 5 
// Output: 5->0->1->2
// Explanation: We need to insert the value 5 before the head of the given Linked List.


#include<bits/stdc++.h>
using namespace std;

class linkedList{
    private:
        class Node{
            public:
                int data;
                Node *next;

            Node(int value){
                data = value;
            }

            Node(int value, Node* next1){
                data = value;
                next = next1;
            }
        };
    public:
        Node *head;
        Node *tail;

        linkedList(){
            head = tail = nullptr;
        }

        ~linkedList(){
            Node *temp;
            while(head){
                temp = head;
                head = head -> next;
                delete head;
            }
        }

        void prepend(int val){
            Node *temp = new Node(val);
            if(!head){
                head = tail = temp;
            } else {
                temp -> next = head;
                head = temp;
            }
        }

        void append(int val){
            Node *temp = new Node(val);
            if(!head){
                head = tail = temp;
            } else {
                tail ->next = temp;
                tail = temp;
            }
        }

        void printLinkedList(){
            Node *temp = head;
            while(temp != nullptr){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    linkedList list;
    cout << "Original List " << endl;
    list.append(10);
    list.append(20);
    list.append(30);
    list.printLinkedList();
    cout << "List with Prepended values " << endl; 
    list.prepend(1);
    list.prepend(2);
    list.prepend(3);
    list.printLinkedList();
return 0;
}