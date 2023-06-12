#include<bits/stdc++.h>
using namespace std;

float geometric_sum(float a){
    if(a==0){
        return 1;
    }
    float c=geometric_sum(a-1);
    c=c+(1/(pow(2,a)));
    return c;
}
int main() {
    cout<<geometric_sum(4);
}