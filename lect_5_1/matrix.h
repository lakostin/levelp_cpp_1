#ifndef MATRIX_H
#define MATRIX_H

// создание матрицы
int* create_matrix();

// удаление матрицы
void destroy_matrix(int* matrix);

// заполнение матрицы
void fill_matrix( int* matrix, int x, int y);

// вывод матрицы
void print_matrix(int* matrix, int x, int y);

// функция проверки
int get_sum(int* matrix, int x, int y);

#endif // MATRIX_H
