class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
         unordered_set<int> all_unique_ors;
        unordered_set<int> current_subarray_ors_ending_prev;

        for (int x : arr) {
            unordered_set<int> new_subarray_ors_ending_current;
            new_subarray_ors_ending_current.insert(x);

            for (int y : current_subarray_ors_ending_prev) {
                new_subarray_ors_ending_current.insert(y | x);
            }
            
            all_unique_ors.insert(new_subarray_ors_ending_current.begin(),
                                  new_subarray_ors_ending_current.end());
            
            current_subarray_ors_ending_prev = new_subarray_ors_ending_current;
        }

        return all_unique_ors.size();
    }
};