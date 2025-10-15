CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = program.out

SRC = main.cpp BattleGame.cpp Player.cpp GameInterface.cpp
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
