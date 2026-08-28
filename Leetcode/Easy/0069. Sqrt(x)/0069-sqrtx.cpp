class Solution {
public:
    int mySqrt(int x) {
        if(2>x){
            return x;
        }
        int low = 0;
        int high = x;
        int ans = 1;
        while(low<=high){
            long long  mid = low + (high - low) / 2;
            if(mid*mid <= x){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};

// TC -> O(logn)
// SC -> O(1)