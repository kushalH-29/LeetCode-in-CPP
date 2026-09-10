class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> prefixCountSum;
        int count = 0;
        int prefixSum = 0;

        prefixCountSum[0] = 1;

        for(int i=0; i<n; i++){ 
            prefixSum += nums[i];
            int remove = prefixSum - k;

            if(prefixCountSum.find(remove) != prefixCountSum.end()){
                count+=prefixCountSum[remove];
            }
            prefixCountSum[prefixSum]++;
        }
        return count;
    }
};


// TC -> O()