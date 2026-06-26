#include<bits/stdc++.h>
using namespace std;

class LinkedList{
    private: 
        class Node{
            public: 
                int data;
                Node *next;

                Node(int value){
                    data = value;
                    next = nullptr;
                }

                Node(int value, Node *next1){
                    data = value;
                    next = next1;
                }
        };

        Node *head;
        Node *tail;

    public:
    LinkedList(){
        head = tail = nullptr;
    }

    ~LinkedList(){
        Node *temp;
        while(head){
            temp = head;
            head = head -> next;
            delete temp;
        }
    }
};

int main(){
    
return 0;
}