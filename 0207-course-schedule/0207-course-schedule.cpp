class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> arr(numCourses);
        vector<vector<int>> edge(numCourses);

        vector<bool> sexxy(numCourses, true);
        
        for(auto x: prerequisites){
            arr[x[0]]++;
            edge[x[1]].push_back(x[0]);
        }

        queue<int> q;

        for(int i = 0; i < numCourses; i++){
            if(arr[i]==0){
                q.push(i);
            }
        }


        while(!q.empty()){
            int node = q.front();
            q.pop();
            sexxy[node] = false;

            for(auto x: edge[node]){
                arr[x]--;
                if(arr[x] == 0) q.push(x);
            }
        }

        for(auto x: sexxy)
            {
                if(x == true) return false;
            }

        return true;
    }
};