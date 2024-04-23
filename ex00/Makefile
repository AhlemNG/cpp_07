# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouri <anouri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 17:56:46 by anouri            #+#    #+#              #
#    Updated: 2024/04/23 17:57:31 by anouri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= templates

INCDIR= -I./incs

SRCDIR= ./srcs

# BUILDDIR= ./objs

CXX= c++

CXXFLAGS= -Wall -Werror -Wextra -std=c++98 ${INCDIR} 

SRCS = ${wildcard ${SRCDIR}/*.cpp}

OBJS = ${SRCS:.cpp=.o}

RM= rm -rf

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -g -o $@

all: ${NAME}

%.o:%.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.Phony: clean fclean re