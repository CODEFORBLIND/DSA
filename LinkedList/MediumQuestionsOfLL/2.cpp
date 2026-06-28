// Reverse a Linked List

// Problem Statement: Given the head of a singly linked list, write a program to reverse the linked list, and return the head pointer to the reversed list.

// Examples
// Input-  LL: 1   3   2   4 
// Output: 4 2 3 1
// Explanation: After reversing the linked list, the new head will point to the tail of the old linked list.

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
                next = nullptr;
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
                delete temp;
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

        void reverse(){
            Node *prev = nullptr;
            Node *temp = head;
            Node *rep = head;

            while(temp){
                Node *rem = temp->next;
                temp->next = prev;
                prev = temp;
                temp = rem;
            }
            head = tail;
            tail = rep;
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
    list.append(40);
    list.append(50);
    list.append(60);
    list.append(70);
    list.printLinkedList();
    list.reverse();
    list.printLinkedList();

return 0;
}