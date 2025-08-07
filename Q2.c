#include <stdio.h>
int main() {
    int r, c, i, j, m[100][100], t[100][100];
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            t[j][i] = m[i][j];
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
    printf("\nTransposed Matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d\t", t[i][j]);
        printf("\n");
    }
    return 0;
}
