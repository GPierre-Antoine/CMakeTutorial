.PHONY: refresh-cmake
refresh-cmake: clean cmake-build-debug

.PHONY: clean
clean:
	gitRemove -f

cmake-build-debug:
	mkdir -p cmake-build-debug && cd cmake-build-debug && cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" ..


Tutorial: cmake-build-debug
	cd cmake-build-debug && cmake --build . --target Tutorial -- -j 2

.PHONY: tests
tests: Tutorial
	cd cmake-build-debug/ && ctest