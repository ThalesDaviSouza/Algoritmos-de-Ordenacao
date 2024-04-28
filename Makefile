output: main.o sorting.o
	gcc main.o sorting.o -o output
	output

main.o: main.c
	gcc -c main.c

sorting.o: ./src/sorting.c ./include/sorting.h
	gcc -c .\src\sorting.c

test-all:
	make test-selection-sort
	make test-bubble-sort
	make test-insertion-sort

test-selection-sort: ./tests/selectionSort.c
	@echo "Starting selection sort tests..."
	gcc ./tests/selectionSort.c -o selectionSort 
	selectionSort
	@echo "Tests done"

test-bubble-sort: ./tests/bubbleSort.c
	@echo "Starting bubble sort tests..."
	gcc ./tests/bubbleSort.c -o bubbleSort 
	bubbleSort
	@echo "Tests done"

test-insertion-sort: ./tests/InsertionSort.c
	@echo "Starting insertion sort tests..."
	gcc ./tests/InsertionSort.c -o InsertionSort 
	InsertionSort
	@echo "Tests done"

clean:
	@echo "Starting clean..."
	del *.o *.exe
	@echo "All files cleaned"