class Solution {


    public Map<Character, Integer> getCount(String str) {
        Map<Character, Integer> counts = new HashMap<>();
        for (int i=0; i<str.length(); i++) {
            char word = str.charAt(i);
            counts.put(word, counts.getOrDefault(word, 0) + 1);
        }
        return counts;
    }

    public List<List<String>> groupAnagrams(String[] strs) {
        Map<Map<Character, Integer>, List<String>> anagramMap = new HashMap<>();
        for (int i=0; i<strs.length; i++) {
            String word = strs[i];
            Map<Character, Integer> anagram = getCount(word);
            List<String> wordList = anagramMap.getOrDefault(anagram, new ArrayList<>());
            wordList.add(word);
            anagramMap.put(anagram, wordList);
        }
        return new ArrayList<>(anagramMap.values());
    } 
}
