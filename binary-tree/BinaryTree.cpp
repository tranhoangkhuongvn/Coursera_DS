
#include "BinaryTree.h"
#include <iostream>

void BinaryTree::insert_node(TreeNode* root, const T& newData)
{
  if (!root) //Empty tree
  {
    root = TreeNode(newData);
  }

  if (newData < root.data)
  {
    insert_node(root.left, newData);
  }
  else if (newData > root.data)
  {
    insert_node(root.right, newData);
  }
}

void BinaryTree::inOrder(TreeNode * root) {
  //TODO
}

void BinaryTree::preOrder(TreeNode * root) {
  //TODO
}

void BinaryTree::postOrder(TreeNode * root) {
  //TODO
}
