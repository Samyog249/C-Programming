#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i, min, max;
printf("Enter numbers of elements:");
    scanf("%d", &n);
    p = (int*) malloc(n * sizeof(int));
printf("Enter numbers:");
    for(i=0;i<n;i++)
        scanf("%d", &p[i]);

    min = max = p[0];

    for(i=1;i<n;i++) {
        if(p[i] < min) min = p[i];
        if(p[i] > max) max = p[i];
    }

    printf("Min=%d Max=%d", min, max);

    free(p);
    return 0;
}