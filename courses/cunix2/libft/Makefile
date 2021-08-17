#CLEANEXTS = o a

#OUTPUTFILE = libft.a
#INSTALLDIR = ../binaries

#Default target
#.PHONY: all

#all: $(OUTPUTFILE)

#$(OUTPUTFILE): *.o #%.o
#	ar ru $@ $^
#	ranlib $@

#.PHONY: install

#install:
#	mkdir -p $(INSTALLDIR)
#	cp -p $(OUTPUTFILE) $(INSTALLDIR)

#.PHONY: clean
#clean:
#	for file in $(CLEANEXTS); do rm -f *.$$file; done

#*.o:
#SRCS: := $(wildcard ./*.c)
#SRCS := $(shell find . -name '*.c')

SRCS = ft_abs.c ft_div.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_isalpha.c ft_isdigit.c \
       ft_isascii.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
       ft_strdup.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_strmap.c \
       ft_striter.c ft_memset.c ft_strstr.c
OBJS := $(SRCS:.c=.o)

CC := gcc

CFLAGS += -Iinclude -Wall -Wextra -Werror -g

all: $(OBJS) libft.a clean
all: ##ft_abs.o ft_div.o libft.a

%.o: %.c
	$(CC) $(CFLAGS) $^ -c -o $@ #$< -o $@
#	$(CC) $(CFLAGS) $(OBJS) -c $< -o $@
#%.c:
#	$(CC) $(CFLAGS) $(OBJS)

libft.a: $(OBJS) #ft_abs.o ft_div.o #*.o
	ar rcs libft.a $(OBJS) #ft_abs.o ft_div.o#*.o
libs: libft.a clean

clean:
	rm -f *.o #*.a
