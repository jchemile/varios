#!/usr/bin/env python
# coding: utf-8

# In[1]:


cuenta = 100


# In[5]:


def calculo():
    saldo = int()
    global cuenta
    while saldo < cuenta:
        total = cuenta - 1
        cuenta = total
        
        print(cuenta)


# In[6]:


calculo()


# In[ ]:




