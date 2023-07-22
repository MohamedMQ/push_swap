# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 12:38:08 by mmaqbour          #+#    #+#              #
#    Updated: 2023/05/20 12:38:10 by mmaqbour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLORS

END_COLOR = \033[0;0m
RED = 		\033[0;91m
GREEN = 	\033[0;92m
YELLOW = 	\033[0;93m
BLUE = 		\033[0;94m
WHITE = 	\033[0;97m

#FILES

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	   ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	   ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strjoin_line.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   get_next_line.c 

SRCSBONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

#Folders NAME

DIR_OBJS = 			OBJS
DIR_OBJS_BONUS = 	OBJS_BONUS
DIR_SRCS = 			SRCS
DIR_SRCS_BONUS = 	SRCS_BONUS
DIR_INC = 			INC

#VARIABLES

NAME =			libft.a
CC = 			cc
RM = 			rm -rf
CFLAGS = 		-Wall -Wextra -Werror
HEADER_LIB = 	INC/libft.h

#Objects

OBJ = 		$(addprefix $(DIR_OBJS)/, $(SRCS:.c=.o))
OBJBONUS = 	$(addprefix $(DIR_OBJS_BONUS)/, $(SRCSBONUS:.c=.o))


all: 		
		@make $(NAME)

$(NAME):	$(DIR_OBJS) $(OBJ)
				@ar rcs ${NAME} ${OBJ}
				@echo "$(BLUE)Compiling Libft...$(END_COLOR)"
				@echo "$(WHITE)Libft is Compiled!$(END_COLOR)"

$(DIR_OBJS):
				@mkdir OBJS

$(DIR_OBJS_BONUS):
					@mkdir OBJS_BONUS

$(DIR_OBJS)/%.o:	$(DIR_SRCS)/%.c $(HEADER_LIB)
						@$(CC) $(CFLAGS) -I $(DIR_INC) -c $< -o $@
						@echo "$(YELLOW)Compiling $<"

$(DIR_OBJS_BONUS)/%.o:	$(DIR_SRCS_BONUS)/%.c $(HEADER_LIB)
							@$(CC) $(CFLAGS) -I $(DIR_INC) -c $< -o $@
							@echo "$(YELLOW)Compiling $<"

bonus:	$(DIR_OBJS) $(DIR_OBJS_BONUS) $(OBJ) $(OBJBONUS) $(HEADER_LIB)
			@ar rcs $(NAME) $(OBJ) $(OBJBONUS)
			@echo "$(BLUE)Compiling Libft with Bonus...$(END_COLOR)"
			@echo "$(WHITE)Libft with Bonus is Compiled!$(END_COLOR)"

clean: 		
			@$(RM) $(OBJ)
			@$(RM) $(DIR_OBJS)
			@$(RM) $(OBJBONUS)
			@$(RM) $(DIR_OBJS_BONUS)

fclean:	clean
			@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus
