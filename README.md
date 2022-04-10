docker-emscripten-cpp
=====================
C++ features to be tested
- [x] `constexpr`
  - syntactically works, but the return value is evaluated in runtime in JS 😭. 
  - **UPDATE**: only immediate / const value in C++ is constant in JS. `constexpr`, `template`, and all others are all transformed into javascript **runtime** code
- [ ] Template metaprogramming
- [ ] Type inference
- [ ] Lambda
- [ ] Smart pointers
- [ ] Modules
- [ ] Coroutines
- [ ] RTTI
- ...

C++ libraries to be tested
- [ ] Boost library
