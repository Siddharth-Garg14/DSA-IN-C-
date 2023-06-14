#include<iostream>
using namespace std;

void remove_x(char str[]){
    if(str[0]=='\0'){
        return;
    }
    if (str[0]=='x')
    {
        int i=0;
        for (; str[i]!='\0'; i++)
        {
            str[i]=str[i+1];
        }
        
        remove_x(str);
    }
    else
        remove_x(str+1);
}
int main() {
    char str[8]="xabcxdx";
    remove_x(str);
    for (int i = 0; i < 7; i++)
    {
        cout<<str[i];
    }
    
}