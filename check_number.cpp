#include<iostream>
using namespace std;
bool checknum(int a[],int s,int n)
{
    if (s==0)
    {
        return false;
    }
    if (a[0]== n)
    {
        return true;
    }
    bool is_num=checknum(a+1,s-1,n);
    return is_num;        
}
int  main() {
    int a[6]={1,2,3,4,5,7};
    cout<<checknum(a,6,7);
}