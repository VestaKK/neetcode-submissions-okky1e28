class Solution {
    public int[] productExceptSelf(int[] nums) { 

        int[] prefixs = new int[nums.length];
        int[] suffixs = new int[nums.length];
        int[] out = new int[nums.length];

        int prefix = 1;
        for (int i=0; i<nums.length; i++) {
            int num = nums[i];
            prefixs[i] = prefix;
            prefix *= num;
        }

        int suffix = 1;
        for (int i=nums.length-1; i>=0; i--) {
            int num = nums[i];
            suffixs[i] = suffix;
            suffix *= num;
        }

        for (int i=0; i<nums.length; i++) {
            out[i] = prefixs[i] * suffixs[i];
        }

        return out;
    }
}  
