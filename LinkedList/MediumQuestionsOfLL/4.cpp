// Detect a Cycle in a Linked List

// Problem Statement: Given a Linked List, determine whether the linked list contains a cycle or not.

// Examples
// Input: LL: 1 2 3 4 5


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

        // Method 1
        // void detectCycle(){
        //     Node *slow = head;
        //     Node *fast = head;
        //     while(fast != nullptr && fast->next != nullptr){
        //         slow = slow->next;
        //         fast = fast->next->next;
        //         if(slow == fast){
        //             cout << "Cycle Found!" << endl;
        //             return;
        //         }
        //     }
        //     cout << "Cycle not found!" << endl;
        // }

        // Method 2
        // Add a simple boolean flag (bool visited) to each node
        void detectCycle(){
            Node *temp = head;
            while(temp != nullptr){
                if(temp->visited){
                    cout << "Cycle Found!" << endl;
                    return;
                }
                temp->visited = true;
                temp = temp->next;
            }
            cout << "Cycle not found!" << endl;
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
    list.detectCycle();
    // Making a cycle
    linkedList::Node* node30 = list.head->next->next;
    list.tail->next = node30;
    list.detectCycle();
    list.tail->next = nullptr;

return 0;
}