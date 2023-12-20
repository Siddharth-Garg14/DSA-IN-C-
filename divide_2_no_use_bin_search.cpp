#include<bits/stdc++.h>
using namespace std;

int divide(int divs,int divi)
{
    int ans=-1;
    int s=0;
    int e=abs(divi);
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(abs(mid*divs)==abs(divi))
        {
            ans=mid;
            break;

            //return ans;
        }
        if (abs(mid*divs)<abs(divi))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    if((divs<0 && divi<0) || (divs>0 && divi>0))
        return ans;
    else
    {
        return -ans;
    }
}


int main()
{
    int precise=3;
    int divs=7;
    int divi=22;
    int ans=divide(divs,divi);
    int step=0.1;
    for (int i = 0; i < precise; i++)
    {
        for (int j = ans; (j*divs) <= (divi); j+=step)
        {
            ans=j;
        }
        step=step/10;
    }
    cout<<ans;
}