def partition(Arr1, lowest_index, highest_index):
    
  pivot_element = Arr1[highest_index]
  
  x = lowest_index - 1
  
  for y in range(lowest_index, highest_index):
      
    if Arr1[y] <=pivot_element:
        
         x = x + 1 
         (Arr1[x], Arr1[y]) = (Arr1[y], Arr1[x])
  
  (Arr1[x + 1], Arr1[highest_index]) = (Arr1[highest_index], Arr1[x + 1])
  
  return x + 1

def quick_sort_function(Arr1, lowest_index, highest_index):
    
  if lowest_index < highest_index:
      
    pivot_element = partition(Arr1, lowest_index, highest_index)
    quick_sort_function(Arr1, lowest_index, pivot_element - 1)
    quick_sort_function(Arr1, pivot_element + 1, highest_index)

Arr1 = [18, 27, 12, 10, 20, 9, 16]
total_size_of_Arr1 = len(Arr1)
quick_sort_function(Arr1, 0, total_size_of_Arr1 - 1)
print('Sorted Elements: ')
print(Arr1)
