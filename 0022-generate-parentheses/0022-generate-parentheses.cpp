class Solution {
public:
    bool valid(string curr) {
        int sum = 0;

        for (auto ch : curr) {
            if (ch == '(') sum++;
            else sum--;

            if (sum < 0) return false;
        }

        return sum == 0;
    }

    void solve(string &curr, vector<string>& ans, int n) {
        if (curr.size() == n) {
            if (valid(curr))
                ans.push_back(curr);

            return;  // <-- important
        }

        curr.push_back('(');
        solve(curr, ans, n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr, ans, n);
        curr.pop_back();
    }

    vector<string> generateParenthesis(int n) {
        string curr;
        vector<string> ans;

        solve(curr, ans, 2 * n);

        return ans;
    }
};