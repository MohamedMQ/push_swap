# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaqbour <mmaqbour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 12:39:37 by mmaqbour          #+#    #+#              #
#    Updated: 2023/05/20 12:39:46 by mmaqbour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLORS

END_COLOR = \033[0;0m
RED = 		\033[0;91m
GREEN = 	\033[0;92m
YELLOW = 	\033[0;93m
BLUE = 		\033[0;94m
WHITE = 	\033[0;97m

#PROGRAMM NAMES

NAME = 		push_swap
CHECKER = 	checker

#DIRECTORIES

DIR_SRCS_PS = SRCS/Push_Swap/SRCS_PS
DIR_SRCS_CH = SRCS/Checker/SRCS_CH

DIR_OBJ_PS = SRCS/Push_Swap/OBJ_PS
DIR_OBJ_CH = SRCS/Checker/OBJ_CH

DIR_LIBFT = SRCS/Libft
DIR_INC = 	INC

#LIBRARY

LIBFT =	SRCS/Libft/libft.a

#HEADERS

HEADER_LIBFT = 	SRCS/Libft/INC/libft.h
HEADER_PS =		INC/push_swap.h
HEADER_CH = 	INC/checker.h
	
#PUSH_SWAP FILES

FILES_PS = 	main.c \
			check_errors_1.c \
			check_errors_2.c \
			initializer.c \
			swap_mov_and_actions.c \
			push_mov_and_actions.c \
			rotate_mov_and_actions.c \
			reverse_mov_and_actions.c \
			two_three_algorithm.c \
			four_five_algorithm.c \
			from_six_algorithm.c \
			smart_rotate.c 

#CHECKER FILES

FILES_CH = main.c \
		   check_errors_1.c \
		   check_errors_2.c \
		   ininializer.c \
		   instructions_reader.c \
		   push_mov_and_actions.c \
		   reverse_mov_and_actions.c \
		   rotate_mov_and_actions.c \
		   swap_mov_and_actions.c

#VARIABLES

CFLAGS =	-Wall -Werror -Wextra
CC =		cc 
RM =		rm -rf
MKDIR = 	mkdir -p

#OBJECTS VARIABLES

OBJ_PS = $(addprefix $(DIR_OBJ_PS)/, $(FILES_PS:.c=.o))
OBJ_CH = $(addprefix $(DIR_OBJ_CH)/, $(FILES_CH:.c=.o))


all:
		@make -C $(DIR_LIBFT)
		@make $(NAME)

#Compiling Rules for PUSH_SWAP

$(NAME):	$(DIR_OBJ_PS) $(OBJ_PS)
				@$(CC) $(CFLAGS) $(OBJ_PS) $(LIBFT) -o $(NAME)
				@echo "$(BLUE)Compiling push_swap...$(END_COLOR)"
				@echo "$(WHITE)push_swap is Compiled!$(END_COLOR)"

$(DIR_OBJ_PS)/%.o:	$(DIR_SRCS_PS)/%.c $(HEADER_PS) $(LIBFT)
						@$(CC) $(CFLAGS) -I $(DIR_INC) -I $(DIR_LIBFT) -c $< -o $@
						@echo "$(YELLOW)Compiling $<"

$(DIR_OBJ_PS):
				@mkdir $(DIR_OBJ_PS)

#Compiling Ruler for CHECKER

bonus:		
		@make -C $(DIR_LIBFT)
		@make $(CHECKER)

$(CHECKER):	$(DIR_OBJ_CH) $(OBJ_CH) 
				@$(CC) $(CFLAGS) $(OBJ_CH) $(LIBFT) -o $(CHECKER)
				@echo "$(BLUE)Compiling checker...$(END_COLOR)"
				@echo "$(WHITE)checker is Compiled!$(END_COLOR)"

$(DIR_OBJ_CH)/%.o:	$(DIR_SRCS_CH)/%.c $(HEADER_CH) $(LIBFT)
						@$(CC) $(CFLAGS) -I $(DIR_INC) -I $(DIR_LIBFT) -c $< -o $@
						@echo "$(YELLOW)Compiling $<"

$(DIR_OBJ_CH):
				@mkdir $(DIR_OBJ_CH)

#CLEANING RULES

clean:	
		@$(RM) $(OBJ_PS)
		@$(RM) $(OBJ_CH)
		@make clean -C $(DIR_LIBFT)
		@$(RM) $(DIR_OBJ_PS)
		@$(RM) $(DIR_OBJ_CH)
		@echo "${BLUE}All Objects are removed!${END_COLOR}"

fclean:	clean
			@$(RM) $(NAME)
			@$(RM) $(CHECKER)
			@make fclean -C $(DIR_LIBFT)
			@echo "${BLUE}ALL CLEANED!${END_COLOR}"

re:	fclean all
		@echo "${YELLOW}Cleaned und rebuilt everything for push_swap${END_COLOR}"
		
.PHONY:	all clean fclean re 
