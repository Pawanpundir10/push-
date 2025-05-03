class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        int minRotations = INT_MAX;

        for (int candidate = 1; candidate <= 6; candidate++) {
            bool possibleTop = true;
            int rotationsTop = 0;
            for (int i = 0; i < n; i++) {
                if (tops[i] != candidate && bottoms[i] != candidate) {
                    possibleTop = false;
                    break;
                }
                if (tops[i] != candidate && bottoms[i] == candidate) {
                    rotationsTop++;
                }
            }

            bool possibleBottom = true;
            int rotationsBottom = 0;
            for (int i = 0; i < n; i++) {
                if (tops[i] != candidate && bottoms[i] != candidate) {
                    possibleBottom = false;
                    break;
                }
                if (bottoms[i] != candidate && tops[i] == candidate) {
                    rotationsBottom++;
                }
            }

            if (possibleTop) minRotations = min(minRotations, rotationsTop);
            if (possibleBottom) minRotations = min(minRotations, rotationsBottom);
        }

        return minRotations == INT_MAX ? -1 : minRotations;
    }
};
