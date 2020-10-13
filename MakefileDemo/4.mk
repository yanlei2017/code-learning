PWD = $(shell pwd)
OBJ = $(wildcard *.c)
BUILD_DIR = ./build

all: $(OBJ)
	@if [ ! -e $(BUILD_DIR) ]; \
	then \
		mkdir $(BUILD_DIR); \
		cc -o $(BUILD_DIR)/wust $(OBJ); \
	fi

clean:
	rm -rf $(BUILD_DIR)