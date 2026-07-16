// Remove N-th node from the end of a Linked List

// Problem Statement: Given a linked list and an integer N, the task is to delete the Nth node from the end of the linked list and print the updated linked list.

// Examples
// Input:  5->1->2, N=2
// Output: 5->2
// Explanation: The 2nd node from the end of the linked list is 1. Therefore, we get this result after removing 1 from the linked list.

#include<bits/stdc++.h>
using namespace std;

class linkedList{
    public:
        class Node{
            public:
                int data;
                Node *next;
                bool visited;

            Node(int value){
                data = value;
                next = nullptr;
                visited = false;
            }

            Node(int value, Node* next1){
                data = value;
                next = next1;
            }
        };
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

    list.printLinkedList();
return 0;
}