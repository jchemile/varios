from pyspark import SparkContext

sc = SparkContext("local", "max_temperature")

#spark = SparkSession.builder.master("local").appName("spark-python-utilites").getOrCreate()
#test = spark.createDataFrame(["10","11","13"], "string").toDF("age")

#test.show()

print("fin")