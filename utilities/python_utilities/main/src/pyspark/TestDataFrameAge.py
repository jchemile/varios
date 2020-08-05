from pyspark.sql import SparkSession

spark = SparkSession.builder.master("local").appName("Word Count").getOrCreate()

test = spark.createDataFrame(["10","11","13"], "string").toDF("age")

test.show()

print("fin")