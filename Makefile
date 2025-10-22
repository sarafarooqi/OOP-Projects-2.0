# Minimal Makefile for macOS (Clang)
CXX      = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

main-1: BrowserHistory.cpp main-1.cpp
	$(CXX) $(CXXFLAGS) BrowserHistory.cpp main-1.cpp -o main-1

main-2: GradeManager.cpp main-2.cpp
	$(CXX) $(CXXFLAGS) GradeManager.cpp main-2.cpp -o main-2

main-3: RecordManager.cpp main-3.cpp
	$(CXX) $(CXXFLAGS) RecordManager.cpp main-3.cpp -o main-3

clean:
	rm -f main-1 main-2 main-3
