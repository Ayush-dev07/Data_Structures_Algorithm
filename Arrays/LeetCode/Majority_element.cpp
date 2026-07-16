// Leetcode problem : 169 (Majority Element)
//Optimal solution is using Boyer-Moore Voting

#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int num=0;
        for (int i=0; i<n; i++){
            if (count==0)
                num=nums[i];
            if (num==nums[i])
                count++;
            else
                count--;
        }
        return num;
    }
};

//Time complexity = O(n)
//Space Complexity = O(1)