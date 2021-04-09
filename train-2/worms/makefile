# Declaration of variables
CC = g++
CC_FLAGS = -w -std=c++17 -Wfatal-errors

#Configuration of folders and files
BUILD_DIR = build/
APP_EXT = .app
OBJ_EXT = .o
SRC_EXT = .cpp
LINE_BREAK = 
 
# File names
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:%$(SRC_EXT)=$(BUILD_DIR)%$(OBJ_EXT))
EXEC = main$(APP_EXT)

# Main target
$(EXEC): $(BUILD_DIR) $(OBJECTS)
	$(eval LINE_BREAK = \n)
	$(CC) $(OBJECTS) -o $(EXEC)

# Make the build dir if it doesn't exist
$(BUILD_DIR):
	@mkdir $(BUILD_DIR)

# To obtain object files
$(BUILD_DIR)%.o: %.cpp
	@echo "\033[1;37m \t ### Building" $< "###\n\033[0m"
	@$(CC) -c $(CC_FLAGS) $< -o $@
 
# To remove generated files
clean:
	@echo "\033[1;37m \n\t ### Removing executables ###\n\033[0m"
	@rm -f $(EXEC) $(OBJECTS) *$(OBJ_EXT)
	@rm -rf $(BUILD_DIR) 

run: $(EXEC)
	@echo "\033[1;37m $(LINE_BREAK)\t ### Runing" $(notdir $<) "###\033[0m"
	@./$(EXEC)