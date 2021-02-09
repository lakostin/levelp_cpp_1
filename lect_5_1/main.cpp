// вычислить сумму матрицы М, лежащих справа от побочной диагонали
#include "matrix.h"
#include <stdio.h>
//1 1 2
//1 2 1
//2 1 1

int main()
{

    int x = 3;
    printf("Enter x size: ");
    scanf("%d", &x);

    int y = 5;
    printf("Enter y size: ");
    scanf("%d", &y);

    int* matrix = create_matrix(x, y);
    fill_matrix(matrix, x, y);
    print_matrix(matri, x, y);
    printf("SUM is: %d", get_sum(matrix, x, y));
    destroy_matrix(matrix);
    return 0;
}
