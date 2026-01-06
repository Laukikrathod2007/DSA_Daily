class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        if (k > n) return 0;

        // Compute XOR of the first window of size k
        int currentXOR = 0;
        for (int i = 0; i < k; i++) {
            currentXOR ^= arr[i];
        }

        int maxXOR = currentXOR;

        // Slide the window from index 1 to n-k
        for (int i = 1; i <= n - k; i++) {
            // Remove the element going out of the window
            currentXOR ^= arr[i - 1];
            // Add the new element coming into the window
            currentXOR ^= arr[i + k - 1];

            // Update maximum XOR
            maxXOR = max(maxXOR, currentXOR);
        }

        return maxXOR;
    }
};
