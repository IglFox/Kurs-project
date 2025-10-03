KursProj: main.o functions.o
	gcc -o KursProj main.o functions.o

main.o: SourceFiles/main.c
	gcc -c SourceFiles/main.c

functions.o: ResourceFiles/functions.c
	gcc -c ResourceFiles/functions.c

clean:
	rm *.o