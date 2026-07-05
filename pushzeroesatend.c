#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // hii i am akarsh
}
void main()
{
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0, 7, 8, 0, 6};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }
    
   
    int n = sizeof(arr) / sizeof(int);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }

    while (count < n)
    {
        arr[count++] = 0;
    }
printf("\n");
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }
}

// https://beu-bih.ac.in/result-three?d=eyJuYW1lIjoiQi5UZWNoLiA0dGggU2VtZXN0ZXIgRXhhbWluYXRpb24sIDIwMjUiLCJzZW1lc3RlciI6IklWIiwic2Vzc2lvbiI6IjIwMjUiLCJyZWdObyI6IjI0MTUzMTQ3OTAxIiwiZXhhbV9oZWxkIjoiRGVjZW1iZXIvMjAyNSIsImJhY2tEIjoiZXlKelpXMWxjM1JsY2lJNk5Dd2ljMlZ6YzJsdmJpSTZJakl3TWpVaUxDSmxlR0Z0WDJobGJHUWlPaUpFWldObGJXSmxjaTh5TURJMUlpd2laWGhoYlY5cFpDSTZJakkxTURFd05DSjkiLCJiYWNrTmFtZSI6IkIuVGVjaC4gNHRoIFNlbWVzdGVyIEV4YW1pbmF0aW9uLCAyMDI1In0%3D