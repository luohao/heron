licenses(["notice"])

package(default_visibility = ["//visibility:public"])

action_listener(
    name = "compile_java",
    mnemonics = ["Javac"],
    extra_actions = [":checkstyle_java"],
)

extra_action(
    name = "checkstyle_java",
    tools = [
        "//tools/java/src/com/twitter/bazel/checkstyle:checkstyle_java",
    ],
    requires_action_output = True,
    cmd = "$(location //tools/java/src/com/twitter/bazel/checkstyle:checkstyle_java) " +
          "--extra_action_file $(EXTRA_ACTION_FILE) " +
          "--heron_checkstyle_config_file tools/java/src/com/twitter/bazel/checkstyle/heron_coding_style.xml " +
          "--apache_checkstyle_config_file tools/java/src/com/twitter/bazel/checkstyle/apache_coding_style.xml"
)
