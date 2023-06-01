#include "binary_trees.h"

/**
 * binary_tree_height - function to measure binary tree height
 * @tree: pointer to root node of binary tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left > right) ? left : right);
}
