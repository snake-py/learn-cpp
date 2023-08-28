run:
	echo "Compiling..."
	/usr/bin/g++ -fdiagnostics-color=always -g ./*.cpp -std=c++20 -o ./main
	./main
run-clang:
	echo "Compiling..."
	/usr/bin/clang++-12 -fcolor-diagnostics -fansi-escape-codes -g ./*.cpp  -std=c++20  -o ./main
	./main