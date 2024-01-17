class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for( int i=0;i<arr.size();i++){
           m[arr[i]]++;
        }
        set<int>s;
        for(int i=0;i<arr.size();i++){
            s.insert(m[arr[i]]);
        }
        if(m.size()==s.size()){
            return true;
        }
        return false;
    }
};
// 1-3
// 2-2
// 3-1