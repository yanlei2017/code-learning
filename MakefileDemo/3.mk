BUILD_DIR = ./build
TARGET = WUST
OBJ=main.o \
	WuhanUniversityOfScienceAndTechnology.o \
	Wuhan.o \
	University.o \
	Of.o \
	Science.o \
	And.o \
	Technology.o 
all:$(OBJ)
	cc -o $(TARGET) $(OBJ)
	@if [ -e $(BUILD_DIR) ]; then echo "$(BUILD_DIR) exited";else mkdir $(BUILD_DIR);fi
	@mv *.o $(TARGET) $(BUILD_DIR)

main.o:  WuhanUniversityOfScienceAndTechnology.h

WuhanUniversityOfScienceAndTechnology.o: WuhanUniversityOfScienceAndTechnology.h

Wuhan.o: Wuhan.h

University.o: University.h

Of.o: Of.h

Science.o : Science.h

And.o: And.h

Technology.o: Technology.h

.PHONY:clean
clean:
	rm  -rf  $(BUILD_DIR)