#include<iostream>
using namespace std;

bool checksor(int a[],int s)
{
    if (s==0 ||s==1){
        return true;
    }
    if (a[0]>a[1])
    {
        return false;
    }
    bool is_sort= checksor(a+1,s-1);
    return is_sort;
}
int main(){
    int a[5]={1,2,3,5,4};
    bool d=checksor(a,5);
    cout<<d;
}