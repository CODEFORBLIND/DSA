// Length of Loop in Linked List

// Problem Statement: Given the head of a linked list, determine the length of a loop present in the linked list. If there's no loop present, return 0.

// Examples
// Input: 

// Output: 3
// Explanation: A cycle exists in the linked list starting at node 3 -> 4 -> 5 and then back to 3. There are 3 nodes present in this cycle.


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
        // Add a simple boolean flag (bool visited) to each node
        void detectCycle(){
            Node *temp = head;
            while(temp != nullptr){
                if(temp->visited){
                    cout << "Cycle Found!" << endl;
                    cout << "Cycle is at starting position: " << temp->data << endl;
                    int counter = 1;
                    Node *runner = temp->next;
                    while(runner != temp){
                        counter++;
                        runner = runner->next;
                    }
                    cout << "Length of the loop is: " << counter << endl;  
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
    // Making a cycle
    linkedList::Node* node30 = list.head->next->next;
    list.tail->next = node30;
    list.detectCycle();
    list.tail->next = nullptr;

return 0;
}