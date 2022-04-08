g++ -O3 -march=native -mtune=native -fprofile-use -Wall -c -fmessage-length=0 -MMD -MP -MF«src/pgo-1.d» -MT«src/pgo-1.d» -o «src/pgo-1.o» "../src/pgo-1.cpp"
g++ -fprofile-use -o «../build/pgo-1» ./src/pgo-1.o
