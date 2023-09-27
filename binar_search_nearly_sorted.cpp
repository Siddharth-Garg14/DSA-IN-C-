#include<iostream>
#include<vector>
using namespace std;

int binary_nearly(vector<int> arr,int target)
{
    int start=0;
    int end=arr.size() -1;
    int mid = start+((end-start)/2);
    while (start<=end)
    {
        if (arr[mid]==target)
        {
            return mid;
        }
        else if (arr[mid+1]==target)
        {
            return mid+1;
        }
        else if (arr[mid-1]==target)
        {
            return mid-1;
        }
        else if (arr[mid]<target)
        {
            start=mid+2;
        }
        else
        {
            end=mid-2;
        }
        mid=start+((end-start)/2);
    }
    return -1;
}

int main()
{
    vector<int> a{10,3,40,20,50,80,70};
    int ans=binary_nearly(a,70);
    cout<<ans;
}