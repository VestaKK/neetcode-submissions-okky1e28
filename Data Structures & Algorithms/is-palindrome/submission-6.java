class Solution {
    public boolean isPalindrome(String s) { 

        int l=0, r=s.length() - 1; 

        while (l <= r) {

            

            

            char lchar = s.charAt(l);
            while (l < r && !Character.isLetterOrDigit(lchar)) {
                l++;
                lchar = s.charAt(l);
            }

            char rchar = s.charAt(r);
            while (r > l && !Character.isLetterOrDigit(rchar)) {
                r--;
                rchar = s.charAt(r);
            }

            if (l > r) return true;

            if (Character.toLowerCase(lchar) != Character.toLowerCase(rchar)) {
                return false; 
            } 

            l++;
            r--;
        } 

        return true;
    }
}
