CC=gcc
CFLAGS=-I.
DEPS = shape.h circle.h square.h rctngl.h builder.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o circle.o square.o rctngl.o builder.o
	$(CC) -o StaticOOP main.o circle.o square.o rctngl.o builder.o 
