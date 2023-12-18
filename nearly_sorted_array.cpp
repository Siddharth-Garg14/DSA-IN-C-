#include<bits/stdc++.h>
#include<vector>
using namespace std;

int nearly_sorted(vector <int> arr, int target)
{
    int  s=0;
    int e=arr.size() -1;
    int mid=s+(e-s)/2;

    while (s<=e)
    {
        if (arr[mid]==target)
        {
            return mid;
        }
        if ((mid-1>=s) && arr[mid-1]==target)
        {
            return mid-1;
        }
        if ((mid+1<=e) && arr[mid+1]==target)
        {
            return mid+1;
        }
        if (arr[mid]>target)
        {
            e=mid-2;
        }
        else
        {
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}


int main()
{
   vector <int> arr {3,10,20,40};
   int target=40;
   int ans=nearly_sorted(arr,target); 
   cout<<ans;
}