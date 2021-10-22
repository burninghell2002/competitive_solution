// https://leetcode.com/problems/symmetric-tree/
#include<bits/stdc++.h>
#include "TreeNode2.h"
using namespace std;
bool helper(TreeNode *root1, TreeNode *root2){
    if(root1==NULL || root2==NULL)return root1==root2;
    if(root1->val!=root2->val)return false;
    else return helper(root1->left, root2->right) && helper(root1->right, root2->left);
}
bool isSymmetric(TreeNode* root) {
    if(root==NULL)return true;
    return helper(root->left, root->right);
}
int main()
{

    return 0;
}