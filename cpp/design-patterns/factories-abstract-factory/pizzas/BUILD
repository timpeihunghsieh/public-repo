package(default_visibility = ["//visibility:public"])

cc_library(
    name = "pizza",
    hdrs = ["pizza.h"],
    deps = [
      "//cpp/design-patterns/factories-abstract-factory/ingredients:ingredients",
    ],
)

cc_library(
    name = "cheese-pizza",
    hdrs = ["cheese-pizza.h"],
    deps = [
      ":pizza",
      "//cpp/design-patterns/factories-abstract-factory/ingredient-factories:ingredient-factory",
    ],
)

cc_library(
    name = "clam-pizza",
    hdrs = ["clam-pizza.h"],
    deps = [
      ":pizza",
      "//cpp/design-patterns/factories-abstract-factory/ingredient-factories:ingredient-factory",
    ],
)