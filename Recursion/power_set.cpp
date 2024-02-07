#include <iostream>
#include <vector>
using namespace std;

void powerset(const vector<int>& nums, int index, vector<int>& ans, vector<int>& output)
{
    if (index >= nums.size())
    {
        ans.push(output);
        return;
    }
    powerset(nums, index + 1, ans, output);

    int element = nums[index];
    output.push_back(element);
    powerset(nums, index + 1, ans, output);
    output.pop_back();  // Backtrack by removing the last element
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<vector<int>> ans;
    vector<int> output;
    powerset(nums, 0, ans, output);

    // Displaying the power set
    for (const auto& subset : ans)
    {
        cout << "{ ";
        for (const auto& element : subset)
        {
            cout << element << " ";
        }
        cout << "}\n";
    }

    return 0;
}