#!/usr/bin/env python
# coding: utf-8

# Appending number to a lists

# In[11]:


numbers = [1,2,3,4,5,6,7,8,9,10]


# In[12]:


new_list = []


# In[13]:


for num in numbers:
    new_list.append(num *2 )


# In[14]:


print(new_list)


# In[15]:


my_list2 = [num *2 for num in numbers]


# In[16]:


print(my_list2)


# In[17]:


double_list = [num * 2 for num in numbers]
print(double_list)


# In[18]:


triple_list = [num * 3 for num in numbers]
print(triple_list)


# In[19]:


square_list = [num ** 2 for num in numbers]
print(square_list)


# Regular Approach

# if Statements

# In[20]:


print(numbers)


# In[21]:


new_list = []


# In[22]:


for num in numbers:
    if num % 2 == 0:
        new_list.append(num)


# In[23]:


print(new_list)


# In[24]:


new_list = []


# In[25]:


my_list = [num for num in numbers if num % 2 == 0]


# In[26]:


print(my_list)


# multiple Conditions

# In[37]:


new_list = []


# In[38]:


for num in range(1, 150):
    if num % 2 == 0 and num % 5 == 0:
        new_list.append(num)


# In[39]:


print(new_list)


# In[41]:


new_list.clear()


# In[42]:


my_list = [num for num in range(1,150) if num % 2 == 0 if num%5==0]
print(my_list)


# In[ ]:





# Examples taker from: https://www.tutorialgateway.org/python-list-comprehensions/

# In[ ]:




