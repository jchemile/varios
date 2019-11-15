from pyspark.sql import SparkSession

spark = SparkSession.builder.master("local").appName("spark-python-utilites").getOrCreate()
