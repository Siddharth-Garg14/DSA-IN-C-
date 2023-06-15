#include<iostream>
using namespace std;

int sumar(int a[],int s){
    if (s==1)
    {
        return a[0];
    }
    int c=sumar(a,s-1);
    c=c+a[s-1];
    return c;   
}
 int main(){
    int a[6]={1,1,1,1,1,1};
    int sum=sumar(a,6);
    cout<<sum;
}