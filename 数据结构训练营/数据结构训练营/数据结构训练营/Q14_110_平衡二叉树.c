/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
	if (root == NULL)
		return 0;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);
	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}

/*分治思想
检查自己是否平衡，如果满足，再递归检查左子树是否平衡（左子树分解为自身，左子树的左子树，左子树的右子树，知道分解为不可分解的子问题），然后右子树，如此进行检查。*/
bool isBalanced(struct TreeNode* root) {
	if (root == NULL)
		return true;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);
	return abs(leftDepth - rightDepth) < 2 && isBalanced(root->left) && isBalanced(root->right) ? true : false;
	//1.C语言中abs（）函数用来求绝对值
	//2.abs(leftDepth,rightDepth)<2即自己满足条件，再isBalanced(root->left),isBalanced(root->right)，通过递归检测左右是否满足条件，用&&来连接，都是true，整个函数最终才会返回true（启发，返回真假的判断条件用&&和||来连接）
}