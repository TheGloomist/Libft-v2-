# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: iazaitce <iazaitce@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2025/05/21 18:57:48 by iazaitce      #+#    #+#                  #
#    Updated: 2025/05/21 19:09:34 by iazaitce      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
CC 			= gcc 
CFLAGS 		= -Wall -Wextra -Werror -g -fsanitize=address

#HEADERS	= -I ./include
SRC 	= $(shell find ./src -iname "*.c")
OBJS = $(SRC:%.c=%.o)

all: $(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re