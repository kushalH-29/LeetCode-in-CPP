class Solution {
private:
    int countAtMost(vector<int>& nums,int k){
        if(k<0){
            return 0;
        }
        int left=0;
        int oddcnt=0;
        int Cnt=0;
        for(int right=0; right<nums.size(); right++){
            if(nums[right]%2!=0){
                oddcnt++;
            }
            while(oddcnt>k){
                if(nums[left]%2!=0){
                    oddcnt--;
                }
                left++;
            }
            Cnt+=right-left+1;
        }
        return Cnt;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countAtMost(nums,k)-countAtMost(nums,k-1);
    }
};
// TC -> O(n)
// SC -> O(1)