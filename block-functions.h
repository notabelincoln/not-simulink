/*
 * Abe Jordan
 * not-simulink
 * block-functions.h
 */
#include "blocks.h"

/* initialize generic block */
struct block *block_init(void);

/* initialize generic block */
int block_set_position(void *block, int x, int y);

/* initialize transfer function block */
struct block_tf *block_tf_init(void);

/* set transfer function coefficients */
int block_tf_set_coefficients(struct block_tf *input_block,
			      double *num,
			      double *den);

