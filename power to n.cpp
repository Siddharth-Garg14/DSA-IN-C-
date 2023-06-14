#include<iostream>
using namespace std;

int power(int n,int e){
  if(e==0){
    return 1;
  }  
  int a=power(n,e-1);
  int b= a*n;
  return b;
}
int main() {
    int a=power(4,2);
    cout<<a;
}