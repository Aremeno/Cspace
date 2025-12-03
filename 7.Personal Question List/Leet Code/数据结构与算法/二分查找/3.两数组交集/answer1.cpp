class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(int i = 0 ; i < nums1.size() ; i++) {
            if(i> 0 && nums1[i] == nums1[i - 1]) {
                continue;
            }

            if(binary_search(nums2.begin(),nums2.end(),nums1[i])) {
                result.push_back(nums1[i]);
            }
        }
        return result;
    }
};