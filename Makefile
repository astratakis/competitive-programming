all: validate_api final

validate_api:
	g++ unit_testing.cpp test_functions.cpp segment_tree.hpp -o validate_api.exe

final:
	g++ export/templates.cpp -o output.exe

clean:
	rm *.exe