/*
 * Abe Jordan
 * not-simulink
 * block-functions.c
 */
#include <stdlib.h>
#include "block-functions.h"

/* initialize generic block */
struct block *block_init(void)
{
	struct block *ret_block;

	ret_block = calloc(1, sizeof(struct block));

	return ret_block;
}

/* initialize generic block */
int set_block_position(struct block *block_in, int x, int y)
{
	block_in->x = x;
	block_in->y = y;
	
	return 0;
}

/* initialize transfer function block */
struct block_tf *block_tf_init(void)
{
	struct block_tf *ret_block_tf;

	ret_block_tf = calloc(1, sizeof(struct block_tf));
	ret_block_tf->block_base = block_init();

	return ret_block_tf;
}

/* set transfer function coefficients */
int block_tf_set_coefficients(struct block_tf *input_block,
			      double *num,
			      double *den)
{
	return 0;
}

