.PHONY: refresh-cmake
refresh-cmake: clean cmake-build-debug

.PHONY: clean
clean:
	gitRemove -f

cmake-build-debug:
	mkdir -p cmake-build-debug && cd cmake-build-debug && cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" ..


Tutorial: cmake-build-debug
	cd cmake-build-debug && make

ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif


.PHONY: run
run: Tutorial
	./cmake-build-debug/Tutorial $(RUN_ARGS)