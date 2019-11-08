
println("start")

import org.apache.spark.sql.functions.explode

 val inputDF = Seq(
      ("sam", "ta1i3dfk4", "xy|av|mm"),
      ("royc", "rfhqdbnb3", "a"),
      ("alcaly", "rfhqdbnb3", "xx|zz")
    ).toDF("name", "roll", "subjectIDs")

inputDF.show
inputDF.select("name").dtypes

val result = inputDF.withColumn("subjectIDs", split(col("subjectIDs"), "\\|"))

result.show

val finalDF = result.withColumn("subjectIDs", explode(col("subjectIDs")))

finalDF.show


