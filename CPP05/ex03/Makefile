NAME  = bureaucrat
SRC   = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
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
 