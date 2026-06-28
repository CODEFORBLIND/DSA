// Find middle element in a Linked List

// Problem Statement: Given the head of a linked list of integers, determine the middle node of the linked list. However, if the linked list has an even number of nodes, return the second middle node.

// Example 1:
// Input:
//  LL: 1  2  3  4  5 

// Output:
//     3
// Explanation: 
// Node with value 3 is the middle node of this linked list.

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

        // Method 1 : Brute-force Method
        void midElem(){
            Node *temp = head;
            int count = 0;
            while(temp != nullptr){
                count++;
                temp = temp->next;
            }
            temp = head;
            int mid = (count/2) + 1;
            cout << mid << endl;
            int counter = 1;
            while(counter < mid){
                temp = temp->next;
                counter++;
            }
            cout << temp->data << endl;
        }

        // Method 2 : Tortoise and Hare Approach
        void midelem(){
            if(head == nullptr){
                return;
            }
            Node *slow = head;
            Node *fast = head;
            while(fast != nullptr && fast->next != nullptr){
                slow = slow->next;
                fast = fast->next->next;
            }
            cout << slow->data << endl;
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
    list.midelem();
return 0;
}