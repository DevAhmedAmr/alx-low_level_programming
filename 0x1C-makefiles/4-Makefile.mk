CC= gcc
SRC= school.c main.c
OBJ= $(SRC:.c=.o)
NAME=school
RM= rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic
TMP_files= *~ .~-

all: $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(TMP_files) $(NAME)
oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all
