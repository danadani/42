# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haelee <haelee@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/08 17:19:08 by haelee            #+#    #+#              #
#    Updated: 2020/10/08 17:41:23 by haelee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
Name = libft.a

SRCS = ft_strlen.c ft_strlcpy.c
OBJS = $(SRCS:.c=.o)
all : $(Name)

$(Name) : $(OBJS)
	ar cr $(Name) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(name)

re : fclean all