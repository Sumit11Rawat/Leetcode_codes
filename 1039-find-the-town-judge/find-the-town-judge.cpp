class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return 1;
        }
        if(trust.size()==0&&n!=1){
            return -1;
        }
        unordered_map<int,int>m;

        for(int i=0;i<trust.size();i++){
            m[trust[i][1]]++;
        }
        set<int>h;
        set<int>s;
        for(int i=0;i<trust.size();i++){
            h.insert(trust[i][0]);
            h.insert(trust[i][1]);
            s.insert(trust[i][1]);

        }
        vector<int>ans;
        for(auto i:h){
         ans.push_back(i);
        }
        vector<int>fans;
        for(auto i:s){
            fans.push_back(i);
        }
     int answer=-1;
      for(int i=0;i<fans.size();i++){
          if(m[fans[i]]==h.size()-1){
             answer=fans[i];
          }
      }
      for(int i=0;i<trust.size();i++){
          if(answer==trust[i][0]){
              answer=-1;
              break;
          }
      }
      return answer;
    }
};

// ans--store first unique element 
// fans--store second unique element 