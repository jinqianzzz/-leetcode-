/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int TreeSize(struct TreeNode* root)
{
    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

void _PrevOrder(struct TreeNode* root, int* arr, int* pi)//�Ӻ���ǰ����»���
{
    if (root == NULL)
        return;

    arr[*pi] = root->val;
    (*pi)++;
    _PrevOrder(root->left, arr, pi);//��ʱ��pi�Ѿ���ָ������ˣ�����int���ͣ�����ȡ��ַ
    _PrevOrder(root->right, arr, pi);
}


int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int size = TreeSize(root);
    int* arr = (int*)malloc(size * sizeof(int));//�������Ľڵ��С������
    int i = 0;
    _PrevOrder(root, arr, &i);//arr�Ǵ���������ݵ����飬i�����ƴ�������ʱ���±꣬iҪ��ʵ�Σ�Ҳ��������Ϊȫ�ֱ�����
    *returnSize = size;//returnSize��Ϊ������ƽӿڵ���֪����������ж��
    return arr;
}