package(default_visibility = ["//visibility:public"])

cc_library(
    name = "topping",
    hdrs = ["topping.h"],
    deps = [
        "//cpp/design-patterns/decorator/pizzas:pizza",
    ]
)

cc_library(
    name = "barbeque",
    hdrs = ["barbeque.h"],
    deps = [
        ":topping",
    ]
)

cc_library(
    name = "fresh-tomatoes",
    hdrs = ["fresh-tomatoes.h"],
    deps = [
        ":topping",
    ]
)