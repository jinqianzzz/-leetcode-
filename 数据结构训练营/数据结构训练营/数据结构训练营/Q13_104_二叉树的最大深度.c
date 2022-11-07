/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /*����˼��
 1.��  �߶�  0
 2.�ǿ�  �ֽ�������  ��������������+1���Լ�����
 �����ȵݹ����������ٵݹ������������������*/
int maxDepth(struct TreeNode* root) {
	if (root == NULL)
		return 0;

	int leftDepth = maxDepth(root->left);
	int rightDepth = maxDepth(root->right);
	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
	//ֱ����Ŀ�����return maxDepth(root->left)>maxDepth(root->right)?maxDepth(root->left)+1:maxDepth(root->right)+1;����ʱ�����ƣ����ñ������������ȶ�ε��ú���������ʱ��
}