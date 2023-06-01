#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes -Counts the nodes with at least one child in binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Description: This function counts the number of nodes in a binary tree that
 *              have at least one child. A node with at least one child means
 *              that either its left or right child (or both) is not NULL.
 *
 *              If `tree` is NULL, the function returns 0.
 *
 * Return: The number of nodes with at least one child in the binary tree,
 *         or 0 if `tree` is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
