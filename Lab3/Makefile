CC=gcc
CFLAGS=-lm 
DEPS= main.h item.h
OBJ=main.o selection_sort.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado!"

clean:
	rm -rf *.o main

run:
	./main