# run with the command: 
# cd "h:\directory of file"
# mingw32-make			<- run first "all"
# mingw32-make clean	<- run "clean"
# ./main.exe


all: main.o Item.o Weapon.o Shield.o Consumable.o Inventory.o 
	g++ main.o Item.o Weapon.o Shield.o Consumable.o Inventory.o -o main

main.o: main.cpp
	g++ -c main.cpp

Item.o: Item.cpp
	g++ -c Item.cpp

Weapon.o: Weapon.cpp
	g++ -c Weapon.cpp

Shield.o: Shield.cpp
	g++ -c Shield.cpp

Consumable.o: Consumable.cpp
	g++ -c Consumable.cpp

Inventory.o: Inventory.cpp
	g++ -c Inventory.cpp

clean:
	rm main.o Item.o Weapon.o Shield.o Consumable.o Inventory.o


