#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():	AForm("RobotomyRequestForm", 72, 45)
{
	srand(time(NULL));
}
	
RobotomyRequestForm::RobotomyRequestForm(const std::string target):	AForm("RobotomyRequestForm", 72, 45), target(target)
{
	srand(time(NULL));
}
	
    
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):	AForm(copy), target(copy.target)
{
	srand(time(NULL));    
}

RobotomyRequestForm::~RobotomyRequestForm(){

}
	
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &){
    return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    if (executor.getGrade() > this->getGrade())
		throw AForm::GradeTooLowException();
	else
	{
		int random = rand() % 2;

		if (random)
			std::cout << target << " has been robotomized." << std::endl;
		else
			std::cout << target << "'s robotomy has been failed." << std::endl;
	}
}