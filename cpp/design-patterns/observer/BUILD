package(default_visibility = ["//visibility:public"])

cc_library(
    name = "observer",
    hdrs = ["observer.h"],
)

cc_library(
    name = "subject",
    hdrs = ["subject.h"],
    srcs = ["subject.cc"],
    deps = [
        ":observer",
    ]
)

cc_library(
    name = "current-condition-display",
    srcs = ["current-condition-display.cc"],
    hdrs = ["current-condition-display.h"],
    deps = [
        ":observer",
        ":subject",
    ],
)

cc_library(
    name = "statistics-display",
    srcs = ["statistics-display.cc"],
    hdrs = ["statistics-display.h"],
    deps = [
        ":observer",
        ":subject",
    ],
)

cc_library(
    name = "weather-data",
    srcs = ["weather-data.cc"],
    hdrs = ["weather-data.h"],
    deps = [
        ":subject",
    ],
)

cc_library(
    name = "weather-station",
    srcs = ["weather-station.cc"],
    hdrs = ["weather-station.h"],
    deps = [
        ":current-condition-display",
        ":statistics-display",
        ":weather-data",
    ],
)

cc_binary(
    name = "weather-station-main",
    srcs = ["weather-station-main.cc"],
    deps = [
        ":weather-station",
    ],
)