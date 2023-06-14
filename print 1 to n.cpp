#include<iostream>
using namespace std;

int print(int n){
    if(n==0){
        return 0;
    }
    int a=print(n-1);
    cout<<++a<<" ";
    return a;
}
int main(){
    print(4);
}