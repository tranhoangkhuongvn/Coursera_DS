/**
 * BinaryTree auxiliary definitions
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>, Eric Huber
 */

#pragma once

#include "BinaryTree.h"

// This class definition doesn't have full functionality defined yet.
// You might want to try implementing some more features yourself.
// For example, you need a public method that allows adding a left or
// right child, and so on.

// Note that this .hpp file is just another header file, to be included
// by the first header file. The idea is that templated class code needs
// to be defined in headers, but you still might want to neatly separate
// the code into separate files.

// We still wrote the preprocessor directives shown above, to illustrate
// a common way to handle this situation: If the users mistakenly include
// the wrong header when they use your library, it won't matter this way,
// because either header will correctly pull in the other header.

#include <iostream>

template <typename T>
typename BinaryTree<T>::TreeNode* BinaryTree<T>::insert_node(TreeNode* root, const T& newData)
{
  if (!root) //Empty tree
  {
    TreeNode* newNode = new TreeNode(newData);
    return newNode;
  }

  if (newData < root->data)
  {
    root->left = insert_node(root->left, newData);
  }
  else if (newData > root->data)
  {
    root->right = insert_node(root->right, newData);
  }
  return root;
}

template <typename T>
void BinaryTree<T>::inOrderTraversal(TreeNode * root) {
  //TODO
  if (!root)
  {
    return;
  }
  inOrderTraversal(root->left);
  std::cout << root->data << " ";
  inOrderTraversal(root->right);
}

template <typename T>
void BinaryTree<T>::preOrderTraversal(TreeNode * root) {
  //TODO
}

template <typename T>
void BinaryTree<T>::postOrderTraversal(TreeNode * root) {
  //TODO
}

template <typename T>
typename BinaryTree<T>::TreeNode* BinaryTree<T>::find(const T& data)
{

}

template <typename T>
void BinaryTree<T>::delete_node(const T& data)
{

}

template <typename T>
int BinaryTree<T>::get_tree_size()
{

}
