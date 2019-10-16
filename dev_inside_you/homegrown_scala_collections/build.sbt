version := "0.0.1-SNAPSHOT"

organization := "devinsideyou"

scalaVersion := "2.12.4"

watchTriggeredMessage := Watch.clearScreenOnTrigger

initialCommands in console := "import homegrown.collections._"

addCommandAlias("testc",";clean;coverage;test;coverageReport")

scalacOptions ++=
  Seq(
    "-feature",
    "-language:implicitConversions",
    "-language:higherKinds"
  )

resolvers += "Artima Maven Repository" at "https://repo.artima.com/releases"

libraryDependencies ++=
  Seq(
    "org.scalatest" %% "scalatest" % "3.0.5" % "test",
  )