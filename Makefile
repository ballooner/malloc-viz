SRCDIR:=src/
INCDIR:=include/

CC:=gcc
C_FLAGS:=-W -Wextra -Wall -pedantic-errors -I$(INCDIR)

SRCFILES:=$(wildcard $(SRCDIR)*.c)

mem-viz: $(SRCFILES)
	$(CC) $(C_FLAGS) $(SRCFILES) -o mem-viz

clean:
	@rm -f mem-viz
