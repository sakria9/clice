cmake -B build -G Ninja \
-DCMAKE_C_COMPILER_LAUNCHER=ccache \
-DCMAKE_CXX_COMPILER=clang++ \
-DCMAKE_C_COMPILER=clang \
-DCMAKE_BUILD_TYPE=Debug \
-DCLICE_TEST=ON \
-DCLICE_EXAMPLES=ON
cmake --build build
