class Solution {
private:
    int findMaxElement(vector<vector<int>>& mat,int col){
        int max_element = INT_MIN;
        int index = -1;
        int n = mat.size();
        for(int i=0;i<n;i++){
            if(mat[i][col] > max_element){
                max_element = mat[i][col];
                index = i;
            }
        }
        return index;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while(low<=high){
            int mid = (low + high)/2;
            int row = findMaxElement(mat,mid);
            int left = mid-1>=0 ? mat[row][mid-1] : -1;
            int right = mid+1<m ? mat[row][mid+1] : -1;

            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            else if(mat[row][mid]<left){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        } 
        return {-1,-1};
    }
};

// TC ->  O(N * logM);
// SC -> O(1);