class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i <= n - k; i++) {
            unordered_map<int,int> freq;
            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }
            vector<pair<int,int>> v;
            for (auto& p : freq)
                v.push_back({p.first, p.second});
            sort(v.begin(), v.end(), [](auto& a, auto& b) {
                if (a.second != b.second) return a.second > b.second;
                return a.first > b.first;
            });
            unordered_set<int> top;
            for (int t = 0; t < v.size() && t < x; t++)
                top.insert(v[t].first);
            int sum = 0;
            for (int j = i; j < i + k; j++)
                if (top.count(nums[j])) sum += nums[j];

            ans.push_back(sum);
        }

        return ans;
    }
};
