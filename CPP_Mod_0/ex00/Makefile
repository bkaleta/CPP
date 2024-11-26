# Kompilator i flagi
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++17

# Pliki źródłowe i wynikowe
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = megaphone

# Domyślny cel: kompiluj program
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Czyszczenie plików pośrednich
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets
.PHONY: all clean