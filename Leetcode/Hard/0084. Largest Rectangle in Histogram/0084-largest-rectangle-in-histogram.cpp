class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxele = 0;
        stack<int> st; // this stack store the index not the value

        for(int i=0; i<=n; i++){
            while(!st.empty() && (i == n || heights[st.top()]>=heights[i])){
                int height = heights[st.top()];
                st.pop();

                int width;
                if(st.empty()){
                    width = i;
                }else{
                    width = i-st.top()-1;
                }
                maxele=max(maxele,width*height);
            }
            st.push(i);
        }
        return maxele;   
    }
};

// TC -> O(N) + O(N)
// SC -> O(N)

