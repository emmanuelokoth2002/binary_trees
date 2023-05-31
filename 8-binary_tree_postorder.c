#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function traverses a binary tree in post-order fashion,
 *              starting from left subtree, then traversing the right subtree,
 *              and finally visiting the root node.
 *              The value in each node is passed as a parameter to the function
 *              pointed to by `func`.
 *
 *              If `tree` or `func` is NULL, the function does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
