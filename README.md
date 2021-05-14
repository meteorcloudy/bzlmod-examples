# bzlmod-examples
Example usages of Bzlmod feature in Bazel

1. Build a Bazel binary that supports Bzlmod:
```
git fetch https://github.com/Wyverald/bazel.git bzlmod
bazel build //src:bazel
```

2. Start the http server for source archives:
```
cd projects && python3 ./server.py
```

2. Change into an exmaple directory, build and run the binary:
```
cd examples/01-simple && bazel run :main
```
