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
    int countPaths(TreeNode* root, long long targetSum){
        if(root==NULL) return 0;
        int count=0;

        targetSum-=root->val;

        if(targetSum == 0)
            count++;

        count+=countPaths(root->left, targetSum);
        count+=countPaths(root->right, targetSum);

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;

        return countPaths(root, targetSum)+ pathSum(root->left, targetSum)
             + pathSum(root->right, targetSum);;
    }
};