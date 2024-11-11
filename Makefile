NAME := libft.a

SRCS := ft_isalnum.c

OBJS := $(SRCS:.c=.o)

AR: ar
ARFLAGS: -rcs

CC := CC
CFLAGS := -Wall -Werror -Wextra

all: $(NAME)

%.o %.c:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(OBJS) -o $(NAME)

clean: rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)	

re: fclean all
