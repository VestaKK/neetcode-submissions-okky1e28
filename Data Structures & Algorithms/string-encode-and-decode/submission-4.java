class Solution {

    public String encode(List<String> strs) {

        StringBuilder sb = new StringBuilder();

        for (String str : strs) {
            sb.append(str);
            sb.append('\n');
        }
        return sb.toString();
    }

    public List<String> decode(String str) { 
        List<String> out = new ArrayList<>();
        StringBuilder sb = new StringBuilder();
        for (Character c : str.toCharArray()) {
            if (c == '\n') {   
                out.add(sb.toString());
                sb.setLength(0);
            } else {
                sb.append(c);
            }
        }
        return out;
    }
}
