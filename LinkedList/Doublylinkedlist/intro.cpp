//  It allows for efficient traversal of the list in both directions.

#include<bits/stdc++.h>
using namespace std;

class DoublyLL{
    private:
        class Node{
            public:
            int val;
            Node *prev;
            Node *next;

            Node(int value){
                val = value;
                next = prev = nullptr;
            }

            Node(int value, Node *prev1, Node* next1){
                val = value;
                prev = prev1;
                next = next1;
            }
        };

        Node *head;
        Node *tail;

    public:

        DoublyLL(){
            head = tail = nullptr;
        }
        ~DoublyLL(){
            Node *current = head;
            while(current != nullptr){
                Node *temp = current -> next;
                delete current;
                current = temp;
            }
            head = tail = nullptr;
        }

        void listSize(){
            Node *temp = head;
            int counter = 0;
            while(temp != nullptr){
                counter++;
                temp = temp->next;
            }
            cout << "The length is : " << counter;
        }

        void append(int val){
            Node *temp = new Node(val);
            if(!head){
                head = tail = temp;
            } else {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
        }

        void printLL(){
            Node *temp = head;
            if(!head){
                return;
            } else {
                while(temp != nullptr){
                    cout << temp->val << " ";
                    temp = temp->next;
                }
            }
            cout << endl;
        }
};

int main(){
    DoublyLL dd;
    dd.append(10);
    dd.append(20);
    dd.append(30);
    dd.printLL();
    dd.listSize();

return 0;
}