#include<iostream>
using namespace std;

int count(int n){
    if (n==0)
    {
        return 0;
    }
    int a= count(n/10);
    return a+1;    
}
int main() 
{
    cout<<count(156);
}