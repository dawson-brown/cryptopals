CC=gcc
CFLAGS=-I. -lm
DEPS = ch6.h
OBJ = main.o ch6.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o main $^ $(CFLAGS)