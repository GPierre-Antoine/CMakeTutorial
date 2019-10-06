clean:
	gitRemove

debug:
	mkdir -p cmake-build-debug && cd cmake-build-debug && cmake ..