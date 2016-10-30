include ../make_dir/macro.mk

prog2_1.exe: $(OBJ)main2_1.o $(OBJ)functions.o
	@echo ==============================================================
	@echo "creating prog2_1.exe executable..."
	$(ECC) prog2_1.exe $(OBJ)main2_1.o $(OBJ)functions.o
	@echo "prog2_1 executable is created and moved to '../bin' directory"
	mv prog2_1.exe $(BIN)

$(OBJ)main2_1.o: main2_1.c $(HEADERS)ourhdr.h
	$(OCC) main2_1.c -I$(HEADERS)
	mv main2_1.o $(OBJ)

$(OBJ)functions.o: $(HEADERS)functions.c $(HEADERS)ourhdr.h
	$(OCC) $(HEADERS)functions.c -I$(HEADERS)
	mv functions.o $(OBJ)

clean:
	rm $(BIN)prog2_1.exe
