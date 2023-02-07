  GNU nano 6.2                                                            ../PA1/Makefile                                                                     
prog: main.o testQueue.o
        g++ -g main.o testQueue.o -o PA1

main.o: main.cpp testQueue.hpp
        g++ -c -g -Wall -std=c++11 main.cpp 

testQueue.o: testQueue.cpp testQueue.hpp
        g++ -c -g -Wall -std=c++11 testQueue.cpp 



clean: 
        -rm *.o

run:
        @./PA1



