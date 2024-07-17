// write a c programming to find the biggest of N numbers in an array using pointers

#include <stdio.h>
int findBiggest(int *array, int size) 
{
    int *ptr = array;
    int biggest = *ptr;

    for (i = 1; i < size; i++) 
	{
        ptr++;
        if (*ptr > biggest)
		{
            biggest = *ptr;
        }
    }

    return biggest;
}

int main() 
{
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int array[N];
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) 
	{
        scanf("%d", &array[i]);
    }

    int biggest = findBiggest(array, N);
    printf("The biggest number in the array is: %d\n", biggest);

    return 0;
}
