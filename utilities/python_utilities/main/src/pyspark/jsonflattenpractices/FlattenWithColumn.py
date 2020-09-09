from pyspark.sql import SparkSession
from pyspark.sql.functions import col

spark = SparkSession.builder.master("local").appName("jsonDeserializer").getOrCreate()

df = spark.read.json("C:\\Users\\User\\Documents\\varios\\utilities\\python_utilities\\main\\src\\pyspark\\jsonexamples\\attributesSimple.json")
df.printSchema()
df.show()

dfFlatten = df.withColumn("attributes_id", col("attributes.id")).drop("attributes")

dfFlatten.printSchema()
dfFlatten.show()