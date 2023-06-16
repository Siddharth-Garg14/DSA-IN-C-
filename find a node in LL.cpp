#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"
int index=0;
int Find_node(Node *temp,int dat){
    if (temp==NULL)
    {
        return -1;
    }
    if (temp->data==dat)
    {
        return index;
    }
    else{
        index++;
    }
    Find_node(temp->next,dat);
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
        //int b= print_node(head,3,cnt);
        //cout<<b<<endl;
        
        //cout<<"The value of the given index is :";
        //head=delete_node(head,2);
        //b= print_node(head,3,cnt);
       // cout<<b;
       int ind =Find_node(head,10);
       cout<<ind;
    }
    
}
