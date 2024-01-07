class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
      
        int i=0;
          char ans=letters[i];
        int j=letters.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                j=mid-1;
            }
            else{
i=mid+1;
            }
        }
        return ans;
    }
}; 
// a b c d e