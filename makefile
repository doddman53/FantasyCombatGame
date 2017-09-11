# Makefile for Assignment 3, Fantasy Battle Sim

CXX = g++ -std=c++11

HEADERS = Creature.hpp ReptilePeople.hpp Medusa.hpp BlueMen.hpp HarryPotter.hpp Gollum.hpp

SRCS = Creature.cpp ReptilePeople.cpp Medusa.cpp BlueMen.cpp HarryPotter.cpp Gollum.cpp main.cpp

HW3: ${SRCS} ${HEADERS}
	${CXX} ${SRCS} -o game

clean:
	${RM} HW3
