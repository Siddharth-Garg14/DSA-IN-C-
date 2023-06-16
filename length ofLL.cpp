#include<iostream>
using namespace std;
#include "Node.cpp"


int count(Node *temp){
    if (temp==NULL)
    {
        return 0;
    }
    int a=count(temp->next);
    a++;
    return a;
}
Node *input_ll()
{
    int data;
    cin>>data;
    Node *head=NULL;
    while (data!= -1)
    {
        Node *n=new Node(data);
        if (head ==NULL)
        {
            head=n;
        }
        else{
            Node *temp=head;
            while (temp->next !=NULL)
            {
                temp=temp->next;
            }
            temp->next=n;           
        }
        cin>> data;
    }
   
    return head;
}


int main(){
    int n ;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        Node*head=input_ll();
        int c=count(head);
        cout<<"The lenth of the given LL is :"<<c;
    }
    
}