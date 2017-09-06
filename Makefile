# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlecart <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 00:43:30 by rlecart           #+#    #+#              #
#    Updated: 2017/08/31 00:14:05 by rlecart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT		=	LEM-IN
NAME1		=	lem-in
OBJDIR		=	objs/
SRCDIR		=	srcs/
SRCS		=	lem-in.c
LIBFT		=	libft/libft.a
OBJS		=	$(addprefix $(BINDIR),$(SRC:.c=.o))
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I includes/ -I libft/includes/
OPTI		=	-Ofast
DEBUG		=	-fsanitize=address -g

WHITE		=	\033[7;49;39m
BLUE		=	\033[7;49;34m
RED			=	\x1B[31m
YELLOW		=	\x1B[33m
GREEN		=	\033[0;49;32m
GREEN_BG	=	\033[1;49;32m
GRAY		=	\033[7;49;90m
NO_COLOR	=	\033[m

all: lib $(NAME)

$(NAME): $(LIBFT) $(OBJDIR) $(OBJS)
	@printf "\r$(GREEN)[$(PROJECT)] Objs compilation done.                                                        \n"
	@printf "$(YELLOW)[$(PROJECT)] Compiling $(NAME)..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(DEBUG)
	@printf "\r$(GREEN)[$(PROJECT)] Compilation done.                          \n$(NO_COLOR)"

$(OBJDIR)%.o: $(SRCDIR)%.c
	@printf "$(YELLOW)\r[$(PROJECT)] Compiling $< to $@                                                           \r"
	@$(CC) $(CFLAGS) -o $@ -c $< $(DEBUG)

lib:
	@make -s -C libft 2> /dev/null > /dev/null

$(OBJDIR):
	@mkdir objs

clean:
	@make -s -C libft clean
	@printf "$(YELLOW)[$(PROJECT)] Removing objs..."
	@rm -rf $(OBJS)
	@rm -rf $(OBJDIR)
	@printf "\r$(GREEN)[$(PROJECT)] Objs removed.                                                      \n$(NO_COLOR)"

fclean:
	@make -s -C libft fclean
	@printf "$(YELLOW)[$(PROJECT)] Removing objs..."
	@rm -rf $(OBJS)
	@rm -rf $(OBJDIR)
	@printf "\r$(GREEN)[$(PROJECT)] Objs removed.                                                      \n$(NO_COLOR)"
	@printf "$(YELLOW)[$(PROJECT)] Removing $(NAME)..."
	@rm -rf $(NAME)
	@printf "\r$(GREEN)[$(PROJECT)] $(NAME) removed.                                                   \n$(NO_COLOR)"

re: fclean all

.PHONY: all clean fclean re
