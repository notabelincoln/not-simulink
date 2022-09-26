/*
 * Abe Jordan
 * not-simulink
 * block-functions.h
 */
#include "blocks.h"

/* initialize generic block */
struct block *init_block(void);

/* initialize generic block */
int set_block_position(void *block, int x, int y);

/* initialize transfer function block */
struct block_tf *init_block_tf(void);

/* set transfer function coefficients */
int set_tf_coefficients(struct block_tf *input_block, double *num, double *den);

