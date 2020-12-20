workspace(name = "tim")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository", "new_git_repository")

################################# C++ ####################################

# Google Test (C++)
new_git_repository(
    name = "googletest",
    build_file = "gtest/gtest.BUILD",
    remote = "https://github.com/google/googletest",
    tag = "release-1.8.0",
)

# abseil
http_archive(
    name = "absl",
    strip_prefix = "abseil-cpp-master",
    urls = ["https://github.com/abseil/abseil-cpp/archive/master.zip"],
)