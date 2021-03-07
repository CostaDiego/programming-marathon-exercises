# Declaration of variables
CC = g++
CC_FLAGS = -w -std=c++17 -Wfatal-errors

#Configuration of folders and files
BUILD_DIR = build/
APP_EXT = .app
OBJ_EXT = .o
SRC_EXT = .cpp
 
# File names
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:%$(SRC_EXT)=$(BUILD_DIR)%$(OBJ_EXT))
EXEC = main$(APP_EXT)

# Main target
$(EXEC): $(BUILD_DIR) $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

# Make the build dir if it doesn't exist'
$(BUILD_DIR):
	@mkdir $(BUILD_DIR)

# To obtain object files
$(BUILD_DIR)%.o: %.cpp
	@echo "\033[1;37mBuilding" $< "\033[0m"
	@$(CC) -c $(CC_FLAGS) $< -o $@
 
# To remove generated files
clean:
	@echo "Removing executables"
	@rm -rf *$(BUILD_DIR) 
	@rm -f $(EXEC) $(OBJECTS)

run:
	@./$(EXEC)