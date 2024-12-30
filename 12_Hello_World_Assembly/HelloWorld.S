.section .note.GNU-stack,"",@progbits #For 64 bit thing

.section .rodata
    msgP1:
        .string "Hello World\n"

.section .text
.globl main # can be accessed outside file
main:
    #PROLOGUE
    pushl %ebp
    movl %esp, %ebp

    pushl $msgP1
    call printf
    addl $4, %esp

    pushl $0
    call exit
#for 32 bit
# gcc -o print HelloWorld.S 
#for 64 bit
#sudo apt install gcc-multilib g++-multilib
#gcc -m32 -no-pie -o print HelloWorld.S