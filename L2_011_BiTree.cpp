#include <iostream>
#include <queue>
using namespace std;
typedef struct node
{
  int data;
  struct node *left, *right;
} BTnode, *BiTree;

int flag, n;
queue<BiTree> q;
BiTree InPostRstoreTree(int in[], int post[], int n)
{
  if (n == 0)
    return NULL; //说明该节点已经没有左子树了，作为退出条件
  BiTree bt;
  bt = (BTnode *)malloc(sizeof(BTnode));
  bt->data = post[n - 1]; //后序遍历的最后一个节点为根节点，构建树之后先找左子树
  int i;                  //然后找到对应中序遍历该点，其左右分别是左右子树
  for (i = 0; i < n; i++)
  {
    if (in[i] == post[n - 1])
      break; //找当前根节点，记住当前位置i
  }
  bt->left = InPostRstoreTree(in, post, i);
  bt->right = InPostRstoreTree(in + i + 1, post + i, n - i - 1); //找右子树时开始重新修订范围
  return bt;
}
BiTree PreInRstoreTree(int pre[], int in[], int n)
{
  if (n == 0)
    return NULL; //说明该节点已经没有左子树了，作为退出条件
  BiTree bt;
  bt = (BTnode *)malloc(sizeof(BTnode));
  bt->data = pre[0]; //前序遍历的第一个节点为根节点，构建树之后先找左子树
  int i;             //然后找到对应中序遍历该点，其左右分别是左右子树
  for (i = 0; i < n; i++)
  {
    if (in[i] == pre[0])
      break; //找当前根节点，记住当前位置i
  }
  bt->left = PreInRstoreTree(pre + 1, in, i);
  bt->right = PreInRstoreTree(pre + i + 1, in + i + 1, n - i - 1); //找右子树时开始重新修订范围
  return bt;
}
void LevelOrder(BiTree T)
{
  BiTree t;
  if (!T)
    return;
  q.push(T);
  while (!q.empty())
  {
    t = q.front();
    q.pop();
    if (flag == 0)
    {
      printf("%d", t->data);
      flag = 1;
    }
    else
    {
      printf(" %d", t->data);
    }
    if (t->left)
    {
      q.push(t->left);
    }
    if (t->right)
    {
      q.push(t->right);
    }
  }
}
void LevelMirrorOrder(BiTree T)
{
  BiTree t;
  if (!T)
    return;
  q.push(T);
  while (!q.empty())
  {
    t = q.front();
    q.pop();
    if (flag == 0)
    {
      printf("%d", t->data);
      flag = 1;
    }
    else
    {
      printf(" %d", t->data);
    }
    if (t->right)
    {
      q.push(t->right);
    }
    if (t->left)
    {
      q.push(t->left);
    }
  }
}

void PreOrder(BiTree root, vector<int> &vi)
{ //前序遍历
  if (root == NULL)
    return;
  vi.push_back(root->data);
  PreOrder(root->left, vi);
  PreOrder(root->right, vi);
}

void PreOrderMirror(BiTree root, vector<int> &vi)
{ //前序镜像遍历
  if (root == NULL)
    return;
  vi.push_back(root->data);
  PreOrderMirror(root->right, vi);
  PreOrderMirror(root->left, vi);
}
void PostOrder(BiTree root, vector<int> &vi)
{ //后序遍历
  if (root == NULL)
    return;
  PostOrder(root->left, vi);
  PostOrder(root->right, vi);
  vi.push_back(root->data);
}
void PostOrderMirror(BiTree root, vector<int> &vi)
{ //后序镜像遍历
  if (root == NULL)
    return;
  PostOrderMirror(root->right, vi);
  PostOrderMirror(root->left, vi);
  vi.push_back(root->data);
}
void TreeMirror(BiTree root)
{ //镜像树
  if (root == NULL)
    return;
}
int main()
{
  BiTree T;
  int *pre, *in, *post;
  int i;
  cin >> n;
  pre = (int *)malloc(sizeof(int) * n);
  in = (int *)malloc(sizeof(int) * n);
  post = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
    cin >> in[i];
  for (i = 0; i < n; i++)
    cin >> pre[i];

  flag = 0;
  T = PreInRstoreTree(pre, in, n);
  //T = PreInRstoreTree(pre, in, n);
  LevelMirrorOrder(T);
  cout << endl;
  return 0;
}
