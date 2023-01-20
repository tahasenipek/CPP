NAME  = zombie
SRC   = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ   = $(SRC:.cpp=.o)
CC    = c++
CFLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAG) $(OBJ) -o $(NAME)

clean: 
		rm -rf $(OBJ)

fclean: 
		rm -rf $(OBJ)
		rm -rf $(NAME)

re: fclean all

