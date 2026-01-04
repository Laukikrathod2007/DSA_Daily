class Solution {
public:
    vector<int> subarraySum(vector<int>& arr, long long target) {
        long long cur = 0;
        int left = 0;

        for (int right = 0; right < arr.size(); right++) {
            cur += arr[right];

            while (cur > target && left <= right) {
                cur -= arr[left];
                left++;
            }

            if (cur == target) {
                return {left + 1, right + 1}; 
            }
        }

        return {-1}; 
    }
};
