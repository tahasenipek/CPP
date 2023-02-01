NAME  = bureaucrat
SRC   = main.cpp Bureaucrat.cpp
OBJ   = $(SRC:.cpp=.o)
CC    = c++
CLAGS = -Wall -Wextra -Werror -std=c++98


all     : $(NAME)


$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean   :
		rm $(OBJ)

fclean  :
		rm -rf $(OBJ)
		rm -rf $(NAME)
		
re      : fclean all
 