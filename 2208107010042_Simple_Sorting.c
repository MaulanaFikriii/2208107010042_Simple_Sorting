#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate random integers
void generateRandomIntegers(int *arr, int n)
{
    srand(time(NULL)); // Seed for random number generator
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
}

// Function to perform bubble sort
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform selection sort
void selectionSort(int *arr, int n)
{
    int min_idx;
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to perform insertion sort
void insertionSort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int max_size = 1000000;
    int step = 100000;

    printf("----------------------------------------------------------------------------------\n");
    printf("||  Jenis Algoritma      ||   Jumlah Bilangan  ||  Waktu Eksekusi (ms)          ||\n");
    printf("----------------------------------------------------------------------------------\n");

    int *arr = (int *)malloc(max_size * sizeof(int));

    // Perform sorting for different array sizes
    for (int n = step; n <= max_size; n += step)
    {
        // Generate random integers
        generateRandomIntegers(arr, n);

        clock_t start, end;
        double cpu_time_used;

        // Bubble Sort
        start = clock();
        bubbleSort(arr, n);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("||  Bubble Sort          ||      %10d    ||      %15.1f          ||\n", n, cpu_time_used);

        // Selection Sort
        start = clock();
        selectionSort(arr, n);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("||  Selection Sort       ||      %10d    ||      %15.1f          ||\n", n, cpu_time_used);

        // Insertion Sort
        start = clock();
        insertionSort(arr, n);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("||  Insertion Sort       ||      %10d    ||      %15.1f          ||\n", n, cpu_time_used);
    }

    free(arr); // Free dynamically allocated memory

    printf("------------------------------------------------------------------------------------------\n");

    return 0;
}