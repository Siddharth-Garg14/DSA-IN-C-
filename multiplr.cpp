#include<iostream>
using namespace std;

int multiply(int a , int b){
    if(b==0 or a==0){
        return 0;
    }
    int c=multiply(a,b-1);
    c=c+a;
    return c;
}
int main()
{
    
    cout<<multiply(4,0)<<endl;
    cout<<multiply(0,5);
}