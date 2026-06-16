#include<iostream>
#include<vector>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x){
        val = x;
        left = right = NULL;
    }

};
class Solution {
public:
    void inorder(TreeNode* root,vector<int> &vec){
        if(root == NULL)
        return;
        
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        inorder(root, vec);
        return vec;
    }
};
int main(){
    Solution s1;
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = s1.inorderTraversal(root);
    for(int val : result){
        cout << val << " ";
    }
    return 0;
}