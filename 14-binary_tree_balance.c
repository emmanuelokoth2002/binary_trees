#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: This function measures the height of a binary tree.
 *              The height is the number of edges in the longest path from the
 *              root node to a leaf node. If `tree` is NULL, the function
 *              returns 0.
 *
 * Return: The height of the binary tree, or 0 if `tree` is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return (1 + (height_left > height_right ? height_left : height_right));
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Description: This function measures the balance factor of a binary tree.
 *              The balance factor of a binary tree is defined as the height
 *              difference between its left subtree and its right subtree.
 *              If `tree` is NULL, the function returns 0.
 *
 * Return: The balance factor of the binary tree, or 0 if `tree` is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = (int)binary_tree_height(tree->left);
	height_right = (int)binary_tree_height(tree->right);
	return (height_left - height_right);
}
