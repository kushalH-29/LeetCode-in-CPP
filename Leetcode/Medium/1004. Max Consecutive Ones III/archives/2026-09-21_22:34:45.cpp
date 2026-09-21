class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int Zerocnt = 0;
        int maxlen = 0;
        for(int right=0; right<nums.size(); right++){
            if(nums[right] == 0){
                Zerocnt++;
            }
            while(Zerocnt>k){
                if(nums[left] == 0){
                    Zerocnt--;
                }
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }     
};

// TC -> O(n)
// SC -> O(1)