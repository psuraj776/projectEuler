# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g -I.

# Directories
UTIL_DIR = util
CODE_DIR = code

# Source files for utility library
UTIL_SRCS = $(wildcard $(UTIL_DIR)/*.cpp)
UTIL_OBJS = $(UTIL_SRCS:.cpp=.o)

# Library
LIB = $(UTIL_DIR)/libutil.a

# Source files for executables
SOURCES = $(wildcard $(CODE_DIR)/*.cpp)
EXECS = $(patsubst $(CODE_DIR)/%.cpp,$(CODE_DIR)/%,$(SOURCES))

# Default build
all: $(LIB) $(EXECS)

# Build each executable
$(CODE_DIR)/%: $(CODE_DIR)/%.cpp $(LIB)
	$(CXX) $(CXXFLAGS) -o $@ $< $(LIB)

# Build static library
$(LIB): $(UTIL_OBJS)
	ar rcs $@ $^

$(UTIL_DIR)/%.o: $(UTIL_DIR)/%.cpp $(UTIL_DIR)/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(UTIL_DIR)/*.o $(UTIL_DIR)/*.gch $(LIB)
	find $(CODE_DIR) -type f ! -name '*.cpp' ! -name '*.h' -delete

.PHONY: all clean

