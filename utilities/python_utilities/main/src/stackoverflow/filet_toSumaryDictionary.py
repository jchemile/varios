#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Order a file where you can find the room and the amount of audiences


# # Function to create a dataset

# In[2]:


import random


# In[3]:


movies = ["Superman", "Batman", "StarWars"]
years = list(range(1999,2019))
rooms = list(range(1,7))


# In[15]:


def random_dataset():
    return "{}-{}-{}".format(
    random.choice(movies),
    random.choice(years),
    random.choice(rooms)
    )


# In[16]:


dataset = [random_dataset() for _ in range(1000)]


# In[17]:


with open("../../../exampleData/Movies.txt", "w") as f:
    for data in dataset: print(data, file=f)


# # Audience by Room

# In[9]:


summary = {}


# In[18]:


with open("../../../exampleData/Movies.txt") as f:
    for data in f:
        movie, year, room = data.strip().split("-")
        if year not in summary:
            summary[year] = {}
        if room not in summary[year]:
            summary[year][room] = 0
        summary[year][room] +=1


# In[19]:


summary


# # Reorder summary in a readble way

# In[24]:


for year in sorted(summary):
    print("Year= {} ".format(year))
    for room in sorted(summary[year]):
        print("Room {}= {}".format(room,summary[year][room]))
    print()


# In[ ]:




