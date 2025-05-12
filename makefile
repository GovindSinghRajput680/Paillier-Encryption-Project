# Default target
all: program

# Rule to link object files to create the final executable
program: receiver.o sender.o encryption.o decryption.o
	g++ receiver.o sender.o encryption.o decryption.o -o program

# Rule for compiling receiver.cpp to receiver.o
receiver.o: receiver.cpp common.h
	g++ -Wall -g -c receiver.cpp

# Rule for compiling sender.cpp to sender.o
sender.o: sender.cpp common.h encryption.o
	g++ -Wall -g -c sender.cpp

# Rule for compiling encryption.cpp to encryption.o
encryption.o: encryption.cpp sender.o common.h
	g++ -Wall -g -c encryption.cpp

# Rule for compiling decryption.cpp to decryption.o
decryption.o: decryption.cpp encryption.o sender.o common.h
	g++ -Wall -g -c decryption.cpp

# Clean rule to remove object files and the executable
clean:
	rm -f receiver.o sender.o encryption.o decryption.o program

# Phony targets (not real files)
.PHONY: all clean
