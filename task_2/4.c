#include <stdio.h>

int main()
{
    int N; // future matrix NxN
    scanf_s("%d", &N);

    /*
    matrix will be filled snail-like for [N = 3]
    1 2 3
    8 9 4
    7 6 5

    sollution were found on site:
    https://www.haikson.com/programming/zapolnenie-dvumernoj-matritsyi-po-spirali/
    */

    int matrix[64][64];


    // sollution were originally made for rectangle, but we have just square so we need only 1 param instead of 4 like below
    /*
    int Ibeg = 0, Ifin = 0, Jbeg = 0, Jfin = 0;

    int k = 1;
    int i = 0;
    int j = 0;

    while (k <= N * N) {
        matrix[i][j] = k;
        if (i == Ibeg && j < N - Jfin - 1)
            ++j;
        else if (j == N - Jfin - 1 && i < N - Ifin - 1)
            ++i;
        else if (i == N - Ifin - 1 && j > Jbeg)
            --j;
        else
            --i;

        if ((i == Ibeg + 1) && (j == Jbeg) && (Jbeg != N - Jfin - 1)) {
            ++Ibeg;
            ++Ifin;
            ++Jbeg;
            ++Jfin;
        }
        ++k;
    }
    */

    // actuall sollution
    int scale = 0; // the layer of our square

    int k = 1;
    int i = 0;
    int j = 0;

    while (k <= N * N) {
        matrix[i][j] = k;
        if (i == scale && j < N - scale - 1)
            ++j;
        else if (j == N - scale - 1 && i < N - scale - 1)
            ++i;
        else if (i == N - scale - 1 && j > scale)
            --j;
        else
            --i;

        if ((i == scale + 1) && (j == scale) && (scale != N - scale - 1)) {
            ++scale;
        }
        ++k;
    }

    // output of matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            printf("%3d", matrix[i][j]);
        printf("\n");
    }
}


