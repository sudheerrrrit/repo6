#include<iostream>
using namespace std ;
class Node{
   public :
    int data ; 
    Node * next ; 
    public:
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class List{
    Node * head ;
    Node * tail;
    public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node *newnode = new Node(val);// dynamic object 
        if(head == NULL){
           head = tail = newnode ;
        }
        else{
            newnode -> next = head ; 
            head = newnode;
        }
    }
    void print_list(){
        Node * temp = head ; 
        while(temp != NULL){
            cout << temp ->data << "->" ;
            temp = temp -> next;
        }
    }
};
int main(){
    List lst ;
    lst.push_front(12);
    lst.push_front(12);
    lst.push_front(12);
    lst.push_front(12);
    lst.print_list();
}