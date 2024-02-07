#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    void subsetsumHelper(int ind,int n,int sum,vector<int>& arr,  vector<int> & ans)
    {
        if(ind == n)
        {
            ans.push_back(sum);
            return;
        }
        //element taken 

subsetsumHelper(ind+1,n,sum+arr[ind],arr,ans);

//element not taken

subsetsumHelper(ind+1,n,sum,arr,ans);

    }

    vector < int > subsetSums(vector < int > arr, int n) {
    vector < int > ans;
    subsetsumHelper(0, n, 0, arr, ans);
    sort(ans.begin(), ans.end());
    return ans;
  }
};

int main() {
  vector < int > arr{3,1,2};
  solution ob;
  vector < int > ans = ob.subsetSums(arr, arr.size());
  sort(ans.begin(), ans.end());
  cout<<"The sum of each subset is "<<endl;
  for (auto sum: ans) {
    cout << sum << " ";
  }
  cout << endl;

  return 0;
}