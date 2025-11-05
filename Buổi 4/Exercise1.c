#include <stdio.h>

int main()
{
    int n, sum = 0;
    FILE *f1 = fopen("input.txt", "r");
    if (f1 == NULL)
    {
        printf("Cant open file");
        return 1;
    }
    fscanf(f1, "%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    FILE *f2 = fopen("output.txt", "w");
    if (f2 == NULL)
    {
        printf("Cant open file");
        return 1;
    }
    fprintf(f2, "%d", sum);
    fclose(f1);
    fclose(f2);
    return 0;
}