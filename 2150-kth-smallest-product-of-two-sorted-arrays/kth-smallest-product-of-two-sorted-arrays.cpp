class Solution {
public:
    long long findcount(vector<int>& nums1, vector<int>& nums2, long long midproduct) {
        long long productcount = 0;
        int n = nums2.size();

        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] >= 0) {
                int l = 0, r = n - 1, m = -1;

                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    long long product = 1LL * nums1[i] * nums2[mid];

                    if (product <= midproduct) {
                        m = mid;
                        l = mid + 1;
                    } else {
                        r = mid - 1;
                    }
                }

                productcount += (m + 1);
            } else {
                int l = 0, r = n - 1, m = n;

                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    long long product = 1LL * nums1[i] * nums2[mid];

                    if (product <= midproduct) {
                        m = mid;
                        r = mid - 1;
                    } else {
                        l = mid + 1;
                    }
                }

                productcount += (n - m);
            }
        }

        return productcount;
    }

    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        
        long long l = -1e10, r = 1e10, result = 0;

        while (l <= r) {
            long long midproduct = l + (r - l) / 2;
            long long countsmallest = findcount(nums1, nums2, midproduct);

            if (countsmallest >= k) {
                result = midproduct;
                r = midproduct - 1;
            } else {
                l = midproduct + 1;
            }
        }

        return result;
    }
};
