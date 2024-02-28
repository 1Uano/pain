CC := clang
CFLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic

MINILIBMX := minilibmx.a

all: $(MINILIBMX)

$(MINILIBMX): ./inc/minilibmx.h ./src/mx_atoi.c ./src/mx_isdigit.c ./src/mx_isspace.c ./src/mx_printchar.c ./src/mx_printint.c ./src/mx_printstr.c ./src/mx_strcpy.c ./src/mx_strcmp.c ./src/mx_strlen.c
	rm -rf obj
	mkdir obj
	$(CC) $(CFLAGS) -c ./src/mx_atoi.c ./src/mx_isdigit.c ./src/mx_isspace.c ./src/mx_printchar.c ./src/mx_printint.c ./src/mx_printstr.c ./src/mx_strcpy.c ./src/mx_strcmp.c ./src/mx_strlen.c
	mv ./mx_atoi.o ./obj
	mv ./mx_isdigit.o ./obj
	mv ./mx_isspace.o ./obj
	mv ./mx_printchar.o ./obj
	mv ./mx_printint.o ./obj
	mv ./mx_printstr.o ./obj
	mv ./mx_strcpy.o ./obj
	mv ./mx_strcmp.o ./obj
	mv ./mx_strlen.o ./obj
	ar -rc minilibmx.a ./obj/mx_atoi.o ./obj/mx_isdigit.o ./obj/mx_isspace.o ./obj/mx_printchar.o ./obj/mx_printint.o ./obj/mx_printstr.o ./obj/mx_strcpy.o ./obj/mx_strcmp.o ./obj/mx_strlen.o

uninstall:
	rm -rf minilibmx.a
	rm -rf ./obj

clean:
	rm -rf ./obj

reinstall: uninstall $(MINILIBMX)

