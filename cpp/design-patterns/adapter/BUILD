package(default_visibility = ["//visibility:public"])

cc_library(
    name = "duck",
    hdrs = ["duck.h"],
)

cc_library(
    name = "mallard-duck",
    hdrs = ["mallard-duck.h"],
    deps = [
      ":duck",
    ]
)

cc_library(
    name = "turkey",
    hdrs = ["turkey.h"],
)

cc_library(
    name = "wild-turkey",
    hdrs = ["wild-turkey.h"],
    deps = [
      ":turkey",
    ]
)

cc_library(
    name = "turkey-adapter",
    hdrs = ["turkey-adapter.h"],
    deps = [
      ":turkey",
      ":duck",
    ]
)

cc_binary(
    name = "duck-main",
    srcs = ["duck-main.cc"],
    deps = [
        ":mallard-duck",
        ":wild-turkey",
        ":turkey-adapter",
    ],
)
