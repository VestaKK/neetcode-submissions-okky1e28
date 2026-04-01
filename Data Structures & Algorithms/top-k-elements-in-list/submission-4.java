class Solution {
    public int[] topKFrequent(int[] nums, int k) {    
        List<Integer>[] freq = new ArrayList[nums.length + 1];

        for (int i=0; i<nums.length+1; i++) {
            freq[i] = new ArrayList<>();
        }

        Map<Integer, Integer> counts = new HashMap<>();
        for (int num : nums) {
            counts.put(num, counts.getOrDefault(num, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry  : counts.entrySet()) { 
            freq[entry.getValue()].add(entry.getKey());
        }

        int[] res = new int[k];
        int index = 0;

        for (int i = freq.length - 1; i > 0 && index < k; i--) {
            for (int n : freq[i]) {
                res[index++] = n;
            }
        }
        return res; 
    }
}
