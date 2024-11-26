# Kompilator i flagi
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++17 -std=c++98

# Nazwa programu
TARGET = phonebook

# Pliki źródłowe i obiekty
SRCS = main.cpp PhoneBook.cpp Contact.cpp
OBJS = $(SRCS:.cpp=.o)

# Reguła domyślna
all: $(TARGET)

# Reguła budowania pliku wykonywalnego
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Reguła dla plików obiektowych
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Reguła czyszcząca
clean:
	rm -f $(OBJS) $(TARGET)

# Reguła uruchomienia
run: $(TARGET)
	./$(TARGET)
