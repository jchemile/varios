import pandas as pd
import datetime as dt

inicio = dt.datetime(2020,7,1)
fin = dt.datetime(2020,7,31)

lista = pd.date_range(inicio, fin, freq='D')
df = pd.DataFrame()
df['Fecha'] = lista



df['Semana'] = pd.PeriodIndex(df['Fecha'], freq='W')

print(df)