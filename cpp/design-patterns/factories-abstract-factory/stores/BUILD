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

cc_library(
    name = "chicago-style-pizza-store",
    hdrs = ["chicago-style-pizza-store.h"],
    deps = [
      ":pizza-store",
      "//cpp/design-patterns/factories-abstract-factory/ingredient-factories:chicago-ingredient-factory",
      "//cpp/design-patterns/factories-abstract-factory/pizzas:cheese-pizza",
      "//cpp/design-patterns/factories-abstract-factory/pizzas:clam-pizza",
    ],
)