package spark

import org.apache.spark.sql.functions.from_json

object JsonDeserialize extends App with SparkWrapper {
  import sparkSession.implicits._

  val df_input = Seq(("p1", """{"a":1,"b":2}"""),
                     ("p2", """{"c": 3}""")).toDF("p_id", "p_meta")

  df_input.show(false)
  df_input.printSchema()

  val df_clean = df_input.
    withColumn("p_meta",
                    from_json($"p_meta", "map<string, string>",
                      Map.empty[String, String])).
    selectExpr("p_id", "explode(p_meta as (p_meta_key, p_meta_value)")

  df_clean.show(false)
  df_clean.printSchema()
}
