# Definindo  compilador
CXX = g++

# Definindo os arquivos fonte
SRCS = main.cpp carteira.cpp exchange.cpp transacao.cpp

# Definindo os arquivos objeto
OBJS = $(SRCS:.cpp=.o)

# Nome do executável
TARGET = carteira_cripto_online

# Regras de compilação
all: $(TARGET)

$(TARGET): $(OBJS)
    $(CXX) -o $(TARGET) $(OBJS)

%.o: %.cpp
    $(CXX) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)