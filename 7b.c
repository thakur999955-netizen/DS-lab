#include <stdio.h>
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        printf("After %d pass\n", i + 1);
        show(arr, n);
    }
}

int main()
{
    int arr[] = {2, 6, 5, 1, 0, 4, 9, 7};
    int n = 8;
    show(arr, n);
     selection(arr, n);
}