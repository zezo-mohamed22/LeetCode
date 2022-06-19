class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int l=0,r=products.size()-1;
        vector<vector<string>> ans;
        sort(products.begin(),products.end());
        for (int i = 0 ; i<searchWord.size(); i++){
            char ch = searchWord[i]; 
            while (l<=r &&products[l][i]!=ch){
                l++; 
            }
             while (l<=r &&products[r][i]!=ch){
                r--; 
            }   
            vector<string>cur ; 
            for(int j=l;j<l+min(3,r-l+1);j++)
                cur.push_back(products[j]);
            ans.push_back(cur);
        }
        return ans; 
    }
};