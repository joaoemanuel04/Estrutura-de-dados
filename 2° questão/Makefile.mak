CPP    = g++
RM     = rm -f
OBJS   = livros.o \
         codigo_livros.o

LIBS   =
CFLAGS =

.PHONY: pilha_livros.exe clean clean-after

all: pilha_livros.exe

clean:
	$(RM) $(OBJS) pilha_livros.exe

clean-after:
	$(RM) $(OBJS)

pilha_livros.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

livros.o: livros.c livros.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

codigo_livros.o: codigo_livros.c livros.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

