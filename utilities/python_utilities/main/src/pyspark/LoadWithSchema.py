from pyspark.sql import SparkSession
from pyspark.sql.types import *

spark = SparkSession.builder.master("local").appName("Word Count").getOrCreate()

loadWithSchemaDf = spark.createDataFrame([
    ("dWUAQ", "2020", "General", "limpieza general", "TextPretreatment", "2020-08-10",),
    ("e2UAA", "2020", "General", "correcto ", "TextPretreatment", "2020-08-10",),
    ("xUUAQ", "2020", "General", "correcto", "TextPretreatment", "2020-08-10",),
    ("EJUAY", "2020", "General", "bien", "TextPretreatment", "2020-08-10",),
    ("aaUAQ", "2020", "General", "rocio ventas", "TextPretreatment", "2020-08-10",)],
    ["ID","Year","TypeComment","NewText", "ExecutionName", "ExecutionTime"])

schema = StructType([
    StructField("Index", StringType()),
    StructField("ID", StringType()),
    StructField("Year", IntegerType()),
    StructField("TypeComment", StringType()),
    StructField("NewText", StringType()),
    StructField("ExecutionName", StringType()),
    StructField("ExecutionTime", StringType())
])

loadWithSchemaDf.show()
loadWithSchemaDf.printSchema()

