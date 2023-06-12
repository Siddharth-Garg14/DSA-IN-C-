#include<iostream>
using namespace std;

int first_index(int a[],int s,int n,int f){
    if (s==n)
    {
        return -1;
    }
    if (a[n]==f )
    {
        return n;
    }
    int index=first_index(a,s,n+1,f);
    return index;    
}
int main(){
    int a[4]={9,8,10,8};
    cout<<first_index(a,4,0,8);
}