package(default_visibility = ["//visibility:public"])

cc_library(
    name = "pizza",
    hdrs = ["pizza.h"],
)

cc_library(
    name = "cheese-pizza",
    hdrs = ["cheese-pizza.h"],
    deps = [
        ":pizza",
    ],
)

cc_library(
    name = "simple-pizza-factory",
    hdrs = ["simple-pizza-factory.h"],
    deps = [
        ":cheese-pizza",
    ],
)

cc_library(
    name = "pizza-store",
    hdrs = ["pizza-store.h"],
    deps = [
        ":pizza",
        ":simple-pizza-factory"
    ],
)

cc_binary(
    name = "client-main",
    srcs = ["client-main.cc"],
    deps = [
        ":pizza",
        ":pizza-store",
        ":simple-pizza-factory",
    ],
)
