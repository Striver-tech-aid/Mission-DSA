class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        multiset<int> st(nums.begin() , nums.end() );

        auto it = st.end();

        advance(it , -k);

        return *it;
        
    }
};
