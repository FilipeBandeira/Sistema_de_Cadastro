CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic -Iinclude

SRC = src/main.cpp \
      src/Funcionario.cpp \
      src/Desenvolvedor.cpp \
      src/Gerente.cpp \
      src/Estagiario.cpp

EXEC = sistema_funcionarios
HEADERS = $(wildcard include/*.h)
LIBSRC = $(filter-out src/main.cpp,$(SRC))

.PHONY: all clean test

all: $(EXEC)

$(EXEC): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)

tests/test_funcionarios: tests/test_funcionarios.cpp $(LIBSRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $@ tests/test_funcionarios.cpp $(LIBSRC)

test: $(EXEC) tests/test_funcionarios
	./tests/test_funcionarios
	python3 -m unittest discover -s tests -v

clean:
	rm -f $(EXEC) src/*.o tests/test_funcionarios
