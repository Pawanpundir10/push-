class Solution {
public:
    int hammingWeight(int n) {
        return bitset<32>(n).count();
    }
};