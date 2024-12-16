# run with the command: 
# cd "h:\directory of file"
# mingw32-make			<- run first "all"
# mingw32-make clean	<- run "clean"
# ./main.exe
# Item.o Bag.o BuyItem.o FindItem.o SellItem.o
all: main.o Item.o Bag.o SellItem.o
	g++ main.o Item.o Bag.o SellItem.o -o main

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm main.o Item.o Bag.o SellItem.o


