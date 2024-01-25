class Solution {
public:
static bool compare(pair<int, string>& a, pair<int, string>& b){

    //if the freq of two words is same put lexalogically greater element on top
    if(a.first == b.first) return a.second < b.second;
    
    //else compare on the basis of their freq
    else return a.first > b.first;
}
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(auto i:words){
            m[i]++;
        }
        vector<pair<int,string>>p;
        for(auto it:m){
            p.push_back(make_pair(it.second,it.first));
        }
        sort(p.begin(),p.end(),compare);
        // reverse(p.begin(),p.end());
        vector<string>ans;
       for(auto it:p){
            if(k==0){
                break;
                
            }
            else{
                
                ans.push_back(it.second);
                k--;
            }
        }
    //  sort(ans.begin(),ans.end());
        return ans;
        
    }
};