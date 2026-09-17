class Solution {
public:

bool checkeachnode(vector<vector<int>>&graph, int start,vector<int>color){
     int n=graph.size();
      //  vector<int>color(n,-1);
        color[start]=0;
        queue<int>q;
        //int colour=0;
        q.push(start);


        while(!q.empty()){
            int node= q.front();
           // vis[node]=1;
            q.pop();
           

            for(int neighbour: graph[node]){
                if(color[neighbour]==-1){
                    color[neighbour]= !color[node];
                      q.push(neighbour);
                }
                else if(color[neighbour]==color[node]) return false;
            }
        }
        return true;

}
    bool isBipartite(vector<vector<int>>& graph) {
         int n = graph.size();

        vector<int>color(n,-1);

        for(int i =0 ; i <n; i++){
            if(color[i]==-1){
               if( checkeachnode(graph,i,color)==false){
                return false;
               }
            }
        }

        
       return true;
    }
};