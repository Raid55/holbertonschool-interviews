#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree full
 * @tree: tree
 *
 * Return: 1 if full or 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t tmp = 1;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		tmp = 1;
	else if (tree->left && tree->right)
	{
		tmp = binary_tree_is_full(tree->left);
		if (!tmp)
			return (0);
		tmp = binary_tree_is_full(tree->right);
	}
	else
		tmp = 0;

	return (tmp);
}
