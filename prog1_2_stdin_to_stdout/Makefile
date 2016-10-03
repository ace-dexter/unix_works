include ../make_dir/macro.mk

prog1_2.exe: $(OBJ)main1_2.o $(OBJ)functions.o
	@echo "Creating prog1_2.exe executable..."
	$(ECC) prog1_2.exe $(OBJ)main1_2.o $(OBJ)functions.o
	@echo "prog1_2.exe executable has been created and moved to ../bin"
	mv prog1_2.exe $(BIN)

$(OBJ)main1_2.o: $(SRC)main1_2.c $(HEADERS)ourhdr.h
	$(OCC) $(SRC)main1_2.c -I$(HEADERS)
	mv main1_2.o $(OBJ)

$(OBJ)functions.o: $(HEADERS)functions.c $(HEADERS)ourhdr.h
	$(OCC) $(HEADERS)functions.c -I$(HEADERS)
	mv functions.o $(OBJ)

clean:
	@echo "Removing prog1_2.exe main1_2.o functions.o"
	rm $(BIN)prog1_2.exe $(OBJ)main1_2.o $(OBJ)functions.o
