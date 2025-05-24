vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> ans;
    unordered_map<int, int> hm;
    
    for (int num : nums) {
        hm[num]++;
    }
    
    vector<pair<int, int>> temp;
    for (auto& entry : hm) {
        temp.push_back({entry.second, entry.first});
    }
    
    sort(temp.begin(), temp.end(), greater<pair<int, int>>());
    
    for (int i = 0; i < k; i++) {
        ans.push_back(temp[i].second);
    }
    
    return ans;
}
