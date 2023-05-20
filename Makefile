# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-der <avan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/05/19 19:21:19 by avan-der      #+#    #+#                  #
#    Updated: 2023/05/20 15:17:10 by avan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# CONFIG
NAME		=	libft.a
INCLUDE		=	include/
SRC_DIR 	=	src/
OBJ_DIR		=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

# COLORS
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# SOURCES
IS_DIR		=	is/
IS			=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

MEM_DIR		=	mem/
MEM			=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset

PUT_DIR		=	put/
PUT			=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

TO_DIR		=	to/
TO			=	ft_atoi ft_itoa ft_tolower ft_toupper

STR_DIR		=	str/
STR			=	ft_split ft_strchr ft_strdup ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr

LST_DIR		=	lst/
LST			=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

PRINTF_DIR	=	printf/
PRINTF 		=	ft_printf ft_printf_utils ft_print_ptr ft_print_base_num

SRC_FILES+=$(addprefix $(IS_DIR),$(IS))
SRC_FILES+=$(addprefix $(MEM_DIR),$(MEM))
SRC_FILES+=$(addprefix $(PUT_DIR),$(PUT))
SRC_FILES+=$(addprefix $(TO_DIR),$(TO))
SRC_FILES+=$(addprefix $(STR_DIR),$(STR))
SRC_FILES+=$(addprefix $(LST_DIR),$(LST))
SRC_FILES+=$(addprefix $(PRINTF_DIR),$(PRINTF))

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))


###

OBJF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@ranlib $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(IS_DIR)
			@mkdir -p $(OBJ_DIR)$(MEM_DIR)
			@mkdir -p $(OBJ_DIR)$(PUT_DIR)
			@mkdir -p $(OBJ_DIR)$(TO_DIR)
			@mkdir -p $(OBJ_DIR)$(STR_DIR)
			@mkdir -p $(OBJ_DIR)$(LST_DIR)
			@mkdir -p $(OBJ_DIR)$(PRINTF_DIR)

clean:
			@$(RM) -rf $(OBJ_DIR)
			@$(RM) -f $(OBJF)

fclean:		clean
			@$(RM) -f $(NAME)

re:			fclean all

norm:
			@norminette $(SRC) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm