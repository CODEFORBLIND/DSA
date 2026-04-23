// Search an element in a Linked List

// Problem Statement: Given the head of a linked list and an integer value, find out whether the integer is present in the linked list or not. Return true if it is present, or else return false.

// Input: 0->1->2, val = 2
// Output: True
// Explanation: Since element 2 is present in the list, return true.

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

    int listSize(){
        int count = 0;
        Node* temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
        
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

    void searchelem(int val){
        Node* temp = head;
        while(temp != nullptr){
            if(temp->data == val){
                cout << "Present";
                return;
            } else{
                temp = temp->next;  
            }
        }
        cout << "Not present";
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
    list.searchelem(10);


return 0;
}