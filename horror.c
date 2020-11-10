#include<stdio.h>

#define M 3
#define N 4


int process(int Mi, int Nj, int element, int currentMax, int *resultM, int *resultN) {
  
    if (currentMax >= element) {
       
        return currentMax;
    }
    else {
        *resultM = Mi;
        *resultN = Nj;
        return element;
    }
}
 
int main() {

    int matrix[M][N];
    int resultM = 0;
    int resultN = 0;
    int currentMax = 0;
    
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            currentMax = process(i, j, matrix[i][j], currentMax, &resultM, &resultN);
        }
    }

 
        printf("%d, %d", resultM, resultN);

    return 0;
  
}


