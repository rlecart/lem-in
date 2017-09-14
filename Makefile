# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 16:32:35 by pbernier          #+#    #+#              #
#    Updated: 2017/09/13 17:44:21 by rlecart          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT			=	LEM_IN
NAME			=	lem-in
OBJDIR			=	objs/
SRCDIR			=	srcs/
SRC				=	main.c \
					init.c \
					info.c \
					clean.c \
					error.c \
					print.c \
					value.c \
					init_room.c \
					init_link.c \
					weighting.c \
					road_trip.c
OBJ				=	$(addprefix $(OBJDIR),$(SRC:.c=.o))
LIB				=	lib/libft/libft.a
CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra
DFLAGS			=	-g
INCLUDES		=	-I includes/ -I lib/libft/includes/

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	@make -C ./lib/libft
	@printf "[$(PROJECT)] Objs compilation done.                                               \n"
	@$(CC) -o $(NAME) $(OBJ) $(LIB) $(FLAGS) $(DFLAGS)
	@printf "[$(PROJECT)] $(NAME) compiled.                                                    \n"


$(OBJDIR)%.o: $(SRCDIR)%.c
	@printf "[$(PROJECT)] Compiling $< to $@                                                   \r"
	@$(CC) $(FLAGS) $(INCLUDES) -o $@ -c $< $(DFLAGS)

$(OBJDIR):
	@mkdir objs

clean:
	@rm -f $(OBJ)
	@rm -rf $(OBJDIR)
	@make -C ./lib/libft clean
	@printf "[$(PROJECT)] Obj removed.                                                           \n"

fclean: clean
	@rm -f $(LIB)
	@rm -rf $(NAME)
	@printf "[$(PROJECT)] $(NAME) removed.                                                       \n"

re: fclean all

.PHONY: all clean fclean re
