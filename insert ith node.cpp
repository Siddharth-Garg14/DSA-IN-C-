#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"
Node *insert_new_node(Node* head,int cnt)
{
    int i=0;
    int dta;
    cin>>dta;
    Node* newnode= new Node(dta);
    Node* temp= head;
    if(i==0)
    {
        newnode->next=temp;
        head=newnode;
        return head;
    }
    while (temp!=NULL && cnt<i-1)
    {
        temp=temp->next;
        cnt++;
    }
    if (temp!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
    return head;
}
int print_node(Node *temp,int a,int cnt){
  int b=0;
  while (temp!=NULL)
  {
    if(b==a)
    {
        return temp->data;
    }
    b++;
    temp= temp->next;
  }
  
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
int count(Node *temp){
    if (temp==NULL)
    {
        return 0;
    }
    int a=count(temp->next);
    a++;
    return a;
}
int main(){
    int n ;
    cin>>n;
    int a;
    for (int i = 0; i < n; i++)
    {
        Node*head=input_ll();
        int cnt=count(head);
        cout<<cnt<<endl;
        
        
        //cout<<"The value of the given index is :";
        head=insert_new_node(head,2);
        int b= print_node(head,3,cnt);
        cout<<b;
    }
    
}