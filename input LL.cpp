#include<iostream>
using namespace std;
#include "linked intro.cpp"

Node* take_input(){
    int data;
    cin>>data;
    Node* head=NULL;
    while (data!=-1)
    {
        Node *n=new Node(data);
        if (head==NULL)
        {
            head=n;
        }
        else{
            Node *temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=n;
        }
        cin>>data;
    }
    return head;
    
}

int main(){
    Node *head=take_input();
    print(head);
}