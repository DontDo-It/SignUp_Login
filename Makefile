# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = ./src
INCDIR = ./includes
OBJDIR = ./obj

SOURCES = $(wildcard $(SRCDIR)/*.c)

OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

# Binary target
BIN = my_program

# Rules
all: $(BIN)

$(BIN): $(OBJECTS)
	$(CC) $(CFLAGS) -I$(INCDIR) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -I$(INCDIR) -o $@ $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(BIN)

re: fclean all

.PHONY: all clean fclean re
