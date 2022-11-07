/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /*分治思想
 1.空  高度  0
 2.非空  分解子问题  左右子树最大深度+1（自己本身）
 所以先递归左子树，再递归右子树，即后序遍历*/
int maxDepth(struct TreeNode* root) {
	if (root == NULL)
		return 0;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);
	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
	//直接三目运算符return maxDepth(root->left)>maxDepth(root->right)?maxDepth(root->left)+1:maxDepth(root->right)+1;超出时间限制，先用变量储存起来比多次调用函数缩短了时间
}