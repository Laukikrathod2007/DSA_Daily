class Solution {
    public int minimumCost(int[] nums) {
        int a = 51, b = 51;

        for(int i  = 1; i < nums.length; i++){
            if(nums[i] < a){
                b = a;
                a = nums[i];
            }else if (nums[i] < b)
            b = nums[i];

            if(a == 1 && b == 1)
            break;
        }
        return nums[0] + a + b;
    }
}