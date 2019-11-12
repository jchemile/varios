import spark.SparkWrapper
import spark.Tokenized.sparkSession

object Operations extends App with SparkWrapper{
  import sparkSession.implicits._
  import org.apache.spark.sql.functions._


  /*
  println("Start")



  import org.apache.spark.sql.expressions.Window



  val df = Seq(
    (1, 10, 0),
    (1, 11, 1),
    (1, 13, 1),
    (1, 16, 1),
    (1, 20, 0),
    (1, 21, 0),
    (1, 22, 1),
    (1, 25, 1),
    (1, 27, 1),
    (1, 29, 1),
    (1, 30, 0),
    (1, 32, 1),
    (1, 34, 1),
    (1, 35, 1),
    (1, 38, 0)).toDF("Category", "Value", "Sequences")
  df.show

  val zipped = df.withColumn("zip", monotonically_increasing_id())
  zipped.show

  val categoryWindow = Window.partitionBy("Category").orderBy($"zip")
  val groups = zipped
               .filter($"Sequences" === 0)
               .withColumn("rangeEnd", lead($"zip",1).over(categoryWindow))
               .withColumnRenamed("zip", "rangeStart")
  groups.show(false)

  val joinCondition = ($"units.zip" > $"groups.rangeStart").and($"units.zip" < $"groups.rangeEnd")

  val unitsByRange = zipped
                      .filter($"Sequences" === 1).alias("units")
                      .join(groups.alias("groups"), joinCondition, "left")
                      .select("units.Category", "units.Value", "groups.rangeStart")

  unitsByRange.show

  val result = unitsByRange
                  .groupBy($"Category", $"rangeStart")
                  .agg(sum("Value").alias("summing"))
                  .orderBy("rangeStart")
                  .drop("rangeStart")

  result.show(false)



  import org.apache.spark.sql.expressions.Window
  import org.apache.spark.sql.functions

  val df = Seq((0, "2016-07-02 12:01:40"),
   (1, "2016-07-02 12:21:23"),
   (1, "2016-07-02 13:22:56"),
   (1, "2016-07-02 13:27:07"),
   (0, "2016-07-02 13:30:12"),
   (0, "2016-07-02 13:40:34"),
   (1, "2016-07-02 13:57:07"),
   (1, "2016-07-02 14:08:07")).
  toDF("signal", "timestamp").
  withColumn("timestamp", functions.to_timestamp(col("timestamp"), "yyyy-MM-dd HH:mm:ss"))
  df.show()

  val newSignalWindow = Window.orderBy("timestamp")

  val dfWithNewSignal = df.withColumn("new_signal",
                                      (functions.lag(col("signal"),1,0).over(newSignalWindow) === 0 &&
                                       col("signal") === 1).cast("bigint"))

  dfWithNewSignal.show

  val dfWithIdSignal = dfWithNewSignal.
                              filter(col("signal") === 1).
                              withColumn("new_signal",
                                         functions.
                                            sum("new_signal").
                                            over(newSignalWindow))

  dfWithIdSignal.show

  val resultDF = dfWithIdSignal.
                    groupBy("new_signal").
                        agg(functions.min("timestamp").as("start_date"), functions.max("timestamp").as("end_date"),
                            functions.count("*").as("positive_count")).drop("new_signal")

  resultDF.show

  val df = Seq(
    (1, "4/8/2019", "CLM***120379893***John***CLM***Smith***blablabla**so..on…"),
    (2, "4/8/2019", "CLM***120379093***John***CLM***Smith***CLM***blablabla**so..on…"),
    (3, "4/8/2019", "CLM***139979893***John***Smith***blablabla**so..on…")
  ).toDF("id", "date", "content")

  def countAll(pattern: String) = udf((s: String) => pattern.r.findAllIn(s).size)

  df.withColumn("wordcount", countAll("CLM")($"content")).show

    val df1 = Seq(
      (1, "google.com"),
      (2, "facebook.com"),
      (3, "github.com"),
      (4, "stackoverflow.com")).toDF("id", "url").as("first")
    df1.show

    val df2 = Seq(
      (11, "google.com"),
      (12, "yahoo.com"),
      (13, "facebook.com"),
      (14, "twitter.com")).toDF("id", "url").as("second")
    df2.show

  import org.apache.spark.sql.functions.{col, _}

  val df3 = df2.join(df1, expr("first.url like second.url"), "full_outer")
                          .select(col("first.url"),col("first.url")
                                  .contains(col("second.url")).as("check"))
                                      .filter("url is not null")

  df3.show()

  df3.na.fill(Map("check" -> false)).show()

   import org.apache.spark.sql._

    val df = Seq(
        ("1", "p1,p1,p1,p1,p1,p3,p3,p2,p2,p2,p2"),
        ("2", "p2,p2,p2,p2,p2,p4,p4,p4,p1,p3")
      ).toDF("id", "product_list")

  df.show()

  def getMetrics(value: Row, n: Int): (String, String) = {

      val split = value.getAs[String]("product_list").split(",")

      val sortedRecords = split.groupBy(x => x).map(data => (data._1, data._2.size)).toList.sortWith(_._2 > _._2)
      (value.getAs[String]("id"), sortedRecords.take(n).map(_._1).mkString(","))
  }

  val final_df = df.map(value =>
                       getMetrics(value,2)
                        ).withColumnRenamed("_1", "id")
                         .withColumnRenamed("_2", "most_seen_products")

  final_df.show



}
