#include<iostream>
using namespace std;

void replace_char(char str[],char str1[],char str2[]){
    if ((str[0]=='\0' || str1[0]=='\0')|| str2[0]=='\0')
    {
        return;
    }
    if (str[0]==str1[0])
    {
        str[0]=str2[0];
        replace_char(str,str1,str2);
    }
    else{
        replace_char(str+1,str1,str2);
    }
}
int main(){
    char str[7]="abacd";
    char str1[]="a";
    char str2[]="x";
    replace_char(str,str1,str2);
    for (int i = 0; i < 8; i++)
    {
        cout<<str[i];
    }
}