class Solution {
public:
    int distributeCandies(vector<int>& n) {
          unordered_set<int> comp;
          for(int i: n){
            comp.insert(i);
          }
          return min(comp.size(),n.size()/2);
    }
};