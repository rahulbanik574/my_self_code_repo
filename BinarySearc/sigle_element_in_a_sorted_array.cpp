#include<iostream>
#include<vector>
using namespace std ;

int search(vector<int>& arr)
{
    int ans =0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
vector<int> arr;
arr={1,2,2,3,3};
cout<<search(arr);
}
