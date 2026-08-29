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

        vector<int> row(n+1,false);
        vector<int> column(n+1,false);

        for(int i=0; i<n ; i++){
             fill(row.begin(), row.end(), false);
             fill(column.begin(), column.end(), false);
            for(int j=0; j<n; j++){
                if(row[matrix[i][j]]==true) return false;
                row[matrix[i][j]]=true;

                  if(column[matrix[j][i]]==true) return false;
                column[matrix[j][i]]=true;
            }
           if(!checkhash(row)) return false;
           if(!checkhash(column)) return false;
          
        }

      
        return true;
    }
};