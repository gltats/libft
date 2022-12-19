# Compiling the program with flags
NAME = libft.a

.SUFFIXES: .o .c

# Macros
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SRC = ft_*.c
OBJ = $(SRC:.c=.o)
REMOVE = rm -f

# ar -rcs,  
# r Insert the files member into archive (with replacement). 
# c Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. 
# Running "ar s" on an archive is equivalent to running ranlib on it.
# Rules
all:	$(NAME)

$(NAME):	$(OBJ)
	 ar -rcs $(NAME) $(OBJ)
	 
#ar rcs
# -C Change to directory dir before reading the makefiles or doing anything else
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} $(NAME)

re: fclean all

.PHONY: all clean fclean re