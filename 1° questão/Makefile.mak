CPP    = g++
RM     = rm -f
OBJS   = nome.o \
         codigo_nome.o

LIBS   =
CFLAGS =

.PHONY: Lista_nomes.exe clean clean-after

all: Lista_nomes.exe

clean:
	$(RM) $(OBJS) Lista_nomes.exe

clean-after:
	$(RM) $(OBJS)

Lista_nomes.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

nome.o: nome.c nome.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

codigo_nome.o: codigo_nome.c nome.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

