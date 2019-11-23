from pyspark.sql import SparkSession
spark = SparkSession.builder.master("local").appName("spark-python-utilites").getOrCreate()

from pyspark.sql.types import *
from pyspark.sql.column import *
from pyspark.sql.functions import *
from email.utils import parsedate_to_datetime

datestr = "Thu Sep 12 2019 15:58:30 GMT-0500 (hora estándar de Colombia)"
print(parsedate_to_datetime(datestr))

df = spark.createDataFrame(["Thu Sep 12 2019 15:58:30 GMT-0500 (hora estándar de Colombia)"], "string",).toDF("Date")

df2 = df.withColumn("timestamp", parsedate_to_datetime(col("Date")))

print(df2)
df2.show(20, False)