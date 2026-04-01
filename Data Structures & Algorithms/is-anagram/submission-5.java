class Solution {

    public Map<Character, Integer> getCount(String str) {

        Map<Character, Integer> count = new HashMap<Character, Integer>();

        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
    
            if (!count.containsKey(c)) {
                count.put(c, 0);
            } else {
                int currentCount = count.get(c);
                count.put(c, currentCount + 1);
            }
        }

        return count;
    }

    public boolean isAnagram(String s, String t) { 

        if (s.length() != t.length()) {
            return false; 
        }

        Map<Character, Integer> countS = getCount(s);
        Map<Character, Integer> countT = getCount(t);



        return countS.equals(countT);
    }
}
