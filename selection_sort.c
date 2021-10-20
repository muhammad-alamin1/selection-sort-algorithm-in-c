#include <stdio.h>

int selection_sort(int A[], int n);
void swap(int *min, int *index);

int main()
{
    int A[] = {9, 4, 1, 11, 4, 15, 3, 4, 19};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Unsorted Array : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n\nSort Array : ");
    selection_sort(A, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}

// sort function
int selection_sort(int A[], int n)
{
    int i, j, min_index;

    for(i = 0; i < n-1; i++)
    {
        min_index = i;
        for(j = i+1; j < n; j++)
        {
            if(A[j] < A[min_index])
                min_index = j;
        }
        if(min_index != i)
            swap(&A[min_index], &A[i]);
    }
}

// swap
void swap(int *min, int *index)
{
    int temp;

    temp = *index;
    *index = *min;
    *min = temp;
}
