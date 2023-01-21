NAME  = dissatisfied
SRC   = Harl.cpp main.cpp
OBJ   = $(SRC:.cpp=.o)
CC    = c++
CFLAG = -Wall -Wextra -Werro -std=c++98


all : $(NAME)


$(NAME) : $(OBJ)
		$(CC) $(OBJ) $(CFLAG) -o $(NAME)

clean   :
		rm -rf $(OBJ)

fclean  :
		rm -rf $(OBJ)
		rm -rf $(NAME)

re      : fclean all