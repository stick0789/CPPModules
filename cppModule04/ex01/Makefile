# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 16:58:58 by jaacosta          #+#    #+#              #
#    Updated: 2025/09/08 16:59:00 by jaacosta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorphism
CC = c++
RM = rm -rf
CFLAGS =  -Wall -Wextra -Werror -std=c++98 -fsanitize=address ##-MMD
DEPFLAGS		= -MMD -MF $(DEPDIR)/$*.d

SRCDIR			= src
OBJDIR			= obj
DEPDIR			= deps

#******************************************************************************#
#                              SOURCE FILES                                    #
#******************************************************************************#

SRCS 	=	Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp \
			main.cpp

HEADERS =	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp \
			Brain.hpp 

#******************************************************************************#
#                             OBJECTS & DEPS                                   #
#******************************************************************************#

OBJS			= $(SRCS:%.cpp=$(OBJDIR)/%.o)
DEPS			= $(OBJS:%.o=$(DEPDIR)/%.d)

#******************************************************************************#
#                              RULES                                           #
#******************************************************************************#

all: dir $(NAME)

$(NAME): Makefile $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "\033[1;32m ➜ ➜ CPP04 EX01 [✔]\033[0m"


$(OBJDIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@) $(dir $(DEPDIR)/$*.d)
	@$(CC) $(CFLAGS) $(DEPFLAGS) $(INCLUDE) -c $< -o $@

dir:
	@mkdir -p $(OBJDIR) $(DEPDIR)

clean:
	@rm -rf $(OBJDIR) $(DEPDIR)
	@echo "\033[1;32m ♻ BYE ♻\033[0m"

fclean: clean
	@rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re dir
