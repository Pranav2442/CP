// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return 0;
        }
        int ans=0;
        while(!q.empty()){
            int maxi=INT_MIN;
            vector<int> level;
            int levelnum;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
                level.push_back(temp->val);
                
            }
            if(accumulate(level.begin(),level.end(),0)>maxi){
                maxi=accumulate(level.begin(),level.end(),0);
                ans=levelnum;
                levelnum++;
                
            }
            
        }
        return ans;
    }
};