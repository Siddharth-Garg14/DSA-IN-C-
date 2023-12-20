#include<bits/stdc++.h>
#include<vector>
using namespace std;

int odd_occ(vector <int> array)
{
    int s=0;
    int e=array.size()-1;
    int mid=s+ (e-s)/2;

    while (s<=e)
    {
        if(s==e)
        {
            return s;
        }
        if( (mid%2) == 0)
        {
            if(array[mid]==array[mid+1])
            {
                s=mid+2;

            }
            else
                e=mid;
        
        }
        else
        {
            if (array[mid]==array[mid-1])
            {
                s=mid+1;
            }
            else
            {
                e= mid-1;
            }
            
        }
        mid=s+(e-s)/2;
    }
    return -1;


}

int main()
{
    vector <int> array {1,1,2,2,600,600,4,4,5};
    int ans=odd_occ(array);
    cout<<ans;

}