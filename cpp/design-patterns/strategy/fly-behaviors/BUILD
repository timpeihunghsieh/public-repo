package(default_visibility = ["//visibility:public"])

cc_library(
    name = "fly-behavior",
    hdrs = ["fly-behavior.h"],
)

cc_library(
    name = "fly-with-wings",
    hdrs = ["fly-with-wings.h"],
    deps = [
      ":fly-behavior",
    ]
)

cc_library(
    name = "no-fly",
    hdrs = ["no-fly.h"],
    deps = [
      ":fly-behavior",
    ]
)
