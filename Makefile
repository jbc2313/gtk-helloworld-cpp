##
#
#
# @file
# @version 0.1


CC=clang++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cc,helloworld.cc
OBJECTS=$(SOURCES:.cc=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ `pkg-config gtkmm-4.0 --libs`

.cc.o:
	$(CC) $(CFLAGS) $< -o $@ `pkg-config gtkmm-4.0 --cflags`

clean:
	rm -rf *.o main

# end
