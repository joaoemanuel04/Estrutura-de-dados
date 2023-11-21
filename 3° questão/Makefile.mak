CPP    = g++
RM     = rm -f
OBJS   = paciente.o \
         codigo_paciente.o

LIBS   =
CFLAGS =

.PHONY: fila_paciente.exe clean clean-after

all: fila_paciente.exe

clean:
	$(RM) $(OBJS) fila_paciente.exe

clean-after:
	$(RM) $(OBJS)

fila_paciente.exe: $(OBJS)
	$(CPP) -Wall -s -o $@ $(OBJS) $(LIBS)

paciente.o: paciente.c paciente.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

codigo_paciente.o: codigo_paciente.c paciente.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

