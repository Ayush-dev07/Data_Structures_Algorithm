// Leetcode problem : 167 (Two Sum II)

#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        int n = nums.size();
        for (int i=0; i<n; i++){
            int req = target - nums[i];
            if (sum.find(req) != sum.end()){
                return {sum[req], i+1};
            }
        sum[nums[i]]=i+1;
        }
        return {};
    }
};