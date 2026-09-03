class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
        int r=0;
        int n=fruits.size();
        int maxlen=0;
        unordered_map<int,int>hash;
        while(r<n){
            hash[fruits[r]]++;

            while(hash.size()>2){
                hash[fruits[l]]--;
                if(hash[fruits[l]]==0) hash.erase(fruits[l]);
                l++;

            }
            maxlen= max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};