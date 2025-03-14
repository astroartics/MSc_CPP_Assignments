CC=g++
CCFLAGS=-I.
DEPS=Board.h Queen.h
TARGET=output
OBJS=main.o Queen.o Board.o

# Rule to compile .cpp files to .o object files
%.o: %.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c $< -o $@

# Rule to link object files into the final executable
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

# Clean rule to remove object files and the target executable
clean:
	rm -f $(OBJS) $(TARGET)