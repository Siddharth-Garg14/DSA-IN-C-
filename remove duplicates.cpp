#include<iostream>
using namespace std;

void remove_duplicates(char str[]){
    if (str[0]=='\0')
    {
        return;
    }
    if (str[0]==str[1])
    {
        for (int i = 1; str[i]!='\0'; i++)
        {
            str[i]=str[i+1];
        }
        remove_duplicates(str);
    }
    else{
        remove_duplicates(str+1);
    }
}
int main() {
    char str[13]="xxxyyyzwwzzz";
    remove_duplicates(str);
    for (int i = 0; i < 13; i++)
    {
        cout<<str[i];
    }
}