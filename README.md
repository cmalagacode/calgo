# 🚀 calgo
- ✅ C library implementation of common algorithms
- ✅ C library implementation of common data structures
- ✅ CMake compatible
- ✅ Includes unit testing via Unity
  - https://github.com/ThrowTheSwitch/Unity/tree/master


# CMake Debug 

```bash
cmake -B cmake-build-debug -DCMAKE_BUILD_TYPE=Debug . && cmake --build cmake-build-debug && ./cmake-build-debug/test/test
```

# CMake Release 

```bash
cmake -B cmake-build-release -DCMAKE_BUILD_TYPE=Release . && cmake --build cmake-build-release && ./cmake-build-release/test/test
```

## Clang Format

```bash
clang-format -style=Google -i <filename>
```
