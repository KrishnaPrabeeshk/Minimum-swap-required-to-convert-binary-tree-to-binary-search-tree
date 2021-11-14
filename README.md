# Minimum-swap-required-to-convert-binary-tree-to-binary-search-tree
Problem statement : Given the array representation of Complete Binary Tree i.e, if index i is the parent, index 2*i + 1 is the left child and index 2*i + 2 is the right child. The task is to find the minimum number of swap required to convert it into Binary Search Tree.
example:
Input : arr[] = { 5, 6, 7, 8, 9, 10, 11 }
Output : 3
Algorithm: The idea is to use the fact that inorder traversal of Binary Search Tree is in increasing order of their value. 
So, find the inorder traversal of the Binary Tree and store it in the array and try to sort the array. The minimum number of swap required to get the array sorted will be the answer.
Time complexity:  O(n log n).
