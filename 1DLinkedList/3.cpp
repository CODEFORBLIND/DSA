// Delete Last Node of Linked List

// Problem Statement: Given a Linked List, delete the tail of the list and print the updated list.

// Input: 0->1->2
// Output: 0->1



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

    void deletelast(){
        Node* temp = head;
        if(!head){
            return;
        } else if(listSize() == 1){
            head = tail = nullptr;
        } else{
            while(temp->next->next != nullptr){
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }

    void deletefirst(){
        Node* temp = head;
        if(!head){
            return;
        } else if(listSize() == 1){
            head = tail = nullptr;
        } else{
            head = head->next;
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
    linkedList list;
    cout << "Original List " << endl;
    list.append(10);
    list.append(20);
    list.append(30);
    list.printLinkedList();
    list.listSize();
    // list.deletelast();
    // cout << "List after deletion of last element: " << endl;
    // list.printLinkedList();
    list.deletefirst();
    cout << "List after deletion of first element: " << endl;
    list.printLinkedList();


return 0;
}