NAME   = orthodoxform
SRC    = main.cpp  Fixed.cpp
OBJ    = $(SRC:.cpp=.o)
CC     = c++
CFLAGS = -Wall -Wextra -Werro -std=c++98


all     : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean   :
		rm $(OBJ)

fclean  :
		rm -rf $(OBJ)
		rm -rf $(NAME)

re      : fclean re