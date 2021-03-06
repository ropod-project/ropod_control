# Defining the compiler:
CC=gcc

# Defining compiler flags:
CFLAGS=-O2 -Wall -g

# Defining linker flags:
LFLAGS=-O2 -lpthread -lm -lrt -lc -Wall

# Defining the object files:
sim_o   = simple_test.o \
          ethercatconfig.o \
          ethercatcoe.o \
          ethercatfoe.o \
          ethercatmain.o \
          ethercatbase.o \
          ethercatprint.o \
          ethercatsoe.o \
          nicdrv.o

ime_o   = ime_test.o \
          ethercatconfig.o \
          ethercatcoe.o \
          ethercatdc.o \
          ethercatmain.o \
          ethercatbase.o \
          ethercatprint.o \
          ethercatsoe.o \
          nicdrv.o

red_o   = red_test.o \
          ethercatconfig.o \
          ethercatcoe.o \
          ethercatdc.o \
          ethercatmain.o \
          ethercatbase.o \
          ethercatprint.o \
          ethercatsoe.o \
          nicdrv.o

info_o   = slaveinfo.o \
          ethercatconfig.o \
          ethercatcoe.o \
          ethercatdc.o \
          ethercatmain.o \
          ethercatbase.o \
          ethercatprint.o \
          ethercatsoe.o \
          nicdrv.o

# The default rule - compiling our main program:
all:	simple_test ime_test red_test slaveinfo
	echo all: make complete

simple_test: $(sim_o)
	$(CC) $(LFLAGS) -o $@ $+

ime_test: $(ime_o)
	$(CC) $(LFLAGS) -o $@ $+

red_test: $(red_o)
	$(CC) $(LFLAGS) -o $@ $+

slaveinfo: $(info_o)
	$(CC) $(LFLAGS) -o $@ $+

# Tell make how to build .o files from .c files:
%.o:%.c
	$(CC) $(CFLAGS) -c $+
	
# Removing the executable and the object files
clean: 
	rm slaveinfo simple_test ime_test red_test *.o
	echo clean: make complete
