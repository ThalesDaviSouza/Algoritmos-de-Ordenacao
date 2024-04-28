output: main.o sorting.o
	gcc main.o sorting.o -o output
	output

main.o: main.c
	gcc -c main.c

sorting.o: ./src/sorting.c ./include/sorting.h
	gcc -c .\src\sorting.c

test-selection-sort: ./tests/selectionSort.c
	gcc ./tests/selectionSort.c -o selectionSort 
	selectionSort

test-bubble-sort: ./tests/bubbleSort.c
	gcc ./tests/bubbleSort.c -o bubbleSort 
	bubbleSort

clean:
	@echo "Starting clean..."
	del *.o *.exe
	@echo "All files cleaned"