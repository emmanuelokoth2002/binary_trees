#include "binary_trees.h"

/**
 * _height - helper function for binary_tree_height
 * @tree: input tree
 * Return: height of the tree
 */
size_t _height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _height(tree->left);
	b = _height(tree->right);
	return (MAX(a, b) + 1);
}

/**
 * height - measures the height of binary tree
 * @tree: input tree
 * Return: height of tree
 */
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_height(tree) - 1);
}

/**
 * size - measures the size of a binary tree
 * @tree: input binary tree
 * Return: number of descendant child nodes
 */
size_t size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + size(tree->left) + size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to head of tree
 * Return: 1 if true 0 if false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n, h;

	if (!tree)
		return (0);
	n = (int)size(tree);
	h = height(tree);
	return (n == (2 << h) - 1);
}
