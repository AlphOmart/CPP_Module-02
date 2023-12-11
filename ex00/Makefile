#---COMMON_VAR-----------------------------------
NAME		=	first_canon
CXX			=	c++
FLAGS		=	-std=c++98 -Wall -Werror -Wextra
#---PHILO_VAR----------------------------------
SRC			=	main.cpp \
				Fixed.cpp
OBJS_DIR	=	.OBJS/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
HEADER		=	Fixed.hpp
#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
				@echo "\033[0;33m\nCOMPILING first_canon ...\n"
				@$(CXX) $(FLAGS) $(OBJS) -o $@
				@echo "\033[1;32m./first_canon created\n"

$(OBJS_DIR)%.o:	%.cpp | dir
				@$(CXX) $(FLAGS) -c $< -o $@

dir:			$(OBJS_DIR)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

clean:
				@echo "\033[0;31mDeleting first_canon object...\n"
				@$(RM) -rf $(OBJS_DIR)
				@echo "\033[1;32mDone\n"

fclean:			clean
				@echo "\033[0;31mDeleting first_canon executable..."
				@rm -rf $(NAME)
				@echo "\033[1;32mDone\n"

re:				fclean all

.PHONY:			all clean fclean re