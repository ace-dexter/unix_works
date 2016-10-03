include ../make_dir/macro.mk

all: prog1_3.exe prog1_4.exe


prog1_3.exe: $(OBJ)main1_3.o $(OBJ)functions.o
	@echo ==============================================================
	@echo "creating prog1_3.exe executable..."
	$(ECC) prog1_3.exe $(OBJ)main1_3.o $(OBJ)functions.o
	@echo "prog1_3 executable is created and moved to '../bin' directory"
	mv prog1_3.exe $(BIN)

prog1_4.exe: $(OBJ)main1_4.o $(OBJ)functions.o
	@echo ==============================================================
	@echo "creating prog1_4.exe executable..."
	$(ECC) prog1_4.exe $(OBJ)main1_4.o $(OBJ)functions.o
	@echo "prog1_4 executable is created and moved to '../bin' directory"
	mv prog1_4.exe $(BIN)

$(OBJ)main1_3.o: main1_3.c $(HEADERS)ourhdr.h
	$(OCC) main1_3.c -I$(HEADERS)
	mv main1_3.o $(OBJ)

$(OBJ)main1_4.o: main1_4.c $(HEADERS)ourhdr.h
	$(OCC) main1_4.c -I$(HEADERS)
	mv main1_4.o $(OBJ)

$(OBJ)functions.o: $(HEADERS)functions.c $(HEADERS)ourhdr.h
	$(OCC) $(HEADERS)functions.c -I$(HEADERS)
	mv main1_3.o $(OBJ)

clean:
	rm $(BIN)prog1_3.exe $(BIN)prog1_4.exe
