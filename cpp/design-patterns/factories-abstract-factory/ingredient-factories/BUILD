package(default_visibility = ["//visibility:public"])

cc_library(
    name = "ingredient-factory",
    hdrs = ["ingredient-factory.h"],
    deps = [
      "//cpp/design-patterns/factories-abstract-factory/ingredients:ingredients",
    ],
)

cc_library(
    name = "ny-ingredient-factory",
    hdrs = ["ny-ingredient-factory.h"],
    deps = [
      ":ingredient-factory",
      "//cpp/design-patterns/factories-abstract-factory/ingredients:ingredients",
    ],
)