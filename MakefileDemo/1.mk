BUILD_DIR = ./build
TARGET = WUST
all:main.o \
	WuhanUniversityOfScienceAndTechnology.o \
	Wuhan.o \
	University.o \
	Of.o \
	Science.o \
	And.o \
	Technology.o 

	cc -o $(TARGET) \
	main.o \
	WuhanUniversityOfScienceAndTechnology.o \
	Wuhan.o \
	University.o \
	Of.o \
	Science.o \
	And.o \
	Technology.o
	mkdir $(BUILD_DIR)
	mv *.o $(TARGET) $(BUILD_DIR)

main.o: main.c WuhanUniversityOfScienceAndTechnology.h
	cc -c main.c

WuhanUniversityOfScienceAndTechnology.o:WuhanUniversityOfScienceAndTechnology.c WuhanUniversityOfScienceAndTechnology.h
	cc -c WuhanUniversityOfScienceAndTechnology.c

Wuhan.o:Wuhan.c Wuhan.h
	cc -c Wuhan.c

University.o:University.c University.h
	cc -c University.c

Of.o:Of.c Of.h
	cc -c Of.c

Science.o :Science.c Science.h
	cc -c Science.c

And.o:And.c And.h
	cc -c And.c

Technology.o:Technology.c Technology.h
	cc -c Technology.c


clean:
	rm  -rf  $(BUILD_DIR)