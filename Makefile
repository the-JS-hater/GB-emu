SRCS = src
IDIR = include
ODIR = obj

CC = gcc
CFLAGS = -I$(IDIR)
LIBS = -lraylib

_DEPS = memory.h cpu.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_SRC = main.c memory.c cpu.c
SRC = $(patsubst %,$(SRCS)/%,$(_SRC))

_OBJ = main.o memory.o cpu.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SRCS)/%.c $(DEPS)
	@mkdir -p $(ODIR)
	$(CC) -c -o $@ $< $(CFLAGS)

gameboy: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -rf $(ODIR)/*.o gameboy

