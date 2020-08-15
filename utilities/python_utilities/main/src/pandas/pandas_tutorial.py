import pandas as pd
import numpy as np


df = pd.read_csv("../../../exampleData/weather_data_02.csv")
df


df.columns


rows, columns = df.shape
columns


# Print some rows

# In[ ]:


df.head(2)


# Print last rows

# In[ ]:


df.tail(1)


# Print interval

# In[ ]:


df[2:5]


# In[ ]:


df.day


# In[ ]:


df.temperature


# In[ ]:


df['event']


# In[ ]:


type(df['event'])


# In[ ]:


df[['event', 'day','temperature']]


# In[ ]:


df['temperature'].min()


# In[ ]:


df.describe()


# In[ ]:


df[df.temperature>=32]


# In[ ]:


df[df.temperature==df['temperature'].max()]


# In[ ]:


df.index


# In[ ]:


df.set_index('day', inplace = True)


# In[ ]:


df.reset_index(inplace = True)
df


# In[ ]:


df.set_index('event', inplace=True)
df


# In[ ]:


df.loc['Snow']


# # Tutorial 03 - Read Excel and create data Frame In Memory

# In[ ]:


df = pd.read_csv("../../../exampleData/weather_data03.csv")
df


# In[ ]:


df = pd.read_excel("weather_data03.xlsx", "Sheet1")
df


# In[ ]:


weather_data = {
    'day': ['1/1/2017','1/2/2017','1/3/2017'],
    'temperature':[32,35,28],
    'windspeed': [6,7,2],
    'event': ['Rain','Sunny','Snow']
}


# In[ ]:


df = pd.DataFrame(weather_data)
df


# In[ ]:


weather_data = [
    ('1/1/2017',32,6,'Rain'),
    ('1/2/2017',35,7,'Sunny'),
    ('1/3/2017',28,2,'Snow')
]


# In[ ]:


df = pd.DataFrame(weather_data, columns = ["day","temperature","windspeed","event"])
df


# In[ ]:


weather_data = [
    {'day':'1/1/2017','temperature':32,'windspeed':6,'event':'Rain'},
    {'day':'1/2/2017','temperature':35,'windspeed':7,'event':'Sunny'},
    {'day':'1/3/2017','temperature':28,'windspeed':2,'event':'Snow'}
]
df = pd.DataFrame(weather_data)


# In[ ]:


df


# # Tutorial 04 - Writes Files

# In[ ]:


df = pd.read_csv("../../../exampleData/stock_data04.csv", na_values = {
    'eps':["not available", "n.a."],
    'revenue': ["not available", "n.a.", -1],
    'people': ["not available", "n.a."]
})
df


# In[ ]:


df.columns


# In[ ]:


df.to_csv('new.csv', columns=['tickers', 'eps'])


# In[ ]:


def convert_peolpe_cell(cell):
    if cell == "n.a.":
        return 'sam walton'
    return cell

def convert_eps_cell(cell):
    if cell == "not available":
        return None
    return cell


# In[ ]:


df = pd.read_excel("stock_data04.xlsx", "Sheet1", converters= {
        'people': convert_peolpe_cell,
        'eps': convert_eps_cell
    })


# In[ ]:


df


# In[ ]:


df.to_excel("new.xlsx", sheet_name = 'stocks', startrow=1)


# In[ ]:


df_stocks = pd.DataFrame({
    'tickers': ['GOOGL', 'WMT', 'MSFT'],
    'price': [845,65,64],
    'pe':[30.37,14.26,30.97],
    'eps': [27.82,4.61,2.12]
})

df_weather = pd.DataFrame({
    'day': ['1/1/2017','1/1/2017','1/1/2017'],
    'temperature': [32,35,28],
    'event': ['Rain', 'Sunny', 'Snow']
})


# In[ ]:


with pd.ExcelWriter('stocks_weather.xlsx') as writer:
    df_stocks.to_excel(writer, sheet_name = "stocks")
    df_weather.to_excel(writer, sheet_name = "weather")


# # Tutorial 05 - Missing Data

# In[ ]:


df = pd.read_csv('../../../exampleData/weather_data05.csv', parse_dates=["day"])


# In[ ]:


type(df.day[0])


# In[ ]:


df.set_index('day', inplace=True)


# In[ ]:


new_df = df.fillna(0)


# In[ ]:


new_df


# In[ ]:


new_df = df.fillna({
    'temperature': 0,
    'windspeeed':0,
    'event': 'no event'
})


# In[ ]:


new_df


# In[ ]:


new_df = df.fillna(method="ffill", limit=1)


# In[ ]:


new_df


# In[ ]:


new_df = df.interpolate()


# In[ ]:


new_df


# In[ ]:


new_df = df.dropna(thresh=2)
new_df


# In[ ]:


dt = pd.date_range("01-01-2017","01-11-2017")
idx = pd.DatetimeIndex(dt)
df.reindex(idx)


# # Tutorial 06 - Handle Missing Data

# In[ ]:


df = pd.read_csv('../../../exampleData/weather_data06.csv')


# In[ ]:


new_df = df.replace({
            'temperature': -99999,
            'windspeed': -99999,
            'event': '0'
}, np.NaN)


# In[ ]:


df = pd.DataFrame({
    'score': ['exceptional', 'average', 'good', 'poor', 'average', 'exceptional'],
    'student': ['rob', 'maya', 'parthiv', 'tom', 'julia', 'erica']
})


# In[ ]:


df.replace(['poor', 'average', 'good', 'exceptional'],[1,2,3,4])


# # Tutorial 07 - Group By

# In[ ]:


df = pd.read_csv('../../../exampleData/weather_by_cities07.csv')


# # Tutorial 08 - Concat Dataframes

# In[ ]:


india_weather = pd.DataFrame({
                              "city":["mumbai", "delhi", "banglore"],
                              "temperature":[32,45,30],
                              "humidity": [80,60,78]
                            })


# In[ ]:


india_weather


# In[ ]:


us_weather = pd.DataFrame({
                              "city":["new york", "chicago", "orlando"],
                              "temperature":[21,14,35],
                              "humidity": [68,65,75]
                            })


# In[ ]:


us_weather


# In[ ]:


pd.concat([india_weather, us_weather])


# In[ ]:


pd.concat([india_weather, us_weather], ignore_index = True)


# In[ ]:


pd.concat([india_weather, us_weather], keys=["india", "us"])


# In[ ]:


df=pd.concat([india_weather, us_weather], keys=["india", "us"])
df.loc["us"]


# In[ ]:


temperature_df = pd.DataFrame({
    "city":["mumbai", "delhi", "bangalore"],
    "temperature": [32,45,30],
}, index=[0,1,2])


# In[ ]:


temperature_df


# In[ ]:


windspeed_df = pd.DataFrame({
    "city":["delhi", "mumbai"],
    "temperature": [7,12]
}, index=[1,0])
windspeed_df


# In[ ]:


pd.concat([temperature_df, windspeed_df], axis = 1)


# In[ ]:


temperature_df


# In[ ]:


s = pd.Series(["Humid", "Dry", "Rain"],name="event")


# In[ ]:


s


# In[ ]:


pd.concat([temperature_df,s], axis=1)


# # Tutorial 09 - Merge

# In[ ]:


df1 = pd.DataFrame({
    "city": ["new york", "chicago", "orlando", "baltimore"],
    "tempertaure": [21,14,35, 32],
})
df1


# In[ ]:


df2 = pd.DataFrame({
    "city":["chicago", "new york", "san francisco"],
    "humidity": [65,68,71], 
})
df2


# In[ ]:


df3 = pd.merge(df1, df2, on = "city", how = "outer", indicator=True)


# In[ ]:


df1 = pd.DataFrame({
    "city": ["new york", "chicago", "orlando", "baltimore"],
    "tempertaure": [21,14,35,32],
    "humidity":[65,68,71,75]
})


# In[ ]:


df2 = pd.DataFrame({
    "city": ["chicago", "new york", "san diego"],
    "tempertaure": [21,14,35],
    "humidity":[65,68,71]
})


# In[ ]:


df3 = pd.merge(df1, df2, on="city", suffixes=('_left', '_right'))


# # Tutorial 10 - Pivot/Unpivot

# In[ ]:


df = pd.read_csv('../../../exampleData/weather10.csv')
df


# In[ ]:


df.pivot(index= "date", columns = "city", values = "humidity")


# In[ ]:


df.pivot(index = "humidity", columns ="city")


# In[ ]:


df = pd.read_csv("../../../exampleData/weather10-2.csv")
df


# In[ ]:


df.pivot_table(index="city", columns="date", aggfunc="sum", margins=True)


# In[ ]:


df = pd.read_csv("../../../exampleData/weather10-3.csv")
df


# In[ ]:


df['date']=pd.to_datetime(df['date'])


# In[ ]:


df.pivot_table(index=pd.Grouper(freq = 'M', key ='date'), columns = 'city')


# # Tutorial 11 - Using Melt

# In[ ]:


df = pd.read_csv('../../../exampleData/weather11.csv')
df


# In[ ]:


df1 = pd.melt(df, id_vars=["day"],var_name="city", value_name="temperature")
df1


# # Tutorial 12 - Stack/Unstack

# In[ ]:


df = pd.read_excel("stocks12.xlsx", header=[0,1])
df


# In[ ]:


df_stacked = df.stack(level=0)
df_stacked


# In[ ]:


df_stacked.unstack()


# In[ ]:


df2 = pd.read_excel("stocks_3_levels12.xlsx", header = [0,1,2])
df2


# In[ ]:


df2.stack(level=0)


# # Tutorial 13 - Crosstab

# In[ ]:


df = pd.read_excel("survey13.xls")
df


# In[ ]:


pd.crosstab([df.Sex, df.Nationality],df.Handedness, margins=True)


# In[ ]:


pd.crosstab([df.Sex],df.Handedness, margins = True)


# In[ ]:


pd.crosstab([df.Sex],df.Handedness, normalize='index')


# In[ ]:


pd.crosstab([df.Sex],df.Handedness, values = df.Age, aggfunc = np.average)


# # Tutorial 14 - Datetime Index

# In[ ]:


df = pd.read_csv("../../../exampleData/aapl.csv")
df.head(5)


# In[ ]:


type(df.Date[0])


# In[ ]:


df = pd.read_csv("../../../exampleData/aapl.csv", parse_dates=["Date"])


# In[ ]:


df.head(5)


# In[ ]:


type(df.Date[0])


# In[ ]:


df = pd.read_csv("../../../exampleData/aapl.csv", parse_dates=["Date"], index_col ="Date")


# In[ ]:


df.index


# In[ ]:


df["2017-01-07":"2017-01-01"]


# In[ ]:


get_ipython().run_line_magic('matplotlib', 'inline')
df.Close.resample('Q').mean().plot()


# In[ ]:


df.Close.plot()


# # Tutorial 15 - Data Range

# In[ ]:


df = pd.read_csv("../../../exampleData/aapl_no_dates15.csv")
df.head()


# In[ ]:


rng = pd.date_range(start="6/1/2017", end ="6/30/2017", freq='B')


# In[ ]:


df.set_index(rng, inplace=True)
df


# In[ ]:


get_ipython().run_line_magic('matplotlib', 'inline')
df.Close.plot()


# In[ ]:


df["2017-06-01":"2017-06-10"].Close.mean()


# In[ ]:


df.asfreq('D',method='pad')


# In[ ]:


df.asfreq('H',method='pad')


# In[ ]:


rng = pd.date_range(start="1/1/2017",periods=72,freq="B")
rng


# In[ ]:


ts = pd.Series(np.random.randint(1,10,len(rng)), index=rng)
ts.head(10)


# # Tutorial 16 - Holiday

# In[2]:


df = pd.read_csv("../../../exampleData/aapl_no_dates17.csv")
df.head()


# In[3]:


pd.date_range(start="7/1/2017", end="7/21/2017", freq='B')


# In[4]:


from pandas.tseries.holiday import USFederalHolidayCalendar
from pandas.tseries.offsets import CustomBusinessDay


# In[5]:


usb = CustomBusinessDay(calendar=USFederalHolidayCalendar())


# In[6]:


rng = pd.date_range(start="7/1/2017", end="7/21/2017", freq=usb)


# In[7]:


df.set_index(rng, inplace=True)
df


# In[8]:


from pandas.tseries.holiday import AbstractHolidayCalendar, nearest_workday, Holiday


class myBirthDayCalendar(AbstractHolidayCalendar):
    """
    my calendar
    """
    rules = [
        Holiday('Joaco"s birthday', month=7, day=4)
    ]


# In[9]:


myc = CustomBusinessDay(calendar=myBirthDayCalendar())
myc


# In[10]:


pd.date_range(start="7/1/2016", end="7/10/2016", freq=myc)


# In[11]:


b = CustomBusinessDay(weekmask='Sun Mon Tue Wed Thu')
pd.date_range(start="4/1/2017", end="4/30/2017", freq=b)


# # Tutorial 17 - To Holiday

# In[12]:


dates = ['2017-01-05 2:30:00pm', 'Jan 5, 2017 14:30:00', '01/05/2017', '2017.01.05', '2017/01/05', '20170105']


# In[13]:


pd.to_datetime(dates)


# In[14]:


pd.to_datetime('5$1$2017', format='%d$%m$%Y')


# In[15]:


dates2 = ['2017-01-05 2:30:00pm', 'Jan 5, 2017 14:30:00', '01/05/2017', '2017.01.05', '2017/01/05', 'abc']
pd.to_datetime(dates2, errors = 'coerce')


# In[16]:


t = 1501356749
pd.to_datetime(t, unit = 's')


# # Tutorial 18 - Time Period

# In[17]:


y = pd.Period('2016')
y


# In[18]:


dir(y)


# In[19]:


y.start_time


# In[20]:


y.end_time


# In[21]:


m = pd.Period('2011-2','M')


# In[22]:


m.start_time


# In[23]:


m.end_time


# In[24]:


m+1


# In[25]:


d = pd.Period('2016-02-28')
d


# In[26]:


d+1


# In[27]:


h = pd.Period('2016-02-28 23:00:00', freq = 'H')
h


# In[28]:


h.start_time


# In[29]:


h.end_time


# In[30]:


h-6


# In[31]:


h+pd.offsets.Hour(5)


# In[32]:


q = pd.Period('2017Q1', freq='Q-JAN')
q


# In[33]:


q.start_time


# In[34]:


q.asfreq('M', how="end")


# In[35]:


q2 = pd.Period('2018Q2', freq='Q-JAN')
q2


# In[36]:


q2-q


# In[37]:


idx = pd.period_range('2011',periods=10, freq='Q')
idx


# In[38]:


idx[0].start_time


# In[39]:


idx[0].end_time


# In[40]:


ps = pd.Series(np.random.randn(len(idx)),idx)
ps


# In[41]:


ps.index


# In[42]:


ps['2011':'2013']


# In[43]:


pst = ps.to_timestamp()


# In[44]:


pst


# In[45]:


pst.index


# In[46]:


pst.to_period()


# In[47]:


df = pd.read_csv('../../../exampleData/wmt18.csv')


# In[48]:


df


# In[49]:


df.set_index('Line Item', inplace=True)


# In[50]:


df


# In[51]:


df = df.T
df


# In[52]:


df.index = pd.PeriodIndex(df.index, freq = 'Q-JAN')


# In[53]:


df.index


# In[54]:


df['start date']= df.index.map(lambda x: x.start_time)
df


# In[55]:


df['end date']= df.index.map(lambda x: x.end_time)
df


# # Tutorial 19 - TImezone

# In[56]:


df = pd.read_csv("../../../exampleData/msft19.csv", header=1, index_col='Date Time', parse_dates=True)
df


# In[57]:


df.index


# In[58]:


df = df.tz_localize(tz='US/Eastern')
df.index


# In[59]:


df = df.tz_convert(tz='Europe/Berlin')
df


# In[60]:


from pytz import all_timezones
all_timezones


# In[61]:


df = df.tz_convert(tz='Asia/Calcutta')
df


# In[62]:


df.index = df.index.tz_convert(tz='Asia/Calcutta')
df


# In[63]:


rng = pd.date_range(start="1/1/2017",periods=10, freq='H', tz = 'dateutil/Europe/London')
rng


# In[64]:


rng = pd.date_range(start="2017-08-22 09:00:00", periods=10, freq='30min')
s = pd.Series(range(10), index = rng)
s


# In[65]:


b = s.tz_localize(tz='Europe/Berlin')
b


# In[66]:


b.index


# In[67]:


m = s.tz_localize(tz='Asia/Calcutta')
m


# In[68]:


b +  m


# # Tutorial 20 - Shifting Lagging

# In[70]:


df = pd.read_csv("../../../exampleData/fb19.csv", parse_dates = ['Date'], index_col='Date')
df


# In[71]:


df.shift(1)


# In[72]:


df['Prev Day Price'] = df['Price'].shift(1)
df


# In[73]:


df['1 day change'] = df['Price'] - df['Prev Day Price']
df


# In[74]:


df['5 day % return'] = (df['Price'] - df['Price'].shift(5))*100/df['Price'].shift(5)
df


# In[75]:


df  = df[['Price']]
df


# In[76]:


df.index


# In[77]:


df.index = pd.date_range(start='2017-08-15', periods=10, freq='B')
df.index


# In[78]:


df.tshift(1)


# In[ ]:




