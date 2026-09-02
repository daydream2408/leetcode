class Solution {
public:



    int characterReplacement(string s, int k) {
         int maxfreq = 0;
         int r=0;
int maxlen=0;
int l=0;
vector<int>hash(26,0);

while(r<s.size()){
        hash[s[r]-'A']++;

        maxfreq=max(maxfreq,hash[s[r]-'A']);
        int change= (r-l+1)-maxfreq;

        if(change<=k){
            maxlen=max(maxlen,r-l+1);
        }
        else{
            hash[s[l]-'A']--;
          //  for(int i=0; i<25;i++) maxfreq=max(maxfreq,hash[i]);
            l++;
        }
        r++;
    }
    return maxlen;
}
};