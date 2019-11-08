package spark

import org.apache.spark.sql.SparkSession

trait SparkWrapper {

  val sparkSession =
          SparkSession
              .builder()
              .appName("scala-utilities")
              .master("local[2]")
              .getOrCreate()


}
