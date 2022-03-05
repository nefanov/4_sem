CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c
LIB_SOURCES=libcode.c
OBJECTS=objects.o
SHARED_OBJ=shared.o
EXECUTABLE=main_prog

all: $(EXECUTABLE)

$(EXECUTABLE): objects.o shared.o
        $(CC) $(LDFLAGS) $(OBJECTS) $(SHARED_OBJ) -o $@

objects.o:
        $(CC) $(CFLAGS) $(SOURCES) -o $@

shared.o:
        $(CC) -fPIC -shared $(LIB_SOURCES) -o $@

clean:
        rm -rf *.so *.so
