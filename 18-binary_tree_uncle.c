#include "binary_trees.h"

/**
 * sibling - finds the sibling node
 * @node: pointer to input node
 * Return: pointer to sibling
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->left == node
				? node->parent->right
				: node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle node
 * @node: pointer to input node
 * Return: pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (sibling(node->parent));
}
