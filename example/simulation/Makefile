INCDIR=-I$(HOME)/.local/include/ -I/opt/local/include
LIBDIR=-L$(HOME)/.local/lib/ -L/opt/local/lib
LIBS=-lgsl -lgslcblas -lconfig++ -lergopack -lgomp
CONFIG=../cfg/readConfig

CC=g++ -g -ggdb
WARN=-w
OMPFLAGS=-fopenmp
CFLAGS=$(WARN) -O3
LDFLAGSSTD=-undefined dynamic_lookup
LDFLAGSGDB=$(LDFLAGSSTD) -gdb

LDFLAGS=$(LDFLAGSSTD)
#LDFLAGS=$(LDFLAGSGDB)

#EXE=simOU
EXE=simHopf
# EXE=simSDDE
#EXE=simLorenz63

all:$(EXE).out

$(EXE).o:$(EXE).cpp
	$(CC) $(OMPFLAGS) -c $(CFLAGS) $(INCDIR) -o $@ $<

$(CONFIG).o:$(CONFIG).cpp
	$(CC) $(OMPFLAGS) -c $(CFLAGS) $(INCDIR) -o $@ $<

$(EXE).out:$(EXE).o $(CONFIG).o
	$(CC) $(OMPFLAGS) $(LDFLAGS) -o $@ $^ $(LIBDIR) $(LIBS)

clean:
	rm -f $(EXE).o $(EXE).out 
	rm -rf $(EXE).out.dSYM

cleanall:
	rm -f $(EXE).o $(CONFIG).o $(EXE).out
	rm -rf $(EXE).out.dSYM
