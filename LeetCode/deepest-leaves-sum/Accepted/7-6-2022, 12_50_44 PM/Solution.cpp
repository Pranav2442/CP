// https://leetcode.com/problems/deepest-leaves-sum

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
    int deepestLeavesSum(TreeNode* root) {
        int sum=0;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return sum;
        }
        int ans=0;
        
    
        while(!q.empty()){
        
            int size=q.size();
            vector<int> temp;
            int last=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                temp.push_back(node->val);
                
                
            }
            sum=accumulate(temp.begin(),temp.end(),0);
            ans=sum;
            
            
        }
        return ans;
        
    }
};