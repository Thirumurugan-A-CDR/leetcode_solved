import java.util.*;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        List<Integer> count = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            HashSet<Character> sdupli = new HashSet<>();
            int c = 0;
            for (int j = i; j < n; j++) {
                char ch = s.charAt(j);
                if (!sdupli.add(ch)) {
                    break;
                }
                c++;
            }
            count.add(c);
        }
        int max = 0;
        for (int val : count) {
            if (max < val) {
                max = val;
            }
        }

        return max;
    }
}