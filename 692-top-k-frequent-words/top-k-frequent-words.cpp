class Solution {
public:
static bool compare(pair<int, string>& a, pair<int, string>& b){

    //if the freq of two words is same put lexalogically greater element on top
    if(a.first == b.first) return a.second < b.second;
    
    //else compare on the basis of their freq
    else return a.first > b.first;
}

vector<string> topKFrequent(vector<string>& words, int k) {
    int n = words.size();
    
    //use a map to store the freq of all the words from the vector
    unordered_map<string, int> mp;
    
    for(auto x: words){
        mp[x]++;
    }
    
    //store the words with their freq in a vector to sort them
    vector<pair<int, string>> v;
    
    for(auto x: mp){
        v.push_back({x.second, x.first});
    }
    
    //sort the vector using the above defined compare function
    sort(v.begin(), v.end(), compare);
    
    //put only k elements in the ans vector
    vector<string> ans;
    for(int i=0;i<v.size();i++)
    {
        if(k)
        {
            ans.push_back(v[i].second);
            k--;
        }
    }
    
    return ans;
}
};