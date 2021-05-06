#include <stdio.h>
//function prototypes 
void read_arr(int [], int);
void print_arr(int [], int);
int ret_max(int [], int);
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  maximum element in the arrays is %d\n", ret_max(arr, arr_size));
    return 0;
}  

void read_arr(int arr[], int arr_size) 
{
    int i;
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
    
void print_arr(int arr[], int arr_size) 
{
    int i;
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
    
 int ret_max(int arr[], int arr_size)
 {
    int max=arr[0];
    int i;
    for(i=0;i<arr_size;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    return max;
 }