package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "client-main",
    srcs = ["client-main.cc"],
    deps = [
        "//cpp/design-patterns/factories-abstract-factory/pizzas:pizza",
        "//cpp/design-patterns/factories-abstract-factory/stores:pizza-store",
        "//cpp/design-patterns/factories-abstract-factory/stores:ny-style-pizza-store",
        "//cpp/design-patterns/factories-abstract-factory/stores:chicago-style-pizza-store",
    ],
)
