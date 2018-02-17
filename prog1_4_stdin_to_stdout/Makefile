include ../make_dir/macro.mk

prog1_4.exe: $(OBJ)main1_4.o $(OBJ)functions.o
	@echo "Creating prog1_4.exe executable..."
	$(ECC) prog1_4.exe $(OBJ)main1_4.o $(OBJ)functions.o
	@echo "prog1_4.exe executable has been created and moved to ../bin"
	mv prog1_4.exe $(BIN)

$(OBJ)main1_4.o: $(SRC)main1_4.c $(HEADERS)ourhdr.h
	$(OCC) $(SRC)main1_4.c -I$(HEADERS)
	mv main1_4.o $(OBJ)

$(OBJ)functions.o: $(HEADERS)functions.c $(HEADERS)ourhdr.h
	$(OCC) $(HEADERS)functions.c -I$(HEADERS)
	mv functions.o $(OBJ)

clean:
	@echo "Removing prog1_4.exe main1_4.o functions.o"
	rm $(BIN)prog1_4.exe $(OBJ)main1_4.o $(OBJ)functions.o
