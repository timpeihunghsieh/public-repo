package(default_visibility = ["//visibility:public"])

cc_library(
    name = "pizza-store",
    hdrs = ["pizza-store.h"],
    deps = [
      "//cpp/design-patterns/factories-abstract-factory/pizzas:pizza",
    ],
)

cc_library(
    name = "ny-style-pizza-store",
    hdrs = ["ny-style-pizza-store.h"],
    deps = [
      ":pizza-store",
      "//cpp/design-patterns/factories-abstract-factory/ingredient-factories:ny-ingredient-factory",
      "//cpp/design-patterns/factories-abstract-factory/pizzas:cheese-pizza",
      "//cpp/design-patterns/factories-abstract-factory/pizzas:clam-pizza",
    ],
)