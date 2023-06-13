# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 12:15:31 by sfernand          #+#    #+#              #
#    Updated: 2023/06/12 16:56:14 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
AR = ar rcs
RM = rm -f

PUSH_FILES = main

PARCING_FILES = ft_check_args

INSTRUCTION_FILES = ft_swap \
					ft_rotate \
					ft_reverse_rotate \
					ft_push

GNL_FILE = get_next_line \
			get_next_line_utils

PRINTF_PATH = ./ft_printf/
PRINTF_FILE = libftprintf.a

LIBFT_PATH = ./libft/
LIBFT_FILE = libft.a

FTPRINTF_PRINTF = $(addprefix $(PRINTF_PATH), $(PRINTF_FILE))

LIBFT_LIB = $(addprefix $(LIBFT_PATH), $(LIBFT_FILE))

GNL_DIR = ./get_next_line/
GNL = $(addprefix $(GNL_DIR), $(addsuffix .c, $(GNL_FILE)))

OBJS_GNL_DIR = ./get_next_line/
OBJS_GNL = $(addprefix $(OBJS_GNL_DIR), $(addsuffix .o, $(GNL_FILE)))

SRCS_PUSH_DIR = ./src/push_swap/
SRCS_PUSH = $(addprefix $(SRCS_PUSH_DIR), $(addsuffix .c, $(PUSH_FILES)))

OBJS_PUSH_DIR = ./src/push_swap/
OBJS_PUSH = $(addprefix $(OBJS_PUSH_DIR), $(addsuffix .o, $(PUSH_FILES)))

SRCS_PARCING_DIR = ./src/parcing/
SRCS_PARCING = $(addprefix $(SRCS_PARCING_DIR), $(addsuffix .c, $(PARCING_FILES)))

OBJS_PARCING_DIR = ./src/parcing/
OBJS_PARCING = $(addprefix $(OBJS_PARCING_DIR), $(addsuffix .o, $(PARCING_FILES)))

SRCS_INSTRUCTION_DIR = ./src/instruction/
SRCS_INSTRUCTION = $(addprefix $(SRCS_INSTRUCTION_DIR), $(addsuffix .c, $(INSTRUCTION_FILES)))

OBJS_INSTRUCTION_DIR = ./src/instruction/
OBJS_INSTRUCTION = $(addprefix $(OBJS_INSTRUCTION_DIR), $(addsuffix .o, $(INSTRUCTION_FILES)))

.c.o: $(SRCS_PUSH) $(SRCS_PARCING) $(SRCS_INSTRUCTION), $(GNL)
	$(CC) $(CFLAGS) -D BUFFER_SIZE=1 -c -o $@ $<

$(NAME): $(OBJS_PUSH) $(OBJS_PARCING) $(OBJS_INSTRUCTION) $(OBJS_GNL)
	make -sC $(LIBFT_PATH)
	make -sC $(PRINTF_PATH)
	gcc $(CFLAGS) $(OBJS_PUSH) $(OBJS_PARCING) $(OBJS_INSTRUCTION) $(OBJS_GNL) $(LIBFT_LIB) $(FTPRINTF_PRINTF) -o $(NAME)

all: $(NAME)

ft_printf:
	make -sC $(PRINTF_PATH)

lib: 
	@make -sC $(LIBFT_PATH)

norminette:
	@norminette ./src/

clean:
	$(RM) $(OBJS_PUSH)
	$(RM) $(OBJS_PARCING)
	$(RM) $(OBJS_INSTRUCTION)
	$(RM) $(OBJS_GNL)
	@make clean -sC $(LIBFT_PATH)
	@make clean -sC $(PRINTF_PATH)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS_PARCING)
	$(RM) $(OBJS_INSTRUCTION)
	$(RM) $(OBJS_PUSH)
	$(RM) $(OBJS_GNL)
	make fclean -sC $(LIBFT_PATH)
	make fclean -sC $(PRINTF_PATH)
	
re: clean all

