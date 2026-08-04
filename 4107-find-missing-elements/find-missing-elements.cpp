class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        auto [min_it, max_it] = std::minmax_element(nums.begin(), nums.end());
        int min_val = *min_it;
        int max_val = *max_it;

        std::unordered_set<int> num_set(nums.begin(), nums.end());
        std::vector<int> missing;

        for (int i = min_val + 1; i < max_val; ++i) {
            if (num_set.find(i) == num_set.end()) {
                missing.push_back(i);
            }
        }
        return missing;

    }
};