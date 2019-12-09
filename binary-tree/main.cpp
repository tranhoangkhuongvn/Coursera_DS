/**
 * An empty BinaryTree.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

#include "BinaryTree.h"

int main() {

  std::cout << std::endl << "Instantiating an object... (no output expected)" << std::endl;
  BinaryTree<int> t;

  std::cout << "Insert 1..." << std::endl;
  t.root_ = t.insert_node(t.root_, 1);
  std::cout << "Insert 2..." << std::endl;
  t.root_ = t.insert_node(t.root_, 2);
  std::cout << "Insert 3..." << std::endl;
  t.root_ = t.insert_node(t.root_, 3);

  std::cout << "In order traversal " << std::endl;
  t.inOrderTraversal(t.root_);
  std::cout << std::endl;

  std::cout << "(This example doesn't have the complete implementation," << std::endl
    << " so please see the other binary tree example directories for more.)" << std::endl << std::endl;

  return 0;
}
