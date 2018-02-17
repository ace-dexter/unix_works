include ../make_dir/macro.mk

myls: $(OBJ)list_main.o $(OBJ)functions.o
	@echo "Creating myls executable..."
	$(ECC) myls $(OBJ)functions.o $(OBJ)list_main.o
	mv myls $(BIN)
	@echo "myls executable is created and moved to '../bin' directory"

$(OBJ)list_main.o: list_main.c $(HEADERS)ourhdr.h
	$(OCC) list_main.c -I$(HEADERS)
	mv list_main.o $(OBJ)

$(OBJ)functions.o: $(HEADERS)functions.c $(HEADERS)ourhdr.h
	$(OCC) $(HEADERS)functions.c -I$(HEADERS)
	mv functions.o $(OBJ)

clean:
	@echo "Removing functions.o, list_main.o and executable 'myls'"
	rm $(OBJ)functions.o $(OBJ)list_main.o $(BIN)myls
