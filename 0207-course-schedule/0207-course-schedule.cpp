class Solution {
public:
 


    bool canFinish(int n, vector<vector<int>>& p) {
        //if(p.empty())return true;
        vector<int>indegree(n,0);
         
        vector<vector<int>>sexy(n);

         for(auto it: p){
            sexy[it[1]].push_back(it[0]);
            indegree[it[0]]++;
         }
         

         queue<int>q;

         for(int i=0; i<n;i++){
            if(indegree[i]==0) q.push(i);
         }

          while(!q.empty()){
            int curr=q.front();
            q.pop();

            for(auto neighbour:sexy[curr]){

                  indegree[neighbour]--;
                  if(indegree[neighbour]==0) q.push(neighbour);
                
            }

          }
            for(auto it: indegree){
                if(it!=0) return false;
            }

        return true;
    }
};