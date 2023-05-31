#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function traverses a binary tree in in-order fashion,
 *              starting from the left subtree, then visiting the root node,
 *              and finally traversing the right subtree.
 *              The value in each node is passed as a parameter to the function
 *              pointed to by `func`.
 *
 *              If `tree` or `func` is NULL, the function does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
