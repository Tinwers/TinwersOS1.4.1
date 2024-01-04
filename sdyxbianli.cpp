#include <iostream>
using namespace std;
// ���ڵ�Ľṹ
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ǰ�����
void preorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    cout << root->val << " "; // �ȷ��ʸ��ڵ�
    preorderTraversal(root->left); // �ݹ����������
    preorderTraversal(root->right); // �ݹ����������
}

// �������
void inorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    inorderTraversal(root->left); // �ݹ����������
    cout << root->val << " "; // ���ʸ��ڵ�
    inorderTraversal(root->right); // �ݹ����������
}

// �������
void postorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    postorderTraversal(root->left); // �ݹ����������
    postorderTraversal(root->right); // �ݹ����������
    cout << root->val << " "; // �����ʸ��ڵ�
}
int main() {
    // ����һ���򵥵Ķ�����
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}


