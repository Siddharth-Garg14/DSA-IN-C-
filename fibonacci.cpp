#include<iostream>
using namespace std;

int fibo(int n){
    if (n==0)
    {
        return 0;
    }
    
    if(n==1 || n==2)
    {
        return 1;
    }
    int a=fibo(n-1)+fibo(n-2);
    return a;
}
int main() {
    int a=fibo(1);
    cout<<a;
}