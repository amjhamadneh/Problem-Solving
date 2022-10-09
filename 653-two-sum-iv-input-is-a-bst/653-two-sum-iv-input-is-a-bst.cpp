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
private:
    map<int,int>mp;
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        
        if(mp[k - root->val] > 0) return true;
        mp[root->val]++;
        return findTarget(root->left, k) || findTarget(root->right, k);
        
        return false;
    }
};