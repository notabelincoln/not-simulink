/*
 * Abe Jordan
 * not-simulink
 * blocks.h
 */

/* generic block */
struct block {
	int x;                 /* horizontal position */
	int y;                 /* verical position    */
	int input_count;       /* number of inputs    */
	int output_count;      /* number of outputs   */
	
	void **input_blocks;  /* generic list of input blocks  */
	void **output_blocks; /* generic list of output blocks */
};

/* transfer function block */
struct block_tf {
	double *coeff_num;
	double *coeff_den;
	struct block *block_base;
};
