# bzlmod-examples
Example usages of Bzlmod feature in Bazel

1. Build a Bazel binary from HEAD, which supports Bzlmod:
```
git fetch https://github.com/bazelbuild/bazel.git bzlmod && git checkout bzlmod
bazel build //src:bazel
```

2. Start the http server for source archives:
```
cd projects && python3 ./server.py
```

2. Change into an exmaple directory, build and run the binary:
```
cd examples/01-simple && bazel run :main --experimental_enable_bzlmod
```

## Dependency graph of modules in the main registry

```
    
C 1.0 -> B 1.0 -> A 1.0
    \_____________↗
         B 1.1 -> A 1.1
                  A 1.1-1
C 1.1 -> B 1.2
```
