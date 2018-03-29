# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmulish <dmulish@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 17:09:22 by dmulish           #+#    #+#              #
#    Updated: 2018/03/29 15:54:20 by dmulish          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = avm

FLAGS = -Wall -Wextra -Werror -I includes -g

SRCS = IOperand.cpp	\

BINS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(BINS)
	clang -std=c++11 -o $(NAME) $(FLAGS) $(BINS)

%.o: %.cpp
	clang -std=c++11 $(FLAGS) -c -o $@ $<

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
