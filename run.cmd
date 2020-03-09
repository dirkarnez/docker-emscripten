docker run --rm -it -v "%~dp0:/src" rnix/emsdk em++ -std=c++1z --bind main.cpp -o index.html 
pause