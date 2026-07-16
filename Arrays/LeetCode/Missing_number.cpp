// Leetcode problem : 268 (Missing number)

#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int n = nums.size();
        for (int i=0; i<n; i++){
            ans ^= i;
            ans ^=nums[i];
        }
        ans ^= n;
        return ans;
    }
};

//Time complexity =O(n)
//Space complexity = O(1)