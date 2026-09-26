class Solution {
private:
    int countAtMost(vector<int>& nums,int limit){
        if(limit<0){
            return 0;
        }
        int left=0;
        int currentsum=0;
        int count=0;

        for(int right=0; right<nums.size(); right++){
            currentsum+=nums[right];
            while(currentsum>limit){
                currentsum-=nums[left];
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countAtMost(nums,goal)-countAtMost(nums,goal-1);
    }
};

// TC->O(n)
// SC->O(1)