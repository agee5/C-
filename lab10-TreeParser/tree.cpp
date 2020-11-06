#include "tree.h"

BinarySearchTree::Node::Node(string s, Node* parent=nullptr, 
                                       Node* left=nullptr, 
                                       Node* right=nullptr )
{
  data_=s;
  parent_ = parent;
  left_ = left;
  right_ = right;
}

BinarySearchTree::BinarySearchTree()
{
  root_ = nullptr;
  count_ = 0;
}

void BinarySearchTree::insert(string str)
{
  count_++;
  insertHelper(root_, nullptr, str);
}

void BinarySearchTree::insertHelper(Node* &rootOfSubtree, Node* parent, string stringToInsert)
{
  if (!rootOfSubtree)  /// null root
    rootOfSubtree = new Node(stringToInsert, parent, nullptr, nullptr);
  else                 /// root of subtree isn't null
    if (rootOfSubtree->data_ < stringToInsert) /// insert on the right
      insertHelper(rootOfSubtree->right_, rootOfSubtree, stringToInsert);
    else                                       /// insert of the left
      insertHelper(rootOfSubtree->left_, rootOfSubtree, stringToInsert);
}

void BinarySearchTree::inOrderHelper(Node* rootOfSubtree)
{
  if (rootOfSubtree)  /// not null root
  {
    inOrderHelper(rootOfSubtree->left_);
    cout << rootOfSubtree->data_ << " | ";
    inOrderHelper(rootOfSubtree->right_);
  }
}

void BinarySearchTree::preOrderHelper(Node* rootOfSubtree)
{
  if (rootOfSubtree)  /// not null root
  {
    cout << rootOfSubtree->data_ << " | ";
    preOrderHelper(rootOfSubtree->left_);
    preOrderHelper(rootOfSubtree->right_);
  }
}

void BinarySearchTree::postOrderHelper(Node* rootOfSubtree)
{
  if (rootOfSubtree)  /// not null root
  {
    postOrderHelper(rootOfSubtree->left_);
    postOrderHelper(rootOfSubtree->right_);
    cout << rootOfSubtree->data_ << " | ";
  }
}

int BinarySearchTree::heightHelper(Node* rootOfSubtree)
{
  if (!rootOfSubtree) return 0; /// not null root has height 0
  int rightHeight = heightHelper(rootOfSubtree->right_);
  int leftHeight = heightHelper(rootOfSubtree->left_);
  return 1 + (rightHeight>leftHeight?rightHeight:leftHeight);
}

int BinarySearchTree::countNodesHelper(Node* rootOfSubtree)
{
  if (!rootOfSubtree) return 0; /// not null root has height 0
  int rightCount = countNodesHelper(rootOfSubtree->right_);
  int leftCount = countNodesHelper(rootOfSubtree->left_);
  return 1 + rightCount + leftCount;
}

bool BinarySearchTree::isMemberHelper(Node* rootOfSubtree, string str)
{
  if (!rootOfSubtree) return false; /// not null root is not found
  if (rootOfSubtree->data_ == str) return true;
  if (rootOfSubtree->data_ < str)
    return isMemberHelper(rootOfSubtree->right_, str);
  else 
    return isMemberHelper(rootOfSubtree->left_, str);
}
