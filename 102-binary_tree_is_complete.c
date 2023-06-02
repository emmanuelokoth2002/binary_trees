#include <stdlib.h>
#include <stdbool.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	bool is_complete = true;
	bool has_incomplete_level = false;

	queue_t *queue = NULL;
	queue = enqueue(queue, tree);

	while (!queue_is_empty(queue))
	{
		const binary_tree_t *node = dequeue(&queue);

		if (node->left != NULL)
		{
			if (has_incomplete_level)
			{
				is_complete = false;
				break;
			}
			queue = enqueue(queue, node->left);
		}
		else
		{
	    		has_incomplete_level = true;
		}
		if (node->right != NULL)
		{
			if (has_incomplete_level)
			{
				is_complete = false;
				break;
			}
			queue = enqueue(queue, node->right);

		}
		else
		{
			has_incomplete_level = true;
		}
	}
	queue_delete(queue);

	return (is_complete ? 1 : 0);
}
