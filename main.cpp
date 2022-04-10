#include <iostream>
#include <emscripten/bind.h>

using namespace emscripten;

constexpr int product(int x, int y) 
{ 
    return (x * y); 
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

template<typename T>
constexpr int sum(T v) {
    return v;
}

template<typename T, typename... Types>
constexpr int sum(T v, Types&&... others) {
    return v + sum(others...);
}

EMSCRIPTEN_BINDINGS(my_module) {
    constant("PRODUCT_10_20", product(10, 20));
    function("factorial", &factorial);
    constant("SUM_42_14_2_18_9", sum(42, 14, 2, 18, 9));
}


