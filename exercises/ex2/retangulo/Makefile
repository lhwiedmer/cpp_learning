nomePrograma=retangulo
parametrosCompilacao=-Wall

all:$(nomePrograma)

$(nomePrograma): main.o Retangulo.o
	g++ -o $(nomePrograma) main.o Retangulo.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.cpp Retangulo.hpp
	g++ -c Retangulo.cpp $(parametrosCompilacao)

clean:
	rm -f *.o $(nomePrograma)
