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
class Solution{
    public:
    void preorder(TreeNode* root,vector<int> &vec){
        if(root == NULL)
        return;
        
        vec.push_back(root->val);
        preorder(root->left, vec);
        preorder(root->right, vec);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        preorder(root, vec);
        return vec;
    }
};
int main(){
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = s.preorderTraversal(root);
    for(int val : result){
        cout << val << " ";
    }
    return 0;
}