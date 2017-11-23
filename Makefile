default: all

all:
	mkdir -p build
	cd build && cmake ../ && make

describe:
	EMPTY_SIZE=$(stat -c%s "build/empty.bin")
	echo $EMPTY_SIZE

clean:
	rm -rf build
