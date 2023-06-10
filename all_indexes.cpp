#include<iostream>
using namespace std;
int i=0;
void all_indexes(int a[],int s, int n, int f,int b[])
{
    if (n==s)
    {
        return;
    }
    if (a[n]==f)
    {
        b[i]=n;
        i++;
    }
    all_indexes(a,s,n+1,f,b);
}
int main(){
    int a[4]={1,2,3,2};
    int b[3];
    all_indexes(a,4,0,2,b);
    cout<<b[0]<<" "<<b[1];
}