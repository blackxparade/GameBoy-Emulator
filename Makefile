OBJS = GameBoy.o CPU.o Opcodes.o GPU.o 
CC = g++
DEBUG = -g
C11 = -std=c++11
SDL = -lSDL2
CFLAGS = $(C11) -Wall -c $(DEBUG)
LFLAGS = $(C11) -Wall $(DEBUG)

GB : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) $(SDL) -o GB

GameBoy.o : GameBoy.cpp render/GPU.h cpu/CPU.h
	$(CC) $(CFLAGS) GameBoy.cpp

CPU.o : cpu/CPU.h cpu/CPU.cpp
	$(CC) $(CFLAGS) cpu/CPU.cpp

Opcodes.o : cpu/CPU.h cpu/Opcodes.cpp
	$(CC) $(CFLAGS) cpu/Opcodes.cpp

GPU.o : render/GPU.h render/GPU.cpp
	$(CC) $(CFLAGS) render/GPU.cpp

clean:
	\rm *.o GB

run:
	./GB ../ROM/Legend\ of\ Zelda.gb
