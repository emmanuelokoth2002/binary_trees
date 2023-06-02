#include "binary_trees.h"

/**
 * depth - measures the depth of a node in a binary tree
 * @tree: input binary tree
 * Return: depth of tree
 */
size_t depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node of the two nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *a = (binary_tree_t *)first, *b = (binary_tree_t *)second;
	size_t depth_a, depth_b;

	if (!first || !second)
		return (NULL);

	depth_a = depth(a);
	depth_b = depth(b);
	for (; depth_b > depth_a; depth_b--)
		b = b->parent;
	for (; depth_a > depth_b; depth_b--)
		a = a->parent;
	while (a && b)
	{
		if (a == b)
			return (a);
		a = a->parent;
		b = b->parent;
	}
	return (NULL);
}
