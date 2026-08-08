class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int N = nums.size();
        int i=0;
        for(int j=1;j<N;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};