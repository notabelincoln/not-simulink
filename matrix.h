/*
 * Abe Jordan
 * not-simulink
 * matrix.h
 */

/* matrix structure */
struct matrix {
	unsigned int n;
	unsigned int m;
	double *values;
};

/* multiply two matrices together if they are compatible */
struct matrix *matrix_multiply(struct matrix *mtrx_a, struct matrix *mtrx_b);

/* compute dot of mtrx_a row i and mtrx_b column j*/
double matrix_dot_product(struct matrix *mtrx_a,
			  struct matrix *mtrx_b,
			  unsigned int i,
			  unsigned int j);

/* get address of matrix element locatd at i,j */
inline double *matrix_index(struct matrix *mtrx, unsigned int i, unsigned int j);

/* create matrix with n rows and m columns */
struct matrix *matrix_init(unsigned int n, unsigned int m);

/* free up memory occupied by matrix */
int matrix_free(struct matrix *mtrx);
