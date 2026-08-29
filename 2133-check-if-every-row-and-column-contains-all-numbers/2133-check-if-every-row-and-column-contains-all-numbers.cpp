class Solution {
public:
    bool checkhash(vector<int> hash){
        for(int i=1 ; i<hash.size(); i++){
            if(hash[i]==false) return false;
        }
        return true;


    }


    bool checkValid(vector<vector<int>>& matrix) {
        int n= matrix.size();

        vector<int> hash(n+1,false);

        for(int i=0; i<n ; i++){
             fill(hash.begin(), hash.end(), false);
            for(int j=0; j<n; j++){
                if(hash[matrix[i][j]]==true) return false;
                hash[matrix[i][j]]=true;
            }
           if(!checkhash(hash)) return false;
          
        }

        for(int i=0; i<n ; i++){
              fill(hash.begin(), hash.end(), false);
            for(int j=0; j<n; j++){
                if(hash[matrix[j][i]]==true) return false;
                hash[matrix[j][i]]=true;
            }
           if(!checkhash(hash)) return false;
         
        }
        return true;
    }
};