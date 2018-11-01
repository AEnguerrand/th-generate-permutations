# th-generate-permutations
[![Build Status](https://travis-ci.org/AEnguerrand/th-generate-permutations.svg?branch=master)](https://travis-ci.org/AEnguerrand/th-generate-permutations)
![CPP](https://img.shields.io/badge/C++-14-blue.svg)

Tsinghua project - Generate all permutations

## Dependencies

- C++ 14 Compiler
- CMake (>= 3.9)

## Build and run
### Linux or MacOs
```bash
git clone https://github.com/AEnguerrand/th-generate-permutations.git
cd th-generate-permutations
mkdir build
cd build
cmake ..
cmake --build .
./th-generate-permutations
```

## Example usage:
```bash
./th-generate-permutations <length of the list> <generator type>(optional) <no print all permutations>(optional)
```

Print all permutation with lenght of 4 (use Heap's)
```bash
./th-generate-permutations 4
```

Print all permutation with lenght of 5 and use Lexicographical
```bash
./th-generate-permutations 5 2
```

Print only number of permutation with lenght of 7 and use Heap's
```bash
./th-generate-permutations 7 1 0
```

Print only number of permutation with lenght of 7 and use Lexicographical
```bash
./th-generate-permutations 7 2 0
```
