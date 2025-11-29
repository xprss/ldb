all: build

build: make_build_dir
	cmake -S . -B build
	cd build && make

make_build_dir: remove_make_dir
	mkdir build

remove_make_dir:
	rm -rf build