output: main.o sorting.o
	gcc main.o sorting.o -o output

main.o: main.c
	gcc -c main.c

sorting.o: ./src/sorting.c ./include/sorting.h
	gcc -c .\src\sorting.c

test-selection-sort:
	gcc ./tests/selectionSort.c -o selectionSort && selectionSort

clean:
	@echo "Starting clean..."
	del *.o *.exe
	@echo "All files cleaned"