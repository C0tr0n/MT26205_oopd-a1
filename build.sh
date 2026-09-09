# MT26205 Antrali
#assemble the syscall.S file 
nasm -f elf64 syscall.S -o syscall.o
g++ -nostdlib syscall.o MT26205_Q2.cpp -o MT26205_Q2
echo "Build successful. Run with: ./MT26205_Q2"