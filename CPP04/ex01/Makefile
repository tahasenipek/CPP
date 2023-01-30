NAME   = zoo
SRC    = main.cpp Dog.cpp Cat.cpp Animal.cpp  Brain.cpp
OBJ    = $(SRC:.cpp=.o)
CC     = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all    : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
clear   : 
		rm $(OBJ)

fclean  :
		rm $(OBJ)
		rm -rf $(NAME)

re      : fclean all
