// Check if the given Linked List is Palindrome

// Problem Statement: Given the head of a singly linked list representing a positive integer number. Each node of the linked list represents a digit of the number, with the 1st node containing the leftmost digit of the number and so on. Check whether the linked list values form a palindrome or not. Return true if it forms a palindrome, otherwise, return false. .

// A palindrome is a sequence that reads the same forward and backwards.

// Examples
// Example 1:
// Input: head -> 3 -> 7 -> 5 -> 7 -> 3
// Output: true
// Explanation: 37573 is a palindrome.

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
            int mid = slow->data;
            cout << mid << endl;
        }

        void isPalindrome(){
            
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
    list.append(1);
    list.append(1);
    list.append(2);
    list.append(1);
    list.append(1);

    list.printLinkedList();
    list.midelem();

return 0;
}