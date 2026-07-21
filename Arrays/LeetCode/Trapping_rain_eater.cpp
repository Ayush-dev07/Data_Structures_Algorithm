// Leetcode problem : 42 (Trapping Rain Water)

#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int result=0;
        int left=0; 
        int right=height.size()-1;
        int leftmax=height[left];
        int rightmax=height[right];
        while(left<right){
            if (leftmax<rightmax){
                left++;
                leftmax=max(leftmax,height[left]);
                result += leftmax-height[left];
            }
            else{
                right--;
                rightmax=max(rightmax,height[right]);
                result += rightmax-height[right];
            }
        }
        return result;
    }
};
//Here, using teo pointers optimal approach.
//Time complexity = O(n)
//Space complexity = O(1)