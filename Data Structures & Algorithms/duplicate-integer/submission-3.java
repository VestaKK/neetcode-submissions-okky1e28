class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> set = new HashSet<Integer>();

        for (int i = 0; i<nums.length; i++) {
            int n = nums[i];
            
            if (set.contains(n)) {
                return true;
            }

            set.add(n);
        }

        return false;
    }
}