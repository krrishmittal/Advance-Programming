class Solution {
  public:
    void permute(string s,int l,int r,vector<string>&ans){
        if(l==r){
            ans.push_back(s);
            return ;
        }
        else{
            for(int i=l;i<r;i++){
                swap(s[l],s[i]);
                permute(s,l+1,r,ans);
                swap(s[l],s[i]);
            }
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string>ans;
        permute(s,0,s.length(),ans);
        return ans;
    }
};