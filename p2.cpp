#include<iostream>
using namespace std ; 
class Node{
   public:
    int data ; 
    Node * next ; 
   public :
    Node(int data){
        this ->data = data ;
        this ->next = NULL;
    }
};
 class List{
    public:
    Node * head ;
    Node * tail;
    List(){
        cout << "constructor called ";
        head = NULL;
        tail = NULL;
    }
    void push_back(int data){
        Node * newnode = new Node(data);
        Node * ptr = head;
        if(head == NULL){
            head = tail = newnode; 
        }
        else{
          while(ptr -> next != NULL){
            ptr = ptr -> next;
          }
          ptr -> next = newnode ; 
          newnode -> next = NULL;
        }
    }
    void print_list(){
        Node * ptr = head;
        while(ptr != NULL){
            cout << ptr -> data << "->" ;
            ptr = ptr -> next ;
        }
    }

};
int main(){
    cout << "before the object creation "<< endl ;
    List lst ;
    cout << "after the object creation" << endl;
    lst.push_back(12);
    lst.push_back(10);
    lst.push_back(12);
    lst.push_back(19);
    lst.push_back(10);
    lst.print_list();


}