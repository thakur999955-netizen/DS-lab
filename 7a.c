#include <stdio.h>
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printf("After %d pass\n", i + 1);
        show(arr, n);
    }
}
int main()
{
    int arr[] = {2, 6, 5, 1, 0, 4, 9, 7};
    int n = 8;
    show(arr, n);
     bubble(arr, n);
    
}