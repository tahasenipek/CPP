NAME  = Zombie
SRC   = main.cpp Zombie.cpp zombieHorde.cpp
OBJ   = $(SRC:.cpp=.o)
CC    = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

all		: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(OBJ) $(CFLAG) -o $(NAME)

clean   : 
			rm -rf $(OBJ)

fclean	:	
			rm -rf $(OBJ)
			rm -rf $(NAME)

re 		: fclean all