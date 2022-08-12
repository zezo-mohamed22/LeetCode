class Solution {
public:
    
    void GetPath(TreeNode* root, TreeNode *target,vector<TreeNode*>& path)
   {
        if(root==NULL)
        {
            return ;
        }
        
        path.push_back(root);
        if(root->val==target->val)
        {

            return ;
        }
        if(root->val>target->val)
        {
            return GetPath(root->left,target,path);
        }
    
        else
        {
            return GetPath(root->right,target,path);
        }
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathP;
        vector<TreeNode*> pathQ;
        GetPath(root,p,pathP);
        GetPath(root,q,pathQ);
        map<TreeNode*,int> findmap;
        for(auto i:pathP)
        {
            findmap[i]++;
        }
        for(int i=pathQ.size()-1;i>=0;i--)
        {
            if(findmap[pathQ[i]]>0)
            {
                return pathQ[i];
            }
        }
        
      
        return NULL;       
    }
};