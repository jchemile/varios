#!/usr/bin/env python
# coding: utf-8

# # Ways of sorting

# In[10]:


num_list = [5, 2, 1, 8, 4] 
print(num_list)


# # Bubble Sort

# Quadratic Time

# \begin{equation*}
# Time Complexity = O(n^2)
# \end{equation*}

# In[ ]:


def bubble_sort(nums):
    swapped = True
    while swapped:
        swapped = False
        for i in range(len(nums) - 1):
            if nums[i] > nums[i+1]:
                nums[i], nums[i + 1] = nums[i+1], nums[i]
                swapped = True


# # Selection Sort

# \begin{equation*}
# Time Complexity = O(n^2)
# \end{equation*}

# In[3]:


def selection_sort(nums):
    for i in range(len(nums)):
        
        lowest_value_index = i
        
        for j in range(i+1,len(nums)):
            if nums[j]< nums[lowest_value_index]:
                lowest_value_index = j
                
        nums[i], nums[lowest_value_index] = nums[lowest_value_index], nums[i]


# # Insertion Sort

# \begin{equation*}
# Time Complexity = O(n^2)
# \end{equation*}

# In[9]:


def insertion_sort(nums):
    
    for i in range(1, len(nums)):
        item_to_insert = nums[i]
        
        j = i - 1
        
        while j >= 0 and nums[j] > item_to_insert:
            nums[j + 1] = nums[j]
            j -= 1
            
        nums[j+ 1] = item_to_insert


# # Heap Sort

# O(nlog(n))

# In[20]:


def heapify(nums, heap_size, root_index):
    largest = root_index
    left_child = (2*root_index) + 1
    right_child = (2*root_index) + 1
    
    if left_child < heap_size and nums[left_child] > nums[largest]:
        largest = left_child
        
    if right_child < heap_size and nums[right_child] > nums[largest]:
        largest = right_child
        
    if largest != root_index:
        nums[root_index], nums[largest] = nums[largest], nums[root_index]
        
        heapify(nums, heap_size, largest)
        
def heap_sort(nums):
    n = len(nums)
    
    for i in range(n, -1, -1):
        heapify(nums,n,i)
        
    for i in range(n -1,0,-1):
        nums[i], nums[0] = nums[0], nums[i]
        heapify(nums, i, 0)


# Merge Sort

# Merge Sort's time complexity on average is O(nlog(n)).

# In[28]:


def merge(left_list, right_list):
    sorted_list = []
    left_list_index = right_list_index = 0
    
    left_list_length, right_list_length = len(left_list), len(right_list)
    
    for _ in range(left_list_length + right_list_length):
        if left_list_index < left_list_length and right_list_index < right_list_length:
            
            if left_list[left_list_index] <= right_list[right_list_index]:
                sorted_list.append(left_list[left_list_index])
                left_list_index += 1
                
            else:
                sorted_list.append(right_list[right_list_index])
                right_list_index += 1
        
        elif left_list_index == left_list_length:
            sorted_list.append(right_list[right_list_index])
            right_list_index += 1
            
        elif right_list_index == right_list_length:
            sorted_list.append(left_list[left_list_index])
            left_list_index += 1
            
    return sorted_list
            
def merge_sort(nums):
    
    if len(nums) <= 1:
        return nums
    
    mid = len(nums) // 2
    
    left_list = merge_sort(nums[:mid])
    right_list = merge_sort(nums[mid:])
    
    return merge(left_list, right_list)


# Quick Sort

# Quick Sort's time complexity on average is O(nlog(n)).

# In[7]:


def partition(nums,low,high):
    
    pivot = nums[(low + high) //2]
    i = low - 1
    j = high + 1
    while True:
        i += 1
        while nums[i] < pivot:
            i += 1
            
        j -= 1
        while nums[j] > pivot:
            j -= 1
            
        if i >= j:
            return j
        
        nums[i], nums[j] = nums[j], nums[i]
        
def quick_sort(nums):
    
    def _quick_sort(items, low, high):
        if low < high:
            
            split_index = partition(items,low,high)
            _quick_sort(items,low,split_index)
            _quick_sort(items, split_index + 1, high)
            
    _quick_sort(nums,0,len(nums) - 1)


# # Test

# In[ ]:


bubble_sort(num_list)
print(num_list)


# In[4]:


selection_sort(num_list)  
print(num_list)


# In[10]:


insertion_sort(num_list)
print(num_list)


# In[26]:


heap_sort(num_list)
print(num_list)


# In[38]:


list_2 = merge_sort(num_list)
print(list_2)


# In[12]:


quick_sort(num_list)  
print(num_list)


# In[13]:


print(num_list)


# In[ ]:




