class Solution {
public:
    bool pos(vector<int>&curr_small,vector<int>&curr_big,vector<int>&req_small,vector<int>&req_big){
        for(int i=0;i<26;i++){
            if(req_small[i]>curr_small[i]) return false;
            if(req_big[i]>curr_big[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int> req_small(26, 0);
        vector<int> req_big(26, 0);
        for (char ch : t) {
            if (ch >= 'a' && ch <= 'z')
                req_small[ch - 'a']++;
            else
                req_big[ch - 'A']++;
        }
        vector<int> curr_small(26, 0);
        vector<int> curr_big(26, 0);
        int s_i = -1;
        int e_i = -1;
        int prev_len = INT_MAX;
        int n = s.size();
        int l = 0, r = 0;
        while (r < n) {
            if (s[r] >= 'a' && s[r] <= 'z')
                curr_small[s[r] - 'a']++;
            else
                curr_big[s[r] - 'A']++;
            while (l <= r && pos(curr_small, curr_big, req_small, req_big)) {
                int len = r - l + 1;
                if (len < prev_len) {
                    s_i = l;
                    e_i = r;
                    prev_len = len;
                }
                if (s[l] >= 'a' && s[l] <= 'z')
                    curr_small[s[l] - 'a']--;
                else
                    curr_big[s[l] - 'A']--;
                l++;
            }
            r++;
        }
        if (s_i == -1)
            return "";
        string res;
        for (int i = s_i; i <= e_i; i++)
            res.push_back(s[i]);
        return res;
    }
};