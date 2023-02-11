NAME	= megaphone
SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= clang++
OCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OCFLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)
fclean:
		rm -rf $(OBJ)
		rm -rf $(NAME)
re: fclean all

.PHONY: clean fclean re all