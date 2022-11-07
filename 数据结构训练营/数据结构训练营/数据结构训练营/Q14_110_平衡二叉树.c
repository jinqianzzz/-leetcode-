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

/*����˼��
����Լ��Ƿ�ƽ�⣬������㣬�ٵݹ����������Ƿ�ƽ�⣨�������ֽ�Ϊ������������������������������������֪���ֽ�Ϊ���ɷֽ�������⣩��Ȼ������������˽��м�顣*/
bool isBalanced(struct TreeNode* root) {
	if (root == NULL)
		return true;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);
	return abs(leftDepth - rightDepth) < 2 && isBalanced(root->left) && isBalanced(root->right) ? true : false;
	//1.C������abs�����������������ֵ
	//2.abs(leftDepth,rightDepth)<2���Լ�������������isBalanced(root->left),isBalanced(root->right)��ͨ���ݹ��������Ƿ�������������&&�����ӣ�����true�������������ղŻ᷵��true��������������ٵ��ж�������&&��||�����ӣ�
}