mkdir build-linux

cd build-linux

CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0" \
  cmake .. -DCMAKE_C_COMPILER="/usr/bin/clang-6.0" \
  -DCMAKE_CXX_COMPILER="/usr/bin/clang++-6.0" \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

CC="/usr/bin/clang-6.0" CXX="/usr/bin/clang++-6.0" \
  cmake --build . --clean-first -- -j 8
