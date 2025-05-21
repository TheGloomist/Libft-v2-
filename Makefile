NAME = libft.a

#HEADERS := -I ./include
SRC := $(shell find ./src -iname "*.c")

CFLAGS = -Wall -Werror -Wextra #-g -fsanitize=address
CC = gcc

OBJDIR = objs
LIBFT_OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(LIBFT_OBJ)
	@echo compiling libft...
	@$(CC) $(CFLAGS) $(LIBFT_OBJ) -o $(NAME)

$(OBJDIR)/%.o: src/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p objs

clean:
	@echo cleaning .o files...
	@rm -f $(LIBFT_OBJ)

fclean: clean
	@echo cleaning folders...
	@rm -f $(NAME)
	@rm -f objs	

re: fclean all

.PHONY: all clean fclean re bonus