NAME  = fragshut
SRC   = main.cpp ClapTrap.cpp FragTrap.cpp
OBJ   = $(SRC:.cpp=.o)
CC    = c++
CFLAG =  -Wall -Wextra -Werro -std=c++98


all    :  $(NAME)


$(NAME) : $(OBJ)
		$(CC) $(OBJ) $(CFLAG) -o $(NAME)

clean   : 
		rm $(OBJ)

fclean  :
		rm  $(OBJ)
		rm -rf $(NAME)

re      : fclean  all