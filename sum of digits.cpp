#include<iostream>
using namespace std;

int sum_digits(int a){
    if(a==0){
        return 0;
    }
    int b=sum_digits(a/10);
    b+= (a%10);
    return b;
}
int main(){
    cout<<sum_digits(9);
}