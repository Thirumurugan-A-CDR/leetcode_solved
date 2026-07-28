class Solution {
public:
    string smallestPalindrome(string s) {
        if (s.length() == 1) return s;

        int n = s.length();
        int half = n / 2;       
        string firsthalf = "";

        for (int i = 0; i < half; i++) {
            firsthalf += s[i];
        }

        sort(firsthalf.begin(), firsthalf.end());

        string temp = firsthalf;

        if (n % 2 != 0) {
            temp += s[n / 2];
        }

        reverse(firsthalf.begin(), firsthalf.end());

        temp += firsthalf;

        return temp;
    }
};