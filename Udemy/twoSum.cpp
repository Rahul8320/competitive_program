#include <bits/stdc++.h>
using namespace std;

// vector<int> twoSum(vector<int> &nums, int target)
// {
//     unordered_map<int, int> mp;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         mp[nums[i]] = i;
//     }
//     vector<int> ans;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         auto k = mp.find(target - nums[i]);
//         if (k != mp.end() && k->second != i)
//         {
//             ans.push_back(i);
//             ans.push_back(k->second);
//             return ans;
//         }
//     }
//     return ans;
// }

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        auto it = mp.find(target - nums[i]);
        if(it == mp.end()){
            mp[nums[i]]=i;
        }else{
            return {it->second,i};
        }
    }
    return {-1,-1};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int target,n;
    cin>>n;
    vector<int> vc;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vc.push_back(k);
    }
    cin>>target;
    vector<int> ans = twoSum(vc,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout << "\n";
    return 0;
}