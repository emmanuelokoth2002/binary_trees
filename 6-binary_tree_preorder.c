#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function traverses a binary tree in pre-order fashion,
 *              starting from the root node and recursively visiting the left
 *              subtree first, followed by the right subtree.
 *              The value in each node is passed as a parameter to the function
 *              pointed to by `func`.
 *
 *              If `tree` or `func` is NULL, the function does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
