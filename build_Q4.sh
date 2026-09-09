# MT26205 Antrali
nasm -f elf64 syscall.S -o syscall.o
g++ -c -nostdlib -fno-builtin basicIO.cpp -o basicIO.o
g++ -c -nostdlib -fno-builtin MT26205_Q4.cpp -o MT26205_Q4.o
g++ -nostdlib syscall.o basicIO.o MT26205_Q4.o -o MT26205_Q4

echo "Build successful. Run with: ./MT26205_Q4"
