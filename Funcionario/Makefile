CXX = g++
CXXFLAGS = -Wall -Iinclude

SRC = src/main.cpp \
      src/Funcionario.cpp \
      src/Desenvolvedor.cpp \
      src/Gerente.cpp \
      src/Estagiario.cpp

EXEC = sistema_funcionarios

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(EXEC) src/*.o
