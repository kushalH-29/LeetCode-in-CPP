class Solution {
public:
    bool canJump(vector<int>& nums) {
      int farthest = 0;
      for(int i=0; i<nums.size(); i++){
        if(i>farthest) return false;
        farthest = max(farthest,i+nums[i]);
        if(farthest>=nums.size()) return true;
      }  
      return true;
    }
};

// TC->O(n)
// SC->O(1)