These are different ways of building your software:
1. **CLI** - Manual builds. OK for simple compiles, but not practical when compiling several files with many flags. Here, you can build with *g++ -o greet greet.cpp hello.cpp*.
2. **Make** - Using *make* is better as it handles dependencies automatically and you can define the flags in one place. However, you may have to create separate versions for different platforms. **CMake** would be platform indepedent. Here, you build by running *make* inside the folder.
3. **Bazel** - Complete example using Google *Bazel*. This is the format you will see for all assignments. Notice the different details, including the copyright headers and header guards. Some common commands are:
    1. **bazel build greet** to build the *greet* executable.
    2. **bazel run greet** to run it (alternatively, you can directly run the *bazel-bin/greet* executable).
    3. **bazel clean** to remove all the builds.
