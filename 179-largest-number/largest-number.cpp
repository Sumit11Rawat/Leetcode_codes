class Solution {
public:
static bool compare(string& x,string& y){
    return x+y>y+x;
}
    string largestNumber(vector<int>& nums) {
       vector<string>ans;
        string fans="";
        for(auto i:nums){
            ans.push_back(to_string(i));
        }
        sort(ans.begin(),ans.end(),compare);
        for(auto i:ans){
            fans+=i;
        }
        if(fans[0]=='0'){
            return "0";
        }
        return fans;
    }
};