# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/01 16:16:33 by thhusser          #+#    #+#              #
#    Updated: 2022/05/15 16:17:45 by thhusser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_NC=`tput sgr0`
_RED=\033[0;31m
_GREEN=\033[0;32m
_YELLOW=\033[0;33m
_BLUE=\033[0;34m
_PURPLE=\033[0;95m
_CYAN=\033[0;36m
_WHITE=\033[0;37m

NAME	= 	Array

SRCS	=	main.cpp \

HEADER 	=	Array.hpp \

OBJS	=	${SRCS:.cpp=.o}

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

CC		=	c++

.cpp.o:
			@printf "$(_WHITE)Generating $(NAME) objects... %-33.33s\r$(_NC)" $@
			@$(CC) ${CFLAGS} -c $< -o $(<:.cpp=.o)

${NAME}:	${OBJS}
			@echo ""
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "$(_GREEN)Generating $(NAME)$(_NC)"

all:		${NAME}

clean:
ifneq ($(wildcard $(OBJS)),)
		@${RM} $(OBJS);
		@echo "$(_GREEN)Deletes objects files $(NAME)$(_NC)"
endif

fclean:		clean
ifneq ($(wildcard $(NAME)),)
		@${RM} ${NAME};
		@echo "$(_GREEN)Delete $(NAME)$(_NC)"
		@${RM} *_shrubbery
endif

re:			fclean all

.PHONY:		all clean fclean re bonus
