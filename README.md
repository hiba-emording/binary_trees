# Binary Trees
Binary trees are hierarchical data structures where each node has at most two children: left and right. They are used for organizing data hierarchically and are fundamental in algorithms and data structures.

- **Structure**: Each node has data and references to left and right children.
- **Operations**: Traversal methods include pre-order, in-order, and post-order.
- **Properties**:
  - **Height**: Maximum path length from the root to a leaf.
  - **Balanced Trees**: Height difference between subtrees is at most one.
  - **Full Trees**: Nodes have zero or two children.
  - **Complete Trees**: All levels, except possibly the last, are fully filled.

### 0x1D. C - Binary trees

## Overview
This project provides implementations of various functions related to binary trees in the C programming language.

## Files

| File                             | Description                                                                       |
|----------------------------------|-----------------------------------------------------------------------------------|
| **`binary_trees.h`**             | Header file providing declarations for binary tree functions.                      |
| **`binary_tree_node.c`**         | Function to create a binary tree node.                                           |
| **`binary_tree_insert_left.c`**  | Function to insert a node as the left-child of another node.                      |
| **`binary_tree_insert_right.c`** | Function to insert a node as the right-child of another node.                     |
| **`binary_tree_delete.c`**       | Function to delete an entire binary tree.                                         |
| **`binary_tree_is_leaf.c`**      | Function to check if a node is a leaf (has no children).                           |
| **`binary_tree_is_root.c`**      | Function to check if a given node is a root.                                       |
| **`binary_tree_preorder.c`**     | Function to traverse a binary tree using pre-order traversal.                      |
| **`binary_tree_inorder.c`**      | Function to traverse a binary tree using in-order traversal.                        |
| **`binary_tree_postorder.c`**    | Function to traverse a binary tree using post-order traversal.                      |
| **`binary_tree_height.c`**       | Function to measure the height of a binary tree.                                   |
| **`binary_tree_depth.c`**        | Function to measure the depth of a node in a binary tree.                          |
| **`binary_tree_size.c`**         | Function to measure the size (number of nodes) of a binary tree.                   |
| **`binary_tree_leaves.c`**       | Function to count the leaves in a binary tree.                                     |
| **`binary_tree_nodes.c`**        | Function to count the nodes with at least one child in a binary tree.               |
| **`binary_tree_balance.c`**      | Function to measure the balance factor of a binary tree.                           |
| **`binary_tree_is_full.c`**      | Function to check if a binary tree is full.                                        |
| **`binary_tree_is_perfect.c`**   | Function to check if a binary tree is perfect.                                     |
| **`binary_tree_sibling.c`**      | Function to find the sibling of a node.                                            |
| **`binary_tree_uncle.c`**        | Function to find the uncle of a node.                                              |

