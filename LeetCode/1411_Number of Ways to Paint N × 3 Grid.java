//1411. Number of Ways to Paint N × 3 Grid
//It is a medium hard problem on LeetCode.
//I have not solved it by myself i had to watch the solution for this simce i was not able to understand the pattern and then i solved it once i go a hint.
class Solution {
    public int numOfWays(int n) {
        //code here 
        final int MOD = 1000000007;
        long aba = 6, abc = 6;
        for(int i = 2; i <= n; i++){
            long newABA = (aba * 3 + abc * 2)%MOD;
            long newABC = (aba * 2 + abc * 2)%MOD;

            aba = newABA;
            abc = newABC;

        }
        return (int)((aba + abc) % MOD);
    }
}