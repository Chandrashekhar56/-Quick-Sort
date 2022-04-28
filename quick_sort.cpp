#include <iostream>
using namespace std;
void swap_function(int* i, int* j)
{
    int p = *i;
    *i = *j;
    *j = p;
}
int partition_function(int arr1[], int lowest_element, int highest_element)
{
    int pivot_element= arr1[highest_element];
    int x = (lowest_element - 1);
    for (int y = lowest_element; y <= highest_element- 1; y++)
    {
        if (arr1[y] <= pivot_element)
        {
            x++;
            swap_function(&arr1[x], &arr1[y]);
        }
    }
    swap_function(&arr1[x + 1], &arr1[highest_element]);
    return (x + 1);
}
void quick_sort_function(int arr1[], int lowest_element, int highest_element)
{
    if (lowest_element < highest_element)
    {

        int pivot_element= partition_function(arr1, lowest_element, highest_element);
        quick_sort_function(arr1, lowest_element, pivot_element - 1);
        quick_sort_function(arr1, pivot_element + 1, highest_element);
    }
}

int main()
{
    int arr1[] = {11,20,1,40,55,30,15,55};
    int total_size_of_arr1 = sizeof(arr1)/sizeof(arr1[0]);
    quick_sort_function(arr1, 0, total_size_of_arr1-1);
    for(int i=0;i<total_size_of_arr1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
