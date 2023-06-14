#include<iostream>
using namespace std;

int len_str(char str[]){
    if (str[0]=='\0')
    {
        return 0;
    }
    int len=len_str(str+1);
    return len+1;
}
int main()
{
    char str[100];
    cin>>str;
    int a=len_str(str);
    cout<<a;
}