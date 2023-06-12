#include<iostream>
using namespace std;

int last_index(int a[],int s,int n,int f){
    if(n==s){
        return -1;
    }
    int index =last_index(a,s,n+1,f);
    if (index==-1 and a[n+1]==f)
    {
        return n+1;
    }   
    else 
        return index;
}
int main(){
    int a[4]={1,2,3,2};
    cout<<last_index(a,4,0,2);
}