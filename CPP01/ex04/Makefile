NAME  = repalcer
SRC   = main.cpp
OBJ   = $(SRC:.cpp=.o)
CC    = c++
REP   = *.cpp.replace
CFLAG = -Wall -Wextra -Werror -std=c++98


all     : $(NAME)


$(NAME) :  $(OBJ)
		$(CC) $(OBJ) $(CFLAG) -o $(NAME)

clean   : 
		rm -rf $(OBJ)

fclean  :
		rm -rf $(OBJ)
		rm -rf $(NAME)
		rm -rf $(REP)

re      : fclean re 
 