# Makefile for Assignment 3
CXX = /usr/bin/g++
MAIN = driver
CPP_FILES = todo_ui.cpp todo_list.cpp todo_item.cpp CinReader.cpp
H_FILES = todo_ui.h todo_list.h todo_item.h CinReader.h
CXXFLAGS = -fdiagnostics-color=auto -Wall -Wextra -Werror -pedantic -g

# Type 'make' to create the executable
${MAIN}: ${MAIN}.cpp ${H_FILES} ${CPP_FILES}
	${CXX} ${CXXFLAGS} ${MAIN}.cpp ${CPP_FILES} -o $@
	@echo 'Use ./${MAIN} to run'

# Type 'make style' to check your code style
style: ../../helpful_files/cpplint.py ${FILE}
	python $< --filter=-runtime/references,-legal/copyright,-readability/streams,-runtime/explicit,-build/header_guard,-build/include ${MAIN}.cpp ${H_FILES} ${CPP_FILES}

# Type 'make clean' to remove the executable
clean:
	rm -rf ${MAIN}
