#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    int c=fact(n-1)*n;
    return c;
}
int main(){
    int a=fact(5);
    cout<<a;
}