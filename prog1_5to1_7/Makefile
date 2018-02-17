include ../make_dir/macro.mk

all: prog1_5.exe prog1_6.exe prog1_7.exe


prog1_5.exe: $(OBJ)main1_5.o $(OBJ)functions.o
	@echo ==============================================================
	@echo "creating prog1_5.exe executable..."
	$(ECC) prog1_5.exe $(OBJ)main1_5.o $(OBJ)functions.o
	@echo "prog1_5 executable is created and moved to '../bin' directory"
	mv prog1_5.exe $(BIN)

prog1_6.exe: $(OBJ)main1_6.o $(OBJ)functions.o
	@echo ==============================================================
	@echo "creating prog1_6.exe executable..."
	$(ECC) prog1_6.exe $(OBJ)main1_6.o $(OBJ)functions.o
	@echo "prog1_6 executable is created and moved to '../bin' directory"
	mv prog1_6.exe $(BIN)

prog1_7.exe: $(OBJ)main1_7.o $(OBJ)functions.o
	@echo ==============================================================
	@echo "creating prog1_7.exe executable..."
	$(ECC) prog1_7.exe $(OBJ)main1_7.o $(OBJ)functions.o
	@echo "prog1_7 executable is created and moved to '../bin' directory"
	mv prog1_7.exe $(BIN)

$(OBJ)main1_5.o: main1_5.c $(HEADERS)ourhdr.h
	$(OCC) main1_5.c -I$(HEADERS)
	mv main1_5.o $(OBJ)

$(OBJ)main1_6.o: main1_6.c $(HEADERS)ourhdr.h
	$(OCC) main1_6.c -I$(HEADERS)
	mv main1_6.o $(OBJ)

$(OBJ)main1_7.o: main1_7.c $(HEADERS)ourhdr.h
	$(OCC) main1_7.c -I$(HEADERS)
	mv main1_7.o $(OBJ)

$(OBJ)functions.o: $(HEADERS)functions.c $(HEADERS)ourhdr.h
	$(OCC) $(HEADERS)functions.c -I$(HEADERS)
	mv functions.o $(OBJ)

clean:
	rm $(BIN)prog1_5.exe $(BIN)prog1_6.exe $(BIN)prog1_7.exe
