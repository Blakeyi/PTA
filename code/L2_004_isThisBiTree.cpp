#include<iostream>
#include<vector>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;

};
void InsertNode(Node* &root, int data)//前序遍历构造二叉树
{
	if (root==NULL)//如果根节点为空，则新建一个根节点，并将其左右子树置为空
	{
		root = new Node;
		root->left = root->right = NULL;
		root->data = data;
		return;
	}
	
	
	if (data < root->data)
		InsertNode(root->left, data);
	else
		InsertNode(root->right, data);
	return;
}
void  preOrder(Node *root, vector<int> &vi)//前序遍历
{
	if (root == NULL)return;
	vi.push_back(root->data);
	preOrder(root->left, vi);
	preOrder(root->right, vi);
	
}

void  preOrderMirror(Node *root, vector<int> &vi)//前序镜像遍历
{
	if (root == NULL)return;
	vi.push_back(root->data);
	preOrderMirror(root->right, vi);
	preOrderMirror(root->left, vi);


}
void postOrder(Node *root, vector<int> &vi)
{
	if (root == NULL) return;
	postOrder(root->left, vi);
	postOrder(root->right, vi);
	vi.push_back(root->data);
}
void postOrderMirror(Node *root, vector<int> &vi)
{
	if (root == NULL) return;
	postOrderMirror(root->right, vi);
	postOrderMirror(root->left, vi);
	vi.push_back(root->data);
}
vector<int> origin, pre, preM, postM, post;
int main()
{
	int num, dat;
	Node *root = NULL;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> dat;
		InsertNode(root, dat);
		origin.push_back(dat);
	}
	preOrder(root, pre);
	preOrderMirror(root, preM);
	postOrder(root, post);
	postOrderMirror(root, postM);
	if (origin==pre)
	{
		cout << "YES" << endl;
		for (int i = 0; i < num; i++)
		{
			cout << post[i];
			if (i<num-1)
			{
				cout << " ";
			}
		}
		
	}
	else if (origin == preM)
	{
		cout << "YES" << endl;

		for (int i = 0; i < num; i++)
		{
			cout << postM[i];
			if (i<num - 1)
			{
				cout << " ";
			}
		}
	}
	else
		cout << "NO";

}