/*
 * Abe Jordan
 * not-simulink
 * matrix.c
 */
#include <stdlib.h>
#include "matrix.h"

/* multiply two matrices together if they are compatible*/
struct matrix *matrix_multiply(struct matrix *mtrx_a, struct matrix *mtrx_b)
{
	unsigned int i;
	unsigned int j;

	struct matrix *mtrx_c;

	if (mtrx_a->m != mtrx_b->n)
		return NULL;

	mtrx_c = matrix_init(mtrx_a->n, mtrx_b->m);

	for (i = 0; i < mtrx_a->n; i++) {
		for (j = 0; j < mtrx_b->m; j++) {
			*matrix_index(mtrx_c, i, j) = matrix_dot_product(mtrx_a, mtrx_b, i, j);
		}
	}

	return mtrx_c;
}

/* compute dot product of mtrx_a row i and mtrx_b column j */
double matrix_dot_product(struct matrix *mtrx_a,
			  struct matrix *mtrx_b,
			  unsigned int i,
			  unsigned int j)
{
	unsigned int k;

	double sum;

	sum = 0;

	for (k = 0; k < i; k++) {
		sum += (*matrix_index(mtrx_a, i, k)) *
			(*matrix_index(mtrx_b, k, j));
	}

	return sum;
}


/* get address of matrix element located at i,j */
inline double *matrix_index(struct matrix *mtrx, unsigned int i, unsigned int j)
{
	return mtrx->values + (i * mtrx->m) + j;
}


/* create matrix with n rows and m columns */
struct matrix *matrix_init(unsigned int n, unsigned int m)
{
	struct matrix *mtrx;
	
	mtrx = calloc(1, sizeof(struct matrix));
	mtrx->n = n;
	mtrx->m = m;
	mtrx->values = malloc(n * m);

	return mtrx;
}

/* free up memory occupied by matrix */
int matrix_free(struct matrix *mtrx)
{
	if (mtrx == NULL)
		return -1;

	if ((mtrx->values) != NULL)
		free(mtrx->values)
	
	free(mtrx);

	return 0;
}
