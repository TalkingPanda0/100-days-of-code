CC=gcc 
CFLAGS=
OUT=main_test
FILE=main_test.c main.c
build: clean
	$(CC) $(FILE) -o $(OUT) $(CFLAGS)
clean:
	    rm -rf main main_test

test: build
	./main_test
debug: 
	$(CC) -g3 $(FILE) -o $(OUT) $(CFLAGS)
	gdb $(OUT)
