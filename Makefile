all:
	g++ src/Letter.cpp src/jp50.cpp -o jp50
clean:
	rm -f src/*~ src/*.o jp50
