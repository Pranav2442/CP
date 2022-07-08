// https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree

class Solution {
public:
    int maxLen;
    void longestZigZag(TreeNode* root, char dir, int len) {
        if(root == nullptr) return;
        
        maxLen = max(maxLen, len);
        
		if(dir == 'l') {
            longestZigZag(root->left, 'l', 1);
            longestZigZag(root->right, 'r', len + 1);
        }
        else {
            // char == 'r'
            longestZigZag(root->right, 'r', 1);
            longestZigZag(root->left, 'l', len + 1);
        }
    }
    
    int longestZigZag(TreeNode* root) {
		maxLen = 0;
        longestZigZag(root->right, 'r', 1);
        longestZigZag(root->left, 'l', 1);
        return maxLen;
    }
};