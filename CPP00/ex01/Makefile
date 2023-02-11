NAME   = phonebook
SRC	   = main.cpp Contacts.cpp PhoneBook.cpp 
OBJ	   = $(SRC:.cpp=.o)
CC	   = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OCFLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OCFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:
		rm -rf $(OBJ)
		rm -rf $(NAME)

re:	fclean all

