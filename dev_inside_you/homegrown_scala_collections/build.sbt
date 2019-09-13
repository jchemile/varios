name := "homegrown_scala_collections"

version := "0.1"

scalaVersion := "2.13.0"

libraryDependencies ++=
  Seq(
    "org.scalatest" %% "scalatest" % "3.0.8" % "test",
    "org.pegdown"    %   "pegdown" % "1.6.0" % "test"
  )

testOptions in Test ++=
  Seq(
    Tests.Argument(TestFrameworks.ScalaTest, "-oSD")
  )