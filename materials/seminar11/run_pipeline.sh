VISUALIZER=gprof2dot.py     
if [ ! -f $VISUALIZER ]; then
    wget https://raw.githubusercontent.com/jrfonseca/gprof2dot/master/gprof2dot.py
fi

FN=$1
if [ ! -f $1 ]; then
    FN=1.cpp
fi

g++ 1.cpp -o a.out
valgrind --tool=callgrind ./a.out
python3 gprof2dot.py -n0 -e0 $(find . -name callgrind.out* | tail -n 1) -f callgrind | dot  -Tpng -o $(find . -name callgrind.out* | tail -n 1)_pic.png
