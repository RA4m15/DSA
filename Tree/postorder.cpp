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
    void postorder(TreeNode* root,vector<int> &vec){
        if(root == NULL)
        return;
        
        postorder(root->left, vec);
        postorder(root->right, vec);
        vec.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        postorder(root, vec);
        return vec;
    }
};
int main(){
    Solution s;
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = s.postorderTraversal(root);
    for(int val : result){
        cout << val << " ";
    }
    return 0;
}