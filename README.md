C - Binary Trees
This repository contains implementations of various binary trees in C programming language. The provided implementations include basic binary trees, binary search trees (BST), AVL trees, and max binary heaps.

Data Structures
Basic Binary Tree
A basic binary tree node is defined as follows:
```
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;
```
Binary Search Tree (BST)
A binary search tree node, which is a type of binary tree, is defined similarly to a basic binary tree node. However, in a BST, the left child of each node contains a value less than the node's value, and the right child contains a value greater than the node's value.
```
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

```
AVL Tree
An AVL tree is a self-balancing binary search tree where the heights of the two child subtrees of any node differ by at most one. The AVL tree node structure is similar to that of a basic binary tree node.
```
typedef struct AVLNode {
    int data;
    struct AVLNode* left;
    struct AVLNode* right;
    int height;
} AVLNode;

```
Max Binary Heap
A max binary heap is a complete binary tree where the value of each node is greater than or equal to the values of its children. Max binary heaps are commonly used to implement priority queues.
```
typedef struct MaxHeap {
    int* array;
    int capacity;
    int size;
} MaxHeap;
```

authors: @mammadova04 (Narmin Mammadova)
@Raid-dev (Rauf Ahmadzada)
