from pyspark.sql import SparkSession
spark = SparkSession.builder.master("local").appName("spark-python-utilites").getOrCreate()

from pyspark.sql.types import *
from pyspark.sql.column import *
from pyspark.sql.functions import *
from email.utils import parsedate_to_datetime

datestr = "Thu Sep 12 2019 15:58:30 GMT-0500 (hora estándar de Colombia)"
print(parsedate_to_datetime(datestr))

df = spark.createDataFrame(["Thu Sep 12 2019 15:58:30 GMT-0500 (hora estándar de Colombia)"], "string",).toDF("Date")

parsedate_to_datetime_udf = udf(parsedate_to_datetime, TimestampType())
df2 = df.withColumn("timestamp", parsedate_to_datetime_udf(col("Date")))

df2.show(20, False)
