CC := clang
CFLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic

MINILIBMX := minilibmx.a

all: $(MINILIBMX)

$(MINILIBMX): $(wildcard ./inc/*.h) $(wildcard ./src/*.c)
	rm -rf ./obj
	mkdir ./obj
	$(CC) $(CFLAGS) -c $(wildcard ./src/*.c)
	mv ./*.o ./obj
	ar -rc minilibmx.a ./obj/*.o

uninstall:
	rm -rf ./minilibmx.a
	rm -rf ./obj

clean:
	rm -rf ./obj

reinstall: uninstall all

