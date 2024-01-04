#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node
 *                       is a leaf of a binary tree or no
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf return 1, Otherwise return 0.
 * Descripxn: If node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
