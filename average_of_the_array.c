#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

   // printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        //printf("Error! number should in range of (1 to 100).
");
       // printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        //printf("%d", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("%.2f", avg);
    return 0;
}