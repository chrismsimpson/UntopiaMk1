
# Release
```
cmake Sources -B Build -G Ninja
cmake --build Build
./Build/Untopia/untopia
```

# Debug
```
cmake Sources -B Build -G Ninja -D CMAKE_BUILD_TYPE=Debug
cmake --build Build
```