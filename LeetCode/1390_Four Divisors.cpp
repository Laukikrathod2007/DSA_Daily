class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) { 
            int c = 0, s = 0;

            for (int i = 1; i <= x; i++) {  
                if (x % i == 0) {
                    c++;    
                    s += i;
                }
                if (c > 4) break;  
            }

            if (c == 4) ans += s;  
        }

        return ans;
    }
};
