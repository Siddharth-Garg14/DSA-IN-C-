#include<iostream>
using namespace std;
int count=0;
int count_zero(int a){
    if(a==0){
        return 0;
    }
    int b=a%10;
    if (b==0)
    {
        count++;
    }
    int c=count_zero(a/10);
    return c;
}
int main()
{
  count_zero(708000);
    cout<<count;
}