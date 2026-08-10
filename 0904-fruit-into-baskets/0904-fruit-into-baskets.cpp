class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0;
        int r=0;
        unordered_map<int,int> hash;
        
        int maxlen=0;
        while(r<fruits.size()){
            hash[fruits[r]]++;

            if(hash.size()>2){
                 hash[fruits[l]]--;
                 if(hash[fruits[l]]==0) hash.erase(fruits[l]);
                 l++;
            }
            else{
            maxlen=max(maxlen,r-l+1);}
            r++;
        }

        return maxlen;
    }
};