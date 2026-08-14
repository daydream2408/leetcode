class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        int hash[256] = {0};

        for (char c : t) {
            hash[c]++;
        }

        int l = 0;
        int r = 0;
        int cnt = 0;

        int minlen = INT_MAX;
        int sindex = -1;

        while (r < s.size()) {

            // Add s[r]
            if (hash[s[r]] > 0) {
                cnt++;
            }

            hash[s[r]]--;

            // Try shrinking the window
            while (cnt == t.size()) {

                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    sindex = l;
                }

                // Remove s[l]
                hash[s[l]]++;

                if (hash[s[l]] > 0) {
                    cnt--;
                }

                l++;
            }

            r++;
        }

        if (sindex == -1)
            return "";

        return s.substr(sindex, minlen);
    }
};