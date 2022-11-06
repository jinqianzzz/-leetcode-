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

void _PrevOrder(struct TreeNode* root, int* arr, int* pi)//子函数前面加下划线
{
    if (root == NULL)
        return;

    arr[*pi] = root->val;
    (*pi)++;
    _PrevOrder(root->left, arr, pi);//此时的pi已经是指针变量了，不是int类型，无需取地址
    _PrevOrder(root->right, arr, pi);
}


int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int size = TreeSize(root);
    int* arr = (int*)malloc(size * sizeof(int));//开辟树的节点大小的数组
    int i = 0;
    _PrevOrder(root, arr, &i);//arr是存入输出数据的数组，i来控制存入数组时的下标，i要传实参（也可以设置为全局变量）
    *returnSize = size;//returnSize是为了让设计接口的人知道这个数组有多大
    return arr;
}