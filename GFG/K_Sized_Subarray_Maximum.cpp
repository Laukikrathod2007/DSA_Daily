class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> result;

        for (int i = 0; i <= n - k; i++) {

            int maxVal = arr[i]; 

            for (int j = i; j < i + k; j++) {
                if (arr[j] > maxVal) {
                    maxVal = arr[j];
                }
            }

            result.push_back(maxVal);
        }

        return result;
    }
};
