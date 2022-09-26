/*
 * Abe Jordan
 * not-simulink
 * block-functions.c
 */
#include "block-functions.h"
#include <stdlib.h>

/* initialize generic block */
struct block *init_block(void)
{
	struct block *ret_block;

	ret_block = calloc(1, sizeof(struct block));

	return ret_block;
}

/* initialize generic block */
int set_block_position(void *block_in, int x, int y)
{
	block_in->x = x;
	block_in->y = y;
	
	return 0;
}

/* initialize transfer function block */
struct block_tf *init_block_tf(void)
{
	struct block_tf *ret_block_tf;

	ret_block_tf = calloc(1, sizeof(struct block_tf));
	ret_block_tf->block_base = init_block();

	return ret_block_tf;
}

/* set transfer function coefficients */
int set_tf_coefficients(struct block_tf *input_block, double *num, double *den);

