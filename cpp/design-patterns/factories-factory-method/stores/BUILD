package(default_visibility = ["//visibility:public"])

cc_library(
    name = "pizza-store",
    hdrs = ["pizza-store.h"],
    deps = [
      "//cpp/design-patterns/factories-factory-method/pizzas:pizza",
    ],
)

cc_library(
    name = "ny-style-pizza-store",
    hdrs = ["ny-style-pizza-store.h"],
    deps = [
      ":pizza-store",
      "//cpp/design-patterns/factories-factory-method/pizzas:ny-style-cheese-pizza",
      "//cpp/design-patterns/factories-factory-method/pizzas:ny-style-clam-pizza",
      "//cpp/design-patterns/factories-factory-method/pizzas:ny-style-veggie-pizza",
    ],
)

cc_library(
    name = "chicago-style-pizza-store",
    hdrs = ["chicago-style-pizza-store.h"],
    deps = [
      ":pizza-store",
      "//cpp/design-patterns/factories-factory-method/pizzas:chicago-style-cheese-pizza",
    ],
)