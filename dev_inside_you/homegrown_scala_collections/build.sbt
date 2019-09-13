name := "homegrown_scala_collections"

version := "0.1"

scalaVersion := "2.12.8"

triggeredMessage := Watched.clearWhenTriggered

resolvers += "Artima Maven Repository" at "http://repo.artima.com/releases"

libraryDependencies ++=
  Seq(
    "org.scalatest" %% "scalatest" % "3.0.8" % "test",
    "org.pegdown"    %   "pegdown" % "1.6.0" % "test"
  )

testOptions in Test ++=
  Seq(
    Tests.Argument(TestFrameworks.ScalaTest, "-oSD")
  )

addCommandAlias("testc",";clean;coverage;test;coverageReport")

coverageExcludedPackages := "Main"